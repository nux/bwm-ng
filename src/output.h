/******************************************************************************
 *  bwm-ng output                                                             *
 *                                                                            *
 *  Copyright (C) 2004 Volker Gropp (vgropp@pefra.de)                         *
 *                                                                            *
 *  for more info read README.                                                *
 *                                                                            *
 *  This program is free software; you can redistribute it and/or modify      *
 *  it under the terms of the GNU General Public License as published by      *
 *  the Free Software Foundation; either version 2 of the License, or         *
 *  (at your option) any later version.                                       *
 *                                                                            *
 *  This program is distributed in the hope that it will be useful,           *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of            *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
 *  GNU General Public License for more details.                              *
 *                                                                            *
 *  You should have received a copy of the GNU General Public License         *
 *  along with this program; if not, write to the Free Software               *
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA *
 *                                                                            *
 *****************************************************************************/

#ifdef __OUTPUT_H
#else
#define __OUTPUT_H 1

#include "defines.h"
#include "types.h"

/* for csv output and time() */
#include <time.h>

extern char output_unit;
extern char output_type;
extern char dynamic;
extern char show_all_if;
extern char show_packets;
extern int output_method;
extern int input_method;
extern char *iface_list;
#ifdef CSV
extern char csv_char;
#endif
#if CSV || HTML
extern FILE *out_file;
#endif
#ifdef HTML
extern int html_refresh;
extern int html_header;
#endif
extern unsigned int delay;
#if EXTENDED_STATS
extern unsigned int avg_length;
#endif
#ifdef HAVE_CURSES
extern unsigned int max_rt;
extern unsigned int scale;
extern unsigned int show_only_if;
extern unsigned short cols;
extern unsigned short rows;
#endif

#endif
