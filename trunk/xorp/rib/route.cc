// -*- c-basic-offset: 4; tab-width: 8; indent-tabs-mode: t -*-

// Copyright (c) 2001,2002 International Computer Science Institute
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software")
// to deal in the Software without restriction, subject to the conditions
// listed in the XORP LICENSE file. These conditions include: you must
// preserve this copyright notice, and you cannot mention the copyright
// holders in advertising related to the Software without their permission.
// The Software is provided WITHOUT ANY WARRANTY, EXPRESS OR IMPLIED. This
// notice is a summary of the XORP LICENSE file; the license in that file is
// legally binding.

#ident "$XORP: xorp/rib/route.cc,v 1.28 2002/12/09 18:29:33 hodson Exp $"

#include "urib_module.h"
#include "route.hh"

RouteEntry::RouteEntry()
{
    _vif = 0;
    _nh = 0;
    _admin_distance = 255;
    _metric = 0xffff;
}

RouteEntry::RouteEntry(Vif *vif, NextHop *nh, Protocol *proto, uint16_t metric)
{
    _vif = vif;
    _nh = nh;
    _proto = proto;
    _admin_distance = 255;
    _metric = metric;
}

RouteEntry::~RouteEntry() {
}



