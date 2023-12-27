/* main.c generated by valac 0.56.0, the Vala compiler
 * generated from main.vala, do not modify */

/* main.vala
 *
 * Copyright 2023 Juan Fredo
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <gtk/gtk.h>
#include <glib-object.h>
#include <gio/gio.h>

#if !defined(VALA_EXTERN)
#if defined(_MSC_VER)
#define VALA_EXTERN __declspec(dllexport) extern
#elif __GNUC__ >= 4
#define VALA_EXTERN __attribute__((visibility("default"))) extern
#else
#define VALA_EXTERN extern
#endif
#endif

#define TYPE_APPLICATION (application_get_type ())
#define APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_APPLICATION, Application))
#define APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_APPLICATION, ApplicationClass))
#define IS_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_APPLICATION))
#define IS_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_APPLICATION))
#define APPLICATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_APPLICATION, ApplicationClass))

typedef struct _Application Application;
typedef struct _ApplicationClass ApplicationClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

static gint _vala_main (gchar** args,
                 gint args_length1);
VALA_EXTERN GType application_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (Application, g_object_unref)
VALA_EXTERN Application* application_new (void);
VALA_EXTERN Application* application_construct (GType object_type);

static gint
_vala_main (gchar** args,
            gint args_length1)
{
	Application* app = NULL;
	Application* _tmp0_;
	gint result;
#line 20 "../src/main.vala"
	_tmp0_ = application_new ();
#line 20 "../src/main.vala"
	app = _tmp0_;
#line 21 "../src/main.vala"
	result = g_application_run ((GApplication*) app, (gint) args_length1, args);
#line 21 "../src/main.vala"
	_g_object_unref0 (app);
#line 21 "../src/main.vala"
	return result;
#line 75 "main.c"
}

int
main (int argc,
      char ** argv)
{
#line 19 "../src/main.vala"
	return _vala_main (argv, argc);
#line 84 "main.c"
}

