/* -*- Mode: C; ; c-file-style: "python" -*- */
/* gst-python
 * Copyright (C) 2004 Johan Dahlin
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
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 * 
 * Author: Johan Dahlin <johan@gnome.org>
 */
#ifndef __COMMON_H__
#define __COMMON_H__

#include <Python.h>

#include "pygobject.h"

typedef struct {
     PyGObject *pad;
     PyObject *link_function;
     PyObject *event_function;
     PyObject *chain_function;
     PyObject *get_function; 
} PyGstPadPrivate;

typedef struct {
     PyObject *func, *data;
} PyGstCustomNotify;

#endif /* __COMMON_H__ */