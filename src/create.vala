public class Create.Window : Gtk.ApplicationWindow {
    private Gtk.Box box_vertical;
    private Gtk.Box box_horizontal_user;
    private Gtk.Box box_horizontal_button;
    private Gtk.Image user_image;
    private Gtk.Entry description_entry;
    private Gtk.Button pickImage;
    private Gtk.Button post;

    public Window (Gtk.Application app) {
        Object (
            application: app, default_height: 200, default_width: 300);
            this.application = app;
    }

    

    construct {
        this.title = "Create Post";

        box_vertical = new Gtk.Box (VERTICAL, 10);
        box_vertical.add_css_class ("verticalBox");
        box_horizontal_user = new Gtk.Box (HORIZONTAL, 10);
        box_horizontal_user.add_css_class ("userBox");
        box_horizontal_button = new Gtk.Box (HORIZONTAL, 10);
        box_horizontal_button.add_css_class ("buttonBox");
        user_image = new Gtk.Image.from_file ("/home/juan/Projects/projectUAS/src/taku-morisaki.jpg");
        user_image.set_pixel_size (30);
        description_entry = new Gtk.Entry ();
        description_entry.add_css_class("description-entry");
        description_entry.set_size_request(200, 200);
        box_horizontal_user.append (user_image);
        box_horizontal_user.append (description_entry);
        box_horizontal_user.set_hexpand(true); 
        box_horizontal_user.set_halign(Gtk.Align.CENTER);

        pickImage = new Gtk.Button.from_icon_name ("image");
        post = new Gtk.Button.with_label ("Post");
        box_horizontal_button.append (pickImage);
        box_horizontal_button.append (post);
        box_horizontal_button.set_hexpand(true); 
        box_horizontal_button.set_halign(Gtk.Align.CENTER);

        box_vertical.append (box_horizontal_user);
        box_vertical.append (box_horizontal_button);

        this.set_child (box_vertical);

        var css_provider = new Gtk.CssProvider ();
        string path = "/home/juan/Projects/projectUAS/src/style.css";
        css_provider.load_from_path (path);
        Gtk.StyleContext.add_provider_for_display (Gdk.Display.get_default (), css_provider, Gtk.STYLE_PROVIDER_PRIORITY_USER);
        
        //  pickImage.clicked.connect (image);


        post.clicked.connect (() => {
            string caption = description_entry.text;
            MainLoop loop = new MainLoop(null, false);

            Soup.Session session = new Soup.Session ();
            string json_data = @"{\"caption\": \"%s\"}".printf(caption);

            string request_data = json_data;

            Soup.Message message = new Soup.Message ("POST", "http://192.168.99.145:5000/postForum");

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

        
    }
}
//      public void image() {
//          message ("Pick Image");
//          Gtk.FileChooserDialog file_chooser = new Gtk.FileChooserDialog ("Upload Image", this, Gtk.FileChooserAction.OPEN, "Cancel", Gtk.ResponseType.CANCEL, "Open", Gtk.ResponseType.ACCEPT);
//          file_chooser.present();
//          Gtk.Button button = (Gtk.Button) file_chooser.get_widget_for_response(Gtk.ResponseType.ACCEPT);
//          file_chooser.response.connect((dialog, response) => {
//              if(response == Gtk.ResponseType.ACCEPT) {
//                  message("Image berhasil diambil");
//              } else if (response == Gtk.ResponseType.CANCEL) {
//                  message("Image tidak berhasil diambil");
//                  dialog.close();
//              }
//          });
//      }
//  }