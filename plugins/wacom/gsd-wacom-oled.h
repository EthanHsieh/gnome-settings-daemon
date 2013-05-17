/* -*- Mode: C; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2013 Przemo Firszt <przemo@firszt.eu>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 */

#ifndef __GSD_WACOM_OLED_H
#define __GSD_WACOM_OLED_H

G_BEGIN_DECLS

/* OLED parameters */
#define OLED_WIDTH		64			/*Width of OLED icon - hardware dependent*/
#define OLED_HEIGHT		32			/*Height of OLED icon - hardware dependent*/
#define LABEL_SIZE		30			/*Maximum length of text for OLED icon*/
#define MAX_TOKEN		(LABEL_SIZE >> 1)	/*Maximum number of tokens equals half of maximum number of characters*/
#define MAX_IMAGE_SIZE		1024			/*Size of buffer for storing OLED image*/
#define MAX_1ST_LINE_LEN	10			/*Maximum number of characters in 1st line of OLED icon*/

void set_oled (GsdWacomDevice *device, char *button_id, char *label);

G_END_DECLS

#endif /* __GSD_WACOM_OLED_H */
