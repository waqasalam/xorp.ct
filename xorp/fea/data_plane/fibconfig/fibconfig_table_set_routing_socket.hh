// -*- c-basic-offset: 4; tab-width: 8; indent-tabs-mode: t -*-

// Copyright (c) 2001-2009 XORP, Inc.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License, Version 2, June
// 1991 as published by the Free Software Foundation. Redistribution
// and/or modification of this program under the terms of any other
// version of the GNU General Public License is not permitted.
// 
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. For more details,
// see the GNU General Public License, Version 2, a copy of which can be
// found in the XORP LICENSE.gpl file.
// 
// XORP Inc, 2953 Bunker Hill Lane, Suite 204, Santa Clara, CA 95054, USA;
// http://xorp.net

// $XORP: xorp/fea/data_plane/fibconfig/fibconfig_table_set_routing_socket.hh,v 1.9 2008/10/02 21:57:01 bms Exp $

#ifndef __FEA_DATA_PLANE_FIBCONFIG_FIBCONFIG_TABLE_SET_ROUTING_SOCKET_HH__
#define __FEA_DATA_PLANE_FIBCONFIG_FIBCONFIG_TABLE_SET_ROUTING_SOCKET_HH__

#include <xorp_config.h>
#ifdef HAVE_ROUTING_SOCKETS

#include "fea/fibconfig_table_set.hh"
#include "fea/data_plane/control_socket/routing_socket.hh"


class FibConfigTableSetRoutingSocket : public FibConfigTableSet {
public:
    /**
     * Constructor.
     *
     * @param fea_data_plane_manager the corresponding data plane manager
     * (@ref FeaDataPlaneManager).
     */
    FibConfigTableSetRoutingSocket(FeaDataPlaneManager& fea_data_plane_manager);

    /**
     * Virtual destructor.
     */
    virtual ~FibConfigTableSetRoutingSocket();

    /**
     * Start operation.
     * 
     * @param error_msg the error message (if error).
     * @return XORP_OK on success, otherwise XORP_ERROR.
     */
    virtual int start(string& error_msg);
    
    /**
     * Stop operation.
     * 
     * @param error_msg the error message (if error).
     * @return XORP_OK on success, otherwise XORP_ERROR.
     */
    virtual int stop(string& error_msg);
    
    /**
     * Set the IPv4 unicast forwarding table.
     *
     * @param fte_list the list with all entries to install into
     * the IPv4 unicast forwarding table.
     * @return XORP_OK on success, otherwise XORP_ERROR.
     */
    virtual int set_table4(const list<Fte4>& fte_list);

    /**
     * Delete all entries in the IPv4 unicast forwarding table.
     *
     * Must be within a configuration interval.
     *
     * @return XORP_OK on success, otherwise XORP_ERROR.
     */
    virtual int delete_all_entries4();

    /**
     * Set the IPv6 unicast forwarding table.
     *
     * @param fte_list the list with all entries to install into
     * the IPv6 unicast forwarding table.
     * @return XORP_OK on success, otherwise XORP_ERROR.
     */
    virtual int set_table6(const list<Fte6>& fte_list);

    /**
     * Delete all entries in the IPv6 unicast forwarding table.
     *
     * Must be within a configuration interval.
     *
     * @return XORP_OK on success, otherwise XORP_ERROR.
     */
    virtual int delete_all_entries6();

    /** Routing table ID that we are interested in might have changed.
     */
    virtual int notify_table_id_change(uint32_t new_tbl) {
	// Virtual routing tables not implemented on BSD
	UNUSED(new_tbl);
	return XORP_OK;
    }
    
private:
};

#endif
#endif // __FEA_DATA_PLANE_FIBCONFIG_FIBCONFIG_TABLE_SET_ROUTING_SOCKET_HH__
