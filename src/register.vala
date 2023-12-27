using Gtk;
using Soup;

public class Register.Window : Gtk.ApplicationWindow {
    private Gtk.Box box;
    private Gtk.Label username_label;
    private Gtk.Entry username_entry;
    private Gtk.Label password_label;
    private Gtk.Entry password_entry;
    private Gtk.Label email_label;
    private Gtk.Entry email_entry;
    private Gtk.Label notelp_label;
    private Gtk.Entry notelp_entry;
    private Gtk.Button register_button;

    public Window (Gtk.Application app) {
        Object (application: app, default_height: 200, default_width: 300);
        this.application = app;
    }

    construct {
        this.title = "Register";

        box = new Gtk.Box (VERTICAL, 10);
        username_label = new Gtk.Label ("Username:");
        username_label.set_justify (LEFT);
        username_entry = new Gtk.Entry ();
        password_label = new Gtk.Label ("Password:");
        password_entry = new Gtk.Entry ();
        email_label = new Gtk.Label ("Email");
        email_entry = new Gtk.Entry ();
        notelp_label = new Gtk.Label ("Nomor Telepon");
        notelp_entry = new Gtk.Entry ();
        register_button = new Gtk.Button.with_label ("Register");

        box.append (username_label);
        box.append (username_entry);
        box.append (email_label);
        box.append (email_entry);
        box.append (notelp_label);
        box.append (notelp_entry);
        box.append (password_label);
        box.append (password_entry);
        box.append (register_button);

        register_button.clicked.connect (() => {
            string server_url = "http://192.168.99.145:5000/users";
            string username = username_entry.text;
            string password = password_entry.text;
            string email = email_entry.text;
            string phone = notelp_entry.text;

            MainLoop loop = new MainLoop(null, false);

            Soup.Session session = new Soup.Session ();

            string json_data = @"{\"username\": \"%s\", \"password\": \"%s\", \"email\": \"%s\", \"phone\": \"%s\"}".printf (username, password, email, phone);

            string request_data = json_data;

            Soup.Message message = new Soup.Message ("POST", "http://192.168.99.145:5000/users");

            uint8[] requestData = (uint8[])request_data.data;

        
            message.set_request ("application/json", Soup.MemoryUse.COPY, requestData);

            message.finished.connect((messsage) => {
                if (message.status_code == Soup.Status.OK) {
                    print("Response from server: %s\n", (string)message.response_body.data);

                    var myapp_window = new MyApp.Window (application);
                    myapp_window.show();
                    this.hide();

                } else {
                    print("Failed to contact the server. Status Code: %d\n", (int)message.status_code);
                }

                loop.quit();
            });
            
            session.send_message (message);

            loop.run();

            string response = (string)message.response_body.data;

            
        });

        this.set_child (box);
    }
}