/* gmp-util.h: utility functions */

/*
 * Copyright (C) 2003 Thomas Vander Stichele
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

#include <gtk/gtk.h>

GtkBuilder *
gmp_util_load_builder_file (const char *filename,
			    GtkWindow  *error_dialog_parent,
			    GError **error);

void
gmp_util_show_error_dialog (GtkWindow *transient_parent,
                            GtkWidget **weak_ptr,
                            const char *message_format, ...) G_GNUC_PRINTF (3, 4);

void
gmp_util_run_error_dialog (GtkWindow *transient_parent,
                           const char *message_format, ...);
