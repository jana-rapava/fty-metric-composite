/*  =========================================================================
    fty_metric_composite_classes - private header file

    Copyright (C) 2014 - 2018 Eaton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef FTY_METRIC_COMPOSITE_CLASSES_H_INCLUDED
#define FTY_METRIC_COMPOSITE_CLASSES_H_INCLUDED

//  Platform definitions, must come first
#include "platform.h"

//  External API
#include "../include/fty_metric_composite.h"

//  Extra headers

//  Opaque class structures to allow forward references
#ifndef ACTOR_COMMANDS_T_DEFINED
typedef struct _actor_commands_t actor_commands_t;
#define ACTOR_COMMANDS_T_DEFINED
#endif
#ifndef COMM_SUBPROCESS_T_DEFINED
typedef struct _comm_subprocess_t comm_subprocess_t;
#define COMM_SUBPROCESS_T_DEFINED
#endif
#ifndef DATA_T_DEFINED
typedef struct _data_t data_t;
#define DATA_T_DEFINED
#endif
#ifndef PROTO_METRIC_UNAVAILABLE_T_DEFINED
typedef struct _proto_metric_unavailable_t proto_metric_unavailable_t;
#define PROTO_METRIC_UNAVAILABLE_T_DEFINED
#endif
#ifndef C_METRIC_CONF_T_DEFINED
typedef struct _c_metric_conf_t c_metric_conf_t;
#define C_METRIC_CONF_T_DEFINED
#endif

//  Internal API

#include "actor_commands.h"
#include "comm_subprocess.h"
#include "data.h"
#include "proto_metric_unavailable.h"
#include "c_metric_conf.h"

//  *** To avoid double-definitions, only define if building without draft ***
#ifndef FTY_METRIC_COMPOSITE_BUILD_DRAFT_API

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_METRIC_COMPOSITE_PRIVATE void
    actor_commands_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_METRIC_COMPOSITE_PRIVATE void
    comm_subprocess_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_METRIC_COMPOSITE_PRIVATE void
    data_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_METRIC_COMPOSITE_PRIVATE void
    proto_metric_unavailable_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_METRIC_COMPOSITE_PRIVATE void
    c_metric_conf_test (bool verbose);

//  Self test for private classes
FTY_METRIC_COMPOSITE_PRIVATE void
    fty_metric_composite_private_selftest (bool verbose, const char *subtest);

#endif // FTY_METRIC_COMPOSITE_BUILD_DRAFT_API

#endif
