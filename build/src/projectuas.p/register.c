/* register.c generated by valac 0.56.0, the Vala compiler
 * generated from register.vala, do not modify */

#include <gtk/gtk.h>
#include <glib-object.h>
#include <glib.h>
#include <libsoup/soup.h>
#include <stdlib.h>
#include <string.h>

#if !defined(VALA_EXTERN)
#if defined(_MSC_VER)
#define VALA_EXTERN __declspec(dllexport) extern
#elif __GNUC__ >= 4
#define VALA_EXTERN __attribute__((visibility("default"))) extern
#else
#define VALA_EXTERN extern
#endif
#endif

#define REGISTER_TYPE_WINDOW (register_window_get_type ())
#define REGISTER_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), REGISTER_TYPE_WINDOW, RegisterWindow))
#define REGISTER_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), REGISTER_TYPE_WINDOW, RegisterWindowClass))
#define REGISTER_IS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), REGISTER_TYPE_WINDOW))
#define REGISTER_IS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), REGISTER_TYPE_WINDOW))
#define REGISTER_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), REGISTER_TYPE_WINDOW, RegisterWindowClass))

typedef struct _RegisterWindow RegisterWindow;
typedef struct _RegisterWindowClass RegisterWindowClass;
typedef struct _RegisterWindowPrivate RegisterWindowPrivate;
enum  {
	REGISTER_WINDOW_0_PROPERTY,
	REGISTER_WINDOW_NUM_PROPERTIES
};
static GParamSpec* register_window_properties[REGISTER_WINDOW_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _Block3Data Block3Data;
#define _g_main_loop_unref0(var) ((var == NULL) ? NULL : (var = (g_main_loop_unref (var), NULL)))

#define MY_APP_TYPE_WINDOW (my_app_window_get_type ())
#define MY_APP_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), MY_APP_TYPE_WINDOW, MyAppWindow))
#define MY_APP_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), MY_APP_TYPE_WINDOW, MyAppWindowClass))
#define MY_APP_IS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MY_APP_TYPE_WINDOW))
#define MY_APP_IS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), MY_APP_TYPE_WINDOW))
#define MY_APP_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), MY_APP_TYPE_WINDOW, MyAppWindowClass))

typedef struct _MyAppWindow MyAppWindow;
typedef struct _MyAppWindowClass MyAppWindowClass;
#define _g_free0(var) (var = (g_free (var), NULL))

struct _RegisterWindow {
	GtkApplicationWindow parent_instance;
	RegisterWindowPrivate * priv;
};

struct _RegisterWindowClass {
	GtkApplicationWindowClass parent_class;
};

struct _RegisterWindowPrivate {
	GtkBox* box;
	GtkLabel* username_label;
	GtkEntry* username_entry;
	GtkLabel* password_label;
	GtkEntry* password_entry;
	GtkLabel* email_label;
	GtkEntry* email_entry;
	GtkLabel* notelp_label;
	GtkEntry* notelp_entry;
	GtkButton* register_button;
};

struct _Block3Data {
	int _ref_count_;
	RegisterWindow* self;
	GMainLoop* loop;
	SoupMessage* message;
};

static gint RegisterWindow_private_offset;
static gpointer register_window_parent_class = NULL;

VALA_EXTERN GType register_window_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (RegisterWindow, g_object_unref)
VALA_EXTERN RegisterWindow* register_window_new (GtkApplication* app);
VALA_EXTERN RegisterWindow* register_window_construct (GType object_type,
                                           GtkApplication* app);
static GObject * register_window_constructor (GType type,
                                       guint n_construct_properties,
                                       GObjectConstructParam * construct_properties);
static void _register_window___lambda4_ (RegisterWindow* self);
static Block3Data* block3_data_ref (Block3Data* _data3_);
static void block3_data_unref (void * _userdata_);
static guint8* _vala_array_dup3 (guint8* self,
                          gssize length);
static void __lambda5_ (Block3Data* _data3_,
                 SoupMessage* messsage);
VALA_EXTERN GType my_app_window_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MyAppWindow, g_object_unref)
VALA_EXTERN MyAppWindow* my_app_window_new (GtkApplication* app);
VALA_EXTERN MyAppWindow* my_app_window_construct (GType object_type,
                                      GtkApplication* app);
static void ___lambda5__soup_message_finished (SoupMessage* _sender,
                                        gpointer self);
static void __register_window___lambda4__gtk_button_clicked (GtkButton* _sender,
                                                      gpointer self);
static void register_window_finalize (GObject * obj);
static GType register_window_get_type_once (void);
static inline gpointer _vala_memdup2 (gconstpointer mem,
                        gsize byte_size);

static inline gpointer
register_window_get_instance_private (RegisterWindow* self)
{
	return G_STRUCT_MEMBER_P (self, RegisterWindow_private_offset);
}

RegisterWindow*
register_window_construct (GType object_type,
                           GtkApplication* app)
{
	RegisterWindow * self = NULL;
#line 16 "../src/register.vala"
	g_return_val_if_fail (app != NULL, NULL);
#line 17 "../src/register.vala"
	self = (RegisterWindow*) g_object_new (object_type, "application", app, "default-height", 200, "default-width", 300, NULL);
#line 18 "../src/register.vala"
	gtk_window_set_application ((GtkWindow*) self, app);
#line 16 "../src/register.vala"
	return self;
#line 132 "register.c"
}

RegisterWindow*
register_window_new (GtkApplication* app)
{
#line 16 "../src/register.vala"
	return register_window_construct (REGISTER_TYPE_WINDOW, app);
#line 140 "register.c"
}

static Block3Data*
block3_data_ref (Block3Data* _data3_)
{
#line 46 "../src/register.vala"
	g_atomic_int_inc (&_data3_->_ref_count_);
#line 46 "../src/register.vala"
	return _data3_;
#line 150 "register.c"
}

static void
block3_data_unref (void * _userdata_)
{
	Block3Data* _data3_;
	_data3_ = (Block3Data*) _userdata_;
#line 46 "../src/register.vala"
	if (g_atomic_int_dec_and_test (&_data3_->_ref_count_)) {
#line 160 "register.c"
		RegisterWindow* self;
#line 46 "../src/register.vala"
		self = _data3_->self;
#line 46 "../src/register.vala"
		_g_object_unref0 (_data3_->message);
#line 46 "../src/register.vala"
		_g_main_loop_unref0 (_data3_->loop);
#line 46 "../src/register.vala"
		_g_object_unref0 (self);
#line 46 "../src/register.vala"
		g_slice_free (Block3Data, _data3_);
#line 172 "register.c"
	}
}

static guint8*
string_get_data (const gchar* self,
                 gint* result_length1)
{
	guint8* result;
	guint8* res = NULL;
	gint res_length1;
	gint _res_size_;
	gint _tmp0_;
	gint _tmp1_;
	guint8* _tmp2_;
	gint _tmp2__length1;
#line 1555 "glib-2.0.vapi"
	g_return_val_if_fail (self != NULL, NULL);
#line 1556 "glib-2.0.vapi"
	res = (guint8*) self;
#line 1556 "glib-2.0.vapi"
	res_length1 = -1;
#line 1556 "glib-2.0.vapi"
	_res_size_ = res_length1;
#line 1557 "glib-2.0.vapi"
	_tmp0_ = strlen (self);
#line 1557 "glib-2.0.vapi"
	_tmp1_ = _tmp0_;
#line 1557 "glib-2.0.vapi"
	res_length1 = (gint) _tmp1_;
#line 1558 "glib-2.0.vapi"
	_tmp2_ = res;
#line 1558 "glib-2.0.vapi"
	_tmp2__length1 = res_length1;
#line 1558 "glib-2.0.vapi"
	if (result_length1) {
#line 1558 "glib-2.0.vapi"
		*result_length1 = _tmp2__length1;
#line 210 "register.c"
	}
#line 1558 "glib-2.0.vapi"
	result = _tmp2_;
#line 1558 "glib-2.0.vapi"
	return result;
#line 216 "register.c"
}

static guint8*
_vala_array_dup3 (guint8* self,
                  gssize length)
{
#line 63 "../src/register.vala"
	if (length > 0) {
#line 63 "../src/register.vala"
		return _vala_memdup2 (self, length * sizeof (guint8));
#line 227 "register.c"
	}
#line 63 "../src/register.vala"
	return NULL;
#line 231 "register.c"
}

static void
__lambda5_ (Block3Data* _data3_,
            SoupMessage* messsage)
{
	RegisterWindow* self;
	SoupMessage* _tmp0_;
	guint _tmp1_;
	guint _tmp2_;
	GMainLoop* _tmp13_;
#line 68 "../src/register.vala"
	self = _data3_->self;
#line 68 "../src/register.vala"
	g_return_if_fail (messsage != NULL);
#line 69 "../src/register.vala"
	_tmp0_ = _data3_->message;
#line 69 "../src/register.vala"
	g_object_get (_tmp0_, "status-code", &_tmp1_, NULL);
#line 69 "../src/register.vala"
	_tmp2_ = _tmp1_;
#line 69 "../src/register.vala"
	if (_tmp2_ == ((guint) SOUP_STATUS_OK)) {
#line 255 "register.c"
		SoupMessage* _tmp3_;
		SoupMessageBody* _tmp4_;
		guint8* _tmp5_;
		gint _tmp5__length1;
		MyAppWindow* myapp_window = NULL;
		GtkApplication* _tmp6_;
		GtkApplication* _tmp7_;
		MyAppWindow* _tmp8_;
		MyAppWindow* _tmp9_;
#line 70 "../src/register.vala"
		_tmp3_ = _data3_->message;
#line 70 "../src/register.vala"
		_tmp4_ = _tmp3_->response_body;
#line 70 "../src/register.vala"
		_tmp5_ = _tmp4_->data;
#line 70 "../src/register.vala"
		_tmp5__length1 = _tmp4_->length;
#line 70 "../src/register.vala"
		g_print ("Response from server: %s\n", (const gchar*) _tmp5_);
#line 72 "../src/register.vala"
		_tmp6_ = gtk_window_get_application ((GtkWindow*) self);
#line 72 "../src/register.vala"
		_tmp7_ = _tmp6_;
#line 72 "../src/register.vala"
		_tmp8_ = my_app_window_new (_tmp7_);
#line 72 "../src/register.vala"
		g_object_ref_sink (_tmp8_);
#line 72 "../src/register.vala"
		myapp_window = _tmp8_;
#line 73 "../src/register.vala"
		_tmp9_ = myapp_window;
#line 73 "../src/register.vala"
		gtk_widget_show ((GtkWidget*) _tmp9_);
#line 74 "../src/register.vala"
		gtk_widget_hide ((GtkWidget*) self);
#line 69 "../src/register.vala"
		_g_object_unref0 (myapp_window);
#line 293 "register.c"
	} else {
		SoupMessage* _tmp10_;
		guint _tmp11_;
		guint _tmp12_;
#line 77 "../src/register.vala"
		_tmp10_ = _data3_->message;
#line 77 "../src/register.vala"
		g_object_get (_tmp10_, "status-code", &_tmp11_, NULL);
#line 77 "../src/register.vala"
		_tmp12_ = _tmp11_;
#line 77 "../src/register.vala"
		g_print ("Failed to contact the server. Status Code: %d\n", (gint) _tmp12_);
#line 306 "register.c"
	}
#line 80 "../src/register.vala"
	_tmp13_ = _data3_->loop;
#line 80 "../src/register.vala"
	g_main_loop_quit (_tmp13_);
#line 312 "register.c"
}

static void
___lambda5__soup_message_finished (SoupMessage* _sender,
                                   gpointer self)
{
#line 68 "../src/register.vala"
	__lambda5_ (self, _sender);
#line 321 "register.c"
}

static void
_register_window___lambda4_ (RegisterWindow* self)
{
	Block3Data* _data3_;
	gchar* server_url = NULL;
	gchar* _tmp0_;
	gchar* username = NULL;
	GtkEntry* _tmp1_;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* password = NULL;
	GtkEntry* _tmp5_;
	const gchar* _tmp6_;
	const gchar* _tmp7_;
	gchar* _tmp8_;
	gchar* email = NULL;
	GtkEntry* _tmp9_;
	const gchar* _tmp10_;
	const gchar* _tmp11_;
	gchar* _tmp12_;
	gchar* phone = NULL;
	GtkEntry* _tmp13_;
	const gchar* _tmp14_;
	const gchar* _tmp15_;
	gchar* _tmp16_;
	GMainLoop* _tmp17_;
	SoupSession* session = NULL;
	SoupSession* _tmp18_;
	gchar* json_data = NULL;
	const gchar* _tmp19_;
	const gchar* _tmp20_;
	const gchar* _tmp21_;
	const gchar* _tmp22_;
	gchar* _tmp23_;
	gchar* request_data = NULL;
	const gchar* _tmp24_;
	gchar* _tmp25_;
	SoupMessage* _tmp26_;
	guint8* requestData = NULL;
	const gchar* _tmp27_;
	guint8* _tmp28_;
	gint _tmp28__length1;
	gint _tmp29_ = 0;
	guint8* _tmp30_;
	gint _tmp30__length1;
	guint8* _tmp31_;
	gint _tmp31__length1;
	gint requestData_length1;
	gint _requestData_size_;
	SoupMessage* _tmp32_;
	guint8* _tmp33_;
	gint _tmp33__length1;
	SoupMessage* _tmp34_;
	SoupSession* _tmp35_;
	SoupMessage* _tmp36_;
	GMainLoop* _tmp37_;
	gchar* response = NULL;
	SoupMessage* _tmp38_;
	SoupMessageBody* _tmp39_;
	guint8* _tmp40_;
	gint _tmp40__length1;
	gchar* _tmp41_;
#line 46 "../src/register.vala"
	_data3_ = g_slice_new0 (Block3Data);
#line 46 "../src/register.vala"
	_data3_->_ref_count_ = 1;
#line 46 "../src/register.vala"
	_data3_->self = g_object_ref (self);
#line 47 "../src/register.vala"
	_tmp0_ = g_strdup ("http://192.168.99.145:5000/users");
#line 47 "../src/register.vala"
	server_url = _tmp0_;
#line 48 "../src/register.vala"
	_tmp1_ = self->priv->username_entry;
#line 48 "../src/register.vala"
	_tmp2_ = gtk_editable_get_text ((GtkEditable*) _tmp1_);
#line 48 "../src/register.vala"
	_tmp3_ = _tmp2_;
#line 48 "../src/register.vala"
	_tmp4_ = g_strdup (_tmp3_);
#line 48 "../src/register.vala"
	username = _tmp4_;
#line 49 "../src/register.vala"
	_tmp5_ = self->priv->password_entry;
#line 49 "../src/register.vala"
	_tmp6_ = gtk_editable_get_text ((GtkEditable*) _tmp5_);
#line 49 "../src/register.vala"
	_tmp7_ = _tmp6_;
#line 49 "../src/register.vala"
	_tmp8_ = g_strdup (_tmp7_);
#line 49 "../src/register.vala"
	password = _tmp8_;
#line 50 "../src/register.vala"
	_tmp9_ = self->priv->email_entry;
#line 50 "../src/register.vala"
	_tmp10_ = gtk_editable_get_text ((GtkEditable*) _tmp9_);
#line 50 "../src/register.vala"
	_tmp11_ = _tmp10_;
#line 50 "../src/register.vala"
	_tmp12_ = g_strdup (_tmp11_);
#line 50 "../src/register.vala"
	email = _tmp12_;
#line 51 "../src/register.vala"
	_tmp13_ = self->priv->notelp_entry;
#line 51 "../src/register.vala"
	_tmp14_ = gtk_editable_get_text ((GtkEditable*) _tmp13_);
#line 51 "../src/register.vala"
	_tmp15_ = _tmp14_;
#line 51 "../src/register.vala"
	_tmp16_ = g_strdup (_tmp15_);
#line 51 "../src/register.vala"
	phone = _tmp16_;
#line 53 "../src/register.vala"
	_tmp17_ = g_main_loop_new (NULL, FALSE);
#line 53 "../src/register.vala"
	_data3_->loop = _tmp17_;
#line 55 "../src/register.vala"
	_tmp18_ = soup_session_new ();
#line 55 "../src/register.vala"
	session = _tmp18_;
#line 57 "../src/register.vala"
	_tmp19_ = username;
#line 57 "../src/register.vala"
	_tmp20_ = password;
#line 57 "../src/register.vala"
	_tmp21_ = email;
#line 57 "../src/register.vala"
	_tmp22_ = phone;
#line 57 "../src/register.vala"
	_tmp23_ = g_strdup_printf ("{\"username\": \"%s\", \"password\": \"%s\", \"email\": \"%s\", \"phon" \
"e\": \"%s\"}", _tmp19_, _tmp20_, _tmp21_, _tmp22_);
#line 57 "../src/register.vala"
	json_data = _tmp23_;
#line 59 "../src/register.vala"
	_tmp24_ = json_data;
#line 59 "../src/register.vala"
	_tmp25_ = g_strdup (_tmp24_);
#line 59 "../src/register.vala"
	request_data = _tmp25_;
#line 61 "../src/register.vala"
	_tmp26_ = soup_message_new ("POST", "http://192.168.99.145:5000/users");
#line 61 "../src/register.vala"
	_data3_->message = _tmp26_;
#line 63 "../src/register.vala"
	_tmp27_ = request_data;
#line 63 "../src/register.vala"
	_tmp28_ = string_get_data (_tmp27_, &_tmp29_);
#line 63 "../src/register.vala"
	_tmp28__length1 = _tmp29_;
#line 63 "../src/register.vala"
	_tmp30_ = _tmp28_;
#line 63 "../src/register.vala"
	_tmp30__length1 = _tmp28__length1;
#line 63 "../src/register.vala"
	_tmp31_ = (((guint8*) _tmp30_) != NULL) ? _vala_array_dup3 ((guint8*) _tmp30_, (_tmp30__length1 * sizeof (guint8)) / sizeof (guint8)) : ((guint8*) _tmp30_);
#line 63 "../src/register.vala"
	_tmp31__length1 = (_tmp30__length1 * sizeof (guint8)) / sizeof (guint8);
#line 63 "../src/register.vala"
	requestData = _tmp31_;
#line 63 "../src/register.vala"
	requestData_length1 = _tmp31__length1;
#line 63 "../src/register.vala"
	_requestData_size_ = requestData_length1;
#line 66 "../src/register.vala"
	_tmp32_ = _data3_->message;
#line 66 "../src/register.vala"
	_tmp33_ = requestData;
#line 66 "../src/register.vala"
	_tmp33__length1 = requestData_length1;
#line 66 "../src/register.vala"
	soup_message_set_request (_tmp32_, "application/json", SOUP_MEMORY_COPY, _tmp33_, (gsize) _tmp33__length1);
#line 68 "../src/register.vala"
	_tmp34_ = _data3_->message;
#line 68 "../src/register.vala"
	g_signal_connect_data (_tmp34_, "finished", (GCallback) ___lambda5__soup_message_finished, block3_data_ref (_data3_), (GClosureNotify) block3_data_unref, 0);
#line 83 "../src/register.vala"
	_tmp35_ = session;
#line 83 "../src/register.vala"
	_tmp36_ = _data3_->message;
#line 83 "../src/register.vala"
	soup_session_send_message (_tmp35_, _tmp36_);
#line 85 "../src/register.vala"
	_tmp37_ = _data3_->loop;
#line 85 "../src/register.vala"
	g_main_loop_run (_tmp37_);
#line 87 "../src/register.vala"
	_tmp38_ = _data3_->message;
#line 87 "../src/register.vala"
	_tmp39_ = _tmp38_->response_body;
#line 87 "../src/register.vala"
	_tmp40_ = _tmp39_->data;
#line 87 "../src/register.vala"
	_tmp40__length1 = _tmp39_->length;
#line 87 "../src/register.vala"
	_tmp41_ = g_strdup ((const gchar*) _tmp40_);
#line 87 "../src/register.vala"
	response = _tmp41_;
#line 46 "../src/register.vala"
	_g_free0 (response);
#line 46 "../src/register.vala"
	requestData = (g_free (requestData), NULL);
#line 46 "../src/register.vala"
	_g_free0 (request_data);
#line 46 "../src/register.vala"
	_g_free0 (json_data);
#line 46 "../src/register.vala"
	_g_object_unref0 (session);
#line 46 "../src/register.vala"
	_g_free0 (phone);
#line 46 "../src/register.vala"
	_g_free0 (email);
#line 46 "../src/register.vala"
	_g_free0 (password);
#line 46 "../src/register.vala"
	_g_free0 (username);
#line 46 "../src/register.vala"
	_g_free0 (server_url);
#line 46 "../src/register.vala"
	block3_data_unref (_data3_);
#line 46 "../src/register.vala"
	_data3_ = NULL;
#line 545 "register.c"
}

static void
__register_window___lambda4__gtk_button_clicked (GtkButton* _sender,
                                                 gpointer self)
{
#line 46 "../src/register.vala"
	_register_window___lambda4_ ((RegisterWindow*) self);
#line 554 "register.c"
}

static GObject *
register_window_constructor (GType type,
                             guint n_construct_properties,
                             GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	RegisterWindow * self;
	GtkBox* _tmp0_;
	GtkLabel* _tmp1_;
	GtkLabel* _tmp2_;
	GtkEntry* _tmp3_;
	GtkLabel* _tmp4_;
	GtkEntry* _tmp5_;
	GtkLabel* _tmp6_;
	GtkEntry* _tmp7_;
	GtkLabel* _tmp8_;
	GtkEntry* _tmp9_;
	GtkButton* _tmp10_;
	GtkBox* _tmp11_;
	GtkLabel* _tmp12_;
	GtkBox* _tmp13_;
	GtkEntry* _tmp14_;
	GtkBox* _tmp15_;
	GtkLabel* _tmp16_;
	GtkBox* _tmp17_;
	GtkEntry* _tmp18_;
	GtkBox* _tmp19_;
	GtkLabel* _tmp20_;
	GtkBox* _tmp21_;
	GtkEntry* _tmp22_;
	GtkBox* _tmp23_;
	GtkLabel* _tmp24_;
	GtkBox* _tmp25_;
	GtkEntry* _tmp26_;
	GtkBox* _tmp27_;
	GtkButton* _tmp28_;
	GtkButton* _tmp29_;
	GtkBox* _tmp30_;
#line 21 "../src/register.vala"
	parent_class = G_OBJECT_CLASS (register_window_parent_class);
#line 21 "../src/register.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 21 "../src/register.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, REGISTER_TYPE_WINDOW, RegisterWindow);
#line 22 "../src/register.vala"
	gtk_window_set_title ((GtkWindow*) self, "Register");
#line 24 "../src/register.vala"
	_tmp0_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_VERTICAL, 10);
#line 24 "../src/register.vala"
	g_object_ref_sink (_tmp0_);
#line 24 "../src/register.vala"
	_g_object_unref0 (self->priv->box);
#line 24 "../src/register.vala"
	self->priv->box = _tmp0_;
#line 25 "../src/register.vala"
	_tmp1_ = (GtkLabel*) gtk_label_new ("Username:");
#line 25 "../src/register.vala"
	g_object_ref_sink (_tmp1_);
#line 25 "../src/register.vala"
	_g_object_unref0 (self->priv->username_label);
#line 25 "../src/register.vala"
	self->priv->username_label = _tmp1_;
#line 26 "../src/register.vala"
	_tmp2_ = self->priv->username_label;
#line 26 "../src/register.vala"
	gtk_label_set_justify (_tmp2_, GTK_JUSTIFY_LEFT);
#line 27 "../src/register.vala"
	_tmp3_ = (GtkEntry*) gtk_entry_new ();
#line 27 "../src/register.vala"
	g_object_ref_sink (_tmp3_);
#line 27 "../src/register.vala"
	_g_object_unref0 (self->priv->username_entry);
#line 27 "../src/register.vala"
	self->priv->username_entry = _tmp3_;
#line 28 "../src/register.vala"
	_tmp4_ = (GtkLabel*) gtk_label_new ("Password:");
#line 28 "../src/register.vala"
	g_object_ref_sink (_tmp4_);
#line 28 "../src/register.vala"
	_g_object_unref0 (self->priv->password_label);
#line 28 "../src/register.vala"
	self->priv->password_label = _tmp4_;
#line 29 "../src/register.vala"
	_tmp5_ = (GtkEntry*) gtk_entry_new ();
#line 29 "../src/register.vala"
	g_object_ref_sink (_tmp5_);
#line 29 "../src/register.vala"
	_g_object_unref0 (self->priv->password_entry);
#line 29 "../src/register.vala"
	self->priv->password_entry = _tmp5_;
#line 30 "../src/register.vala"
	_tmp6_ = (GtkLabel*) gtk_label_new ("Email");
#line 30 "../src/register.vala"
	g_object_ref_sink (_tmp6_);
#line 30 "../src/register.vala"
	_g_object_unref0 (self->priv->email_label);
#line 30 "../src/register.vala"
	self->priv->email_label = _tmp6_;
#line 31 "../src/register.vala"
	_tmp7_ = (GtkEntry*) gtk_entry_new ();
#line 31 "../src/register.vala"
	g_object_ref_sink (_tmp7_);
#line 31 "../src/register.vala"
	_g_object_unref0 (self->priv->email_entry);
#line 31 "../src/register.vala"
	self->priv->email_entry = _tmp7_;
#line 32 "../src/register.vala"
	_tmp8_ = (GtkLabel*) gtk_label_new ("Nomor Telepon");
#line 32 "../src/register.vala"
	g_object_ref_sink (_tmp8_);
#line 32 "../src/register.vala"
	_g_object_unref0 (self->priv->notelp_label);
#line 32 "../src/register.vala"
	self->priv->notelp_label = _tmp8_;
#line 33 "../src/register.vala"
	_tmp9_ = (GtkEntry*) gtk_entry_new ();
#line 33 "../src/register.vala"
	g_object_ref_sink (_tmp9_);
#line 33 "../src/register.vala"
	_g_object_unref0 (self->priv->notelp_entry);
#line 33 "../src/register.vala"
	self->priv->notelp_entry = _tmp9_;
#line 34 "../src/register.vala"
	_tmp10_ = (GtkButton*) gtk_button_new_with_label ("Register");
#line 34 "../src/register.vala"
	g_object_ref_sink (_tmp10_);
#line 34 "../src/register.vala"
	_g_object_unref0 (self->priv->register_button);
#line 34 "../src/register.vala"
	self->priv->register_button = _tmp10_;
#line 36 "../src/register.vala"
	_tmp11_ = self->priv->box;
#line 36 "../src/register.vala"
	_tmp12_ = self->priv->username_label;
#line 36 "../src/register.vala"
	gtk_box_append (_tmp11_, (GtkWidget*) _tmp12_);
#line 37 "../src/register.vala"
	_tmp13_ = self->priv->box;
#line 37 "../src/register.vala"
	_tmp14_ = self->priv->username_entry;
#line 37 "../src/register.vala"
	gtk_box_append (_tmp13_, (GtkWidget*) _tmp14_);
#line 38 "../src/register.vala"
	_tmp15_ = self->priv->box;
#line 38 "../src/register.vala"
	_tmp16_ = self->priv->email_label;
#line 38 "../src/register.vala"
	gtk_box_append (_tmp15_, (GtkWidget*) _tmp16_);
#line 39 "../src/register.vala"
	_tmp17_ = self->priv->box;
#line 39 "../src/register.vala"
	_tmp18_ = self->priv->email_entry;
#line 39 "../src/register.vala"
	gtk_box_append (_tmp17_, (GtkWidget*) _tmp18_);
#line 40 "../src/register.vala"
	_tmp19_ = self->priv->box;
#line 40 "../src/register.vala"
	_tmp20_ = self->priv->notelp_label;
#line 40 "../src/register.vala"
	gtk_box_append (_tmp19_, (GtkWidget*) _tmp20_);
#line 41 "../src/register.vala"
	_tmp21_ = self->priv->box;
#line 41 "../src/register.vala"
	_tmp22_ = self->priv->notelp_entry;
#line 41 "../src/register.vala"
	gtk_box_append (_tmp21_, (GtkWidget*) _tmp22_);
#line 42 "../src/register.vala"
	_tmp23_ = self->priv->box;
#line 42 "../src/register.vala"
	_tmp24_ = self->priv->password_label;
#line 42 "../src/register.vala"
	gtk_box_append (_tmp23_, (GtkWidget*) _tmp24_);
#line 43 "../src/register.vala"
	_tmp25_ = self->priv->box;
#line 43 "../src/register.vala"
	_tmp26_ = self->priv->password_entry;
#line 43 "../src/register.vala"
	gtk_box_append (_tmp25_, (GtkWidget*) _tmp26_);
#line 44 "../src/register.vala"
	_tmp27_ = self->priv->box;
#line 44 "../src/register.vala"
	_tmp28_ = self->priv->register_button;
#line 44 "../src/register.vala"
	gtk_box_append (_tmp27_, (GtkWidget*) _tmp28_);
#line 46 "../src/register.vala"
	_tmp29_ = self->priv->register_button;
#line 46 "../src/register.vala"
	g_signal_connect_object (_tmp29_, "clicked", (GCallback) __register_window___lambda4__gtk_button_clicked, self, 0);
#line 92 "../src/register.vala"
	_tmp30_ = self->priv->box;
#line 92 "../src/register.vala"
	gtk_window_set_child ((GtkWindow*) self, (GtkWidget*) _tmp30_);
#line 21 "../src/register.vala"
	return obj;
#line 752 "register.c"
}

static void
register_window_class_init (RegisterWindowClass * klass,
                            gpointer klass_data)
{
#line 4 "../src/register.vala"
	register_window_parent_class = g_type_class_peek_parent (klass);
#line 4 "../src/register.vala"
	g_type_class_adjust_private_offset (klass, &RegisterWindow_private_offset);
#line 4 "../src/register.vala"
	G_OBJECT_CLASS (klass)->constructor = register_window_constructor;
#line 4 "../src/register.vala"
	G_OBJECT_CLASS (klass)->finalize = register_window_finalize;
#line 767 "register.c"
}

static void
register_window_instance_init (RegisterWindow * self,
                               gpointer klass)
{
#line 4 "../src/register.vala"
	self->priv = register_window_get_instance_private (self);
#line 776 "register.c"
}

static void
register_window_finalize (GObject * obj)
{
	RegisterWindow * self;
#line 4 "../src/register.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, REGISTER_TYPE_WINDOW, RegisterWindow);
#line 5 "../src/register.vala"
	_g_object_unref0 (self->priv->box);
#line 6 "../src/register.vala"
	_g_object_unref0 (self->priv->username_label);
#line 7 "../src/register.vala"
	_g_object_unref0 (self->priv->username_entry);
#line 8 "../src/register.vala"
	_g_object_unref0 (self->priv->password_label);
#line 9 "../src/register.vala"
	_g_object_unref0 (self->priv->password_entry);
#line 10 "../src/register.vala"
	_g_object_unref0 (self->priv->email_label);
#line 11 "../src/register.vala"
	_g_object_unref0 (self->priv->email_entry);
#line 12 "../src/register.vala"
	_g_object_unref0 (self->priv->notelp_label);
#line 13 "../src/register.vala"
	_g_object_unref0 (self->priv->notelp_entry);
#line 14 "../src/register.vala"
	_g_object_unref0 (self->priv->register_button);
#line 4 "../src/register.vala"
	G_OBJECT_CLASS (register_window_parent_class)->finalize (obj);
#line 807 "register.c"
}

static GType
register_window_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (RegisterWindowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) register_window_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RegisterWindow), 0, (GInstanceInitFunc) register_window_instance_init, NULL };
	GType register_window_type_id;
	register_window_type_id = g_type_register_static (gtk_application_window_get_type (), "RegisterWindow", &g_define_type_info, 0);
	RegisterWindow_private_offset = g_type_add_instance_private (register_window_type_id, sizeof (RegisterWindowPrivate));
	return register_window_type_id;
}

GType
register_window_get_type (void)
{
	static volatile gsize register_window_type_id__once = 0;
	if (g_once_init_enter (&register_window_type_id__once)) {
		GType register_window_type_id;
		register_window_type_id = register_window_get_type_once ();
		g_once_init_leave (&register_window_type_id__once, register_window_type_id);
	}
	return register_window_type_id__once;
}

static inline gpointer
_vala_memdup2 (gconstpointer mem,
               gsize byte_size)
{
	gpointer new_mem;
	if (mem && byte_size != 0) {
		new_mem = g_malloc (byte_size);
		memcpy (new_mem, mem, byte_size);
	} else {
		new_mem = NULL;
	}
	return new_mem;
}
