public class Forum.Window : Gtk.ApplicationWindow {
    private Gtk.Box all_container;
    private Gtk.Box box;
    private Gtk.Box container_info_horizontal;
    private Gtk.Box container_info_vertical;
    private Gtk.Box other_info;
    private Gtk.Image post_image;
    private Gtk.Label post_caption;
    private Gtk.Box like_box;
    private Gtk.Button like_button;
    private Gtk.Label like_count;
    private Gtk.Entry comment_entry;
    private Gtk.Button comment_button;
    private Gtk.Button create_post;


    public Window (Gtk.Application app) {
        Object (
            application: app, default_height: 500, default_width: 500);
    }

    //  protected override void destroy() {
    //      base.destroy();
    //      Application.quit();
    //  }

    //  private void fetchAndDisplayForumPostsAsync() {
    //      makeGetRequestAsync("http://your-server-address/postForum", (string forumPostsJson) => {
    //          // Handle the forum posts data
    //          processForumPosts(forumPostsJson);
    //      });
    //  }

    construct {
        this.title = "Forum";

        all_container = new Gtk.Box (VERTICAL, 10);
        other_info = new Gtk.Box (HORIZONTAL, 5);
        box = new Gtk.Box (VERTICAL, 10);
        container_info_horizontal = new Gtk.Box (HORIZONTAL, 10);
        container_info_vertical = new Gtk.Box (VERTICAL, 5);

        Gtk.Image profile_picture = new Gtk.Image.from_file ("/home/juan/Projects/projectUAS/src/taku-morisaki.jpg");
        profile_picture.set_pixel_size (30);
        container_info_horizontal.append (profile_picture);
        Gtk.Label username = new Gtk.Label ("memories");
        container_info_vertical.append (username);
        Gtk.Label posted_date = new Gtk.Label ("2 jam yang lalu");
        container_info_vertical.append (posted_date);
        container_info_horizontal.append (container_info_vertical);
        post_image = new Gtk.Image.from_file ("/home/juan/Projects/projectUAS/src/ghibli.jpg");
        post_image.set_pixel_size (500);
        post_caption = new Gtk.Label ("Hallo");
        like_box = new Gtk.Box (HORIZONTAL, 5);
        like_button = new Gtk.Button.from_icon_name ("emblem-favorite");
        like_count = new Gtk.Label ("0");
        comment_entry = new Gtk.Entry ();
        comment_button = new Gtk.Button.with_label ("Comment");
        create_post = new Gtk.Button.with_label ("Create Post");

        box.append (post_image);
        box.append (post_caption);
        box.append (like_box);
        box.append (create_post);

        like_box.append (like_button);
        like_box.append (like_count);

        other_info.append (box);

        all_container.append (container_info_horizontal);
        all_container.append (other_info);


        
        like_button.clicked.connect (() => {
            int count = int.parse (like_count.label);
            count++;
            like_count.label = count.to_string ();
        });


        comment_button.clicked.connect (() => {
            print ("Comment: %s\n", comment_entry.text);
            comment_entry.text = "";

        });

        create_post.clicked.connect (() => {
            var create_window = new Create.Window (application);
            create_window.show();
        });


        this.set_child (all_container);
    }
}