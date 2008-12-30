/*
 * Copyright (c) 2001-2008 XORP, Inc.
 * See the XORP LICENSE.lgpl file for licensing, conditions, and warranties
 * on use.
 *
 * DO NOT EDIT THIS FILE - IT IS PROGRAMMATICALLY GENERATED
 *
 * Generated by 'clnt-gen'.
 *
 * $XORP: xorp/xrl/interfaces/vrrp_xif.hh,v 1.1 2008/10/10 01:03:25 pavlin Exp $
 */

#ifndef __XRL_INTERFACES_VRRP_XIF_HH__
#define __XRL_INTERFACES_VRRP_XIF_HH__

#undef XORP_LIBRARY_NAME
#define XORP_LIBRARY_NAME "XifVrrp"

#include "libxorp/xlog.h"
#include "libxorp/callback.hh"

#include "libxipc/xrl.hh"
#include "libxipc/xrl_error.hh"
#include "libxipc/xrl_sender.hh"


class XrlVrrpV0p1Client {
public:
    XrlVrrpV0p1Client(XrlSender* s) : _sender(s) {}
    virtual ~XrlVrrpV0p1Client() {}

    typedef XorpCallback1<void, const XrlError&>::RefPtr AddVridCB;
    /**
     *  Send Xrl intended to:
     *
     *  Create a VRRP instance.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param ifname the interface name.
     *
     *  @param vifname the vif name.
     *
     *  @param vrid the VRRP router ID.
     */
    bool send_add_vrid(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const uint32_t&	vrid,
	const AddVridCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr DeleteVridCB;
    /**
     *  Send Xrl intended to:
     *
     *  Remove a VRRP instance.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param ifname the interface name.
     *
     *  @param vifname the vif name.
     *
     *  @param vrid the VRRP router ID.
     */
    bool send_delete_vrid(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const uint32_t&	vrid,
	const DeleteVridCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetPriorityCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set the router's priority.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param ifname the interface on which VRRP is running.
     *
     *  @param vifname the vif on which VRRP is running.
     *
     *  @param vrid the VRRP router ID.
     *
     *  @param priority the new priority value.
     */
    bool send_set_priority(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const uint32_t&	vrid,
	const uint32_t&	priority,
	const SetPriorityCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetIntervalCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set the advertisement interval.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param ifname the interface on which VRRP is running.
     *
     *  @param vifname the vif on which VRRP is running.
     *
     *  @param vrid the VRRP router ID.
     *
     *  @param interval the new advertisement interval.
     */
    bool send_set_interval(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const uint32_t&	vrid,
	const uint32_t&	interval,
	const SetIntervalCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetPreemptCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set whether a high priority backup router should preempt a low priority
     *  router that is acting as a master.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param ifname the interface on which VRRP is running.
     *
     *  @param vifname the vif on which VRRP is running.
     *
     *  @param vrid the VRRP router ID.
     *
     *  @param preempt true if preemption should occur.
     */
    bool send_set_preempt(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const uint32_t&	vrid,
	const bool&	preempt,
	const SetPreemptCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetDisableCB;
    /**
     *  Send Xrl intended to:
     *
     *  Start or stop a VRRP instance.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param ifname the interface on which VRRP is running.
     *
     *  @param vifname the vif on which VRRP is running.
     *
     *  @param vrid the VRRP router ID.
     *
     *  @param disable if true, stop VRRP. Start it otherwise.
     */
    bool send_set_disable(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const uint32_t&	vrid,
	const bool&	disable,
	const SetDisableCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr AddIpCB;
    /**
     *  Send Xrl intended to:
     *
     *  Add an IP to the virtual router.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param ifname the interface on which VRRP is running.
     *
     *  @param vifname the vif on which VRRP is running.
     *
     *  @param vrid the VRRP router ID.
     *
     *  @param ip the IP address to add.
     */
    bool send_add_ip(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const uint32_t&	vrid,
	const IPv4&	ip,
	const AddIpCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr DeleteIpCB;
    /**
     *  Send Xrl intended to:
     *
     *  Remove an IP from the virtual router.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param ifname the interface on which VRRP is running.
     *
     *  @param vifname the vif on which VRRP is running.
     *
     *  @param vrid the VRRP router ID.
     *
     *  @param ip the IP address to remove.
     */
    bool send_delete_ip(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const uint32_t&	vrid,
	const IPv4&	ip,
	const DeleteIpCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const XrlAtomList*>::RefPtr GetIfsCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get the physical interfaces on which VRRP is running.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_get_ifs(
	const char*	dst_xrl_target_name,
	const GetIfsCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const XrlAtomList*>::RefPtr GetVifsCB;
    /**
     *  Send Xrl intended to:
     *
     *  For a given physical interface, get the virtual interfaces on which
     *  VRRP is running.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param ifname the physical interface name.
     */
    bool send_get_vifs(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const GetVifsCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const XrlAtomList*>::RefPtr GetVridsCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get the virtual router IDs of all the VRRP instances running on a
     *  network interface.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param ifname the physical interface name.
     *
     *  @param vifname the logical interface name.
     */
    bool send_get_vrids(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const GetVridsCB&	cb
    );

    typedef XorpCallback3<void, const XrlError&, const string*, const IPv4*>::RefPtr GetVridInfoCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get state information from a particular VRRP instance.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param ifname the interface on which the VRRP instance is running.
     *
     *  @param vifname the vif on which the instance is running.
     *
     *  @param vrid the virtual router ID of the VRRP instance.
     */
    bool send_get_vrid_info(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const uint32_t&	vrid,
	const GetVridInfoCB&	cb
    );

protected:
    XrlSender* _sender;

private:
    void unmarshall_add_vrid(
	const XrlError&	e,
	XrlArgs*	a,
	AddVridCB		cb
    );

    void unmarshall_delete_vrid(
	const XrlError&	e,
	XrlArgs*	a,
	DeleteVridCB		cb
    );

    void unmarshall_set_priority(
	const XrlError&	e,
	XrlArgs*	a,
	SetPriorityCB		cb
    );

    void unmarshall_set_interval(
	const XrlError&	e,
	XrlArgs*	a,
	SetIntervalCB		cb
    );

    void unmarshall_set_preempt(
	const XrlError&	e,
	XrlArgs*	a,
	SetPreemptCB		cb
    );

    void unmarshall_set_disable(
	const XrlError&	e,
	XrlArgs*	a,
	SetDisableCB		cb
    );

    void unmarshall_add_ip(
	const XrlError&	e,
	XrlArgs*	a,
	AddIpCB		cb
    );

    void unmarshall_delete_ip(
	const XrlError&	e,
	XrlArgs*	a,
	DeleteIpCB		cb
    );

    void unmarshall_get_ifs(
	const XrlError&	e,
	XrlArgs*	a,
	GetIfsCB		cb
    );

    void unmarshall_get_vifs(
	const XrlError&	e,
	XrlArgs*	a,
	GetVifsCB		cb
    );

    void unmarshall_get_vrids(
	const XrlError&	e,
	XrlArgs*	a,
	GetVridsCB		cb
    );

    void unmarshall_get_vrid_info(
	const XrlError&	e,
	XrlArgs*	a,
	GetVridInfoCB		cb
    );

};

#endif /* __XRL_INTERFACES_VRRP_XIF_HH__ */
