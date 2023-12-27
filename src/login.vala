public class MyApp.Window : Gtk.ApplicationWindow {
    private Gtk.Box box;
    private Gtk.Label username_label;
    private Gtk.Entry username_entry;
    private Gtk.Label password_label;
    private Gtk.Entry password_entry;
    private Gtk.Button login_button;
    private Gtk.Button register_button;

    public Window (Gtk.Application app) {
        Object (
            application: app, default_height: 200, default_width: 300);
            this.application = app;
    }

    

    construct {
        this.title = "Login";

        box = new Gtk.Box (VERTICAL, 10);
        username_label = new Gtk.Label ("Username:");
        username_entry = new Gtk.Entry ();
        password_label = new Gtk.Label ("Password:");
        password_entry = new Gtk.Entry ();
        login_button = new Gtk.Button.with_label ("Login");
        register_button = new Gtk.Button.with_label ("Register");

        box.append (username_label);
        box.append (username_entry);
        box.append (password_label);
        box.append (password_entry);
        box.append (login_button);
        box.append (register_button);

        login_button.clicked.connect (() => {
            string username = username_entry.text;
            string password = password_entry.text;
            MainLoop loop = new MainLoop(null, false);

            Soup.Session session = new Soup.Session ();

            string json_data = @"{\"username\": \"%s\", \"password\": \"%s\"}".printf (username, password);

            string request_data = json_data;

            Soup.Message message = new Soup.Message ("POST", "http://192.168.99.145:5000/verify");

            uint8[] requestData = (uint8[])request_data.data;

            message.set_request ("application/json", Soup.MemoryUse.COPY, requestData);

            message.finished.connect((messsage) => {
                if (message.status_code == Soup.Status.OK) {
                    print("Response from server: %s\n", (string)message.response_body.data);

                    var forum_window = new Forum.Window (application);
                    forum_window.show();
                    this.hide ();

                } else {
                    print("Failed to contact the server. Status Code: %d\n", (int)message.status_code);
                }

                loop.quit();
            });

            session.send_message (message);

            loop.run();

            string response = (string)message.response_body.data;
        });

        register_button.clicked.connect (() => {
            var register_window = new Register.Window (application);
            register_window.show();
            this.hide ();
        });

        this.set_child (box);
    }
}
