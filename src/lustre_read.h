/**
 * collectd - src/lustre_read.h
 * Copyright (C) 2014  Li Xi
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; only version 2 of the License is applicable.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 *
 * Authors:
 *   Li Xi <lixi at ddn.com>
 **/

#ifndef LUSTRE_READ_H
#define LUSTRE_READ_H
#include "lustre_config.h"
int
lustre_entry_read(struct lustre_entry *entry,
		  char *pwd,
		  struct list_head *path_head);
#endif /* LUSTRE_READ_H */

