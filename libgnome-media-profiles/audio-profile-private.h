/* audio-profile-private.h: private audio profile header file */ 

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

#ifndef AUDIO_PROFILE_PRIVATE_H
#define AUDIO_PROFILE_PRIVATE_H

#include <gconf/gconf-client.h>

#include "gmp-conf.h"
#include "audio-profile.h"

G_BEGIN_DECLS

GMAudioProfile*	gm_audio_profile_new		(const char *name,
                                                 GConfClient *conf);
char *          gm_audio_profile_create            (const char *name,
                                                 GConfClient *conf,
                                                 GError **error);

void		gm_audio_profile_initialize	(GConfClient *conf);
GList*		gm_audio_profile_get_list		(void);
int		gm_audio_profile_get_count		(void);
void		gm_audio_profile_forget		(GMAudioProfile *profile);
void		gm_audio_profile_sync_list         (gboolean use_this_list,
                                                 GSList  *this_list);


gboolean	gm_audio_setting_mask_is_empty	(const GMAudioSettingMask *mask);

void		gm_audio_profile_delete_list	(GConfClient *conf,
						 GList *deleted_profiles,
						 GError **error);

G_END_DECLS

#endif /* AUDIO_PROFILE_PRIVATE_H */
