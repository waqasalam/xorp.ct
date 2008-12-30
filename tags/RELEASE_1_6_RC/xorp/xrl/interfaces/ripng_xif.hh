/*
 * Copyright (c) 2001-2008 XORP, Inc.
 * See the XORP LICENSE.lgpl file for licensing, conditions, and warranties
 * on use.
 *
 * DO NOT EDIT THIS FILE - IT IS PROGRAMMATICALLY GENERATED
 *
 * Generated by 'clnt-gen'.
 *
 * $XORP: xorp/xrl/interfaces/ripng_xif.hh,v 1.18 2008/10/02 21:58:39 bms Exp $
 */

#ifndef __XRL_INTERFACES_RIPNG_XIF_HH__
#define __XRL_INTERFACES_RIPNG_XIF_HH__

#undef XORP_LIBRARY_NAME
#define XORP_LIBRARY_NAME "XifRipng"

#include "libxorp/xlog.h"
#include "libxorp/callback.hh"

#include "libxipc/xrl.hh"
#include "libxipc/xrl_error.hh"
#include "libxipc/xrl_sender.hh"


class XrlRipngV0p1Client {
public:
    XrlRipngV0p1Client(XrlSender* s) : _sender(s) {}
    virtual ~XrlRipngV0p1Client() {}

    typedef XorpCallback1<void, const XrlError&>::RefPtr AddRipAddressCB;
    /**
     *  Send Xrl intended to:
     *
     *  Add an address to run RIP process on. The addition of address is not
     *  instantaneous, RIP has to instantiate state in the FEA to send and
     *  receive packets. Once instantiated the address must be explicitly
     *  enabled with set_rip_address_enabled.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param ifname the interface that owns vif that has address.
     *
     *  @param vifname virtual interface owning address.
     *
     *  @param addr the address to be added.
     */
    bool send_add_rip_address(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const AddRipAddressCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr RemoveRipAddressCB;
    /**
     *  Send Xrl intended to:
     *
     *  Remove an address RIP process is running on.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param ifname the interface that owns vif that has address.
     *
     *  @param vifname virtual interface owning address.
     *
     *  @param addr the address to be removed.
     */
    bool send_remove_rip_address(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const RemoveRipAddressCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetRipAddressEnabledCB;

    bool send_set_rip_address_enabled(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const bool&	enabled,
	const SetRipAddressEnabledCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const bool*>::RefPtr RipAddressEnabledCB;

    bool send_rip_address_enabled(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const RipAddressEnabledCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetCostCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set cost metric associated with address.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_set_cost(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const uint32_t&	cost,
	const SetCostCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const uint32_t*>::RefPtr CostCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get cost metric associated with address.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_cost(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const CostCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetHorizonCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set horizon type applied to routes advertised from address.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param horizon name of horizon type. Permitted values: "none",
     *  "poison-reverse" "split-horizon-poison-reverse"
     */
    bool send_set_horizon(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const string&	horizon,
	const SetHorizonCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const string*>::RefPtr HorizonCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get horizon type applied to routes advertised from address.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_horizon(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const HorizonCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetPassiveCB;
    /**
     *  Send Xrl intended to:
     *
     *  Make RIP passive (receive only) on interface/vif/address.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_set_passive(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const bool&	passive,
	const SetPassiveCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const bool*>::RefPtr PassiveCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get value indicating whether RIP is passive (receive only) on
     *  interface/vif/address.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_passive(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const PassiveCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetAcceptNonRipRequestsCB;
    /**
     *  Send Xrl intended to:
     *
     *  Accept and respond to non-RIP requests.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_set_accept_non_rip_requests(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const bool&	accept,
	const SetAcceptNonRipRequestsCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const bool*>::RefPtr AcceptNonRipRequestsCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get value indicating whether non-RIP requests are accepted and
     *  responded to on interface/vif/address.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_accept_non_rip_requests(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const AcceptNonRipRequestsCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetAcceptDefaultRouteCB;
    /**
     *  Send Xrl intended to:
     *
     *  Accept default route from peers.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_set_accept_default_route(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const bool&	accept,
	const SetAcceptDefaultRouteCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const bool*>::RefPtr AcceptDefaultRouteCB;
    /**
     *  Send Xrl intended to:
     *
     *  Accessor for whether default route is accepted from peers.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_accept_default_route(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const AcceptDefaultRouteCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetAdvertiseDefaultRouteCB;
    /**
     *  Send Xrl intended to:
     *
     *  Advertise default route (if present).
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_set_advertise_default_route(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const bool&	advertise,
	const SetAdvertiseDefaultRouteCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const bool*>::RefPtr AdvertiseDefaultRouteCB;
    /**
     *  Send Xrl intended to:
     *
     *  Accessor for whether default route is advertised.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_advertise_default_route(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const AdvertiseDefaultRouteCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetRouteTimeoutCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set period that routes associated with reception address will expire in
     *  the absence of updates.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_set_route_timeout(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const uint32_t&	t_secs,
	const SetRouteTimeoutCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const uint32_t*>::RefPtr RouteTimeoutCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get period that routes associated with reception address will expire in
     *  the absence of updates.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_route_timeout(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const RouteTimeoutCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetDeletionDelayCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set period that routes associated with reception address will be
     *  deleted after they've expired.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_set_deletion_delay(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const uint32_t&	t_secs,
	const SetDeletionDelayCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const uint32_t*>::RefPtr DeletionDelayCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get period that routes associated with reception address will be
     *  deleted after they've expired.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_deletion_delay(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const DeletionDelayCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetRequestIntervalCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set period that route table requests should be sent from address when
     *  no peers are associated with it.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_set_request_interval(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const uint32_t&	t_secs,
	const SetRequestIntervalCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const uint32_t*>::RefPtr RequestIntervalCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set period that route table requests should be sent from address when
     *  no peers are associated with it.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_request_interval(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const RequestIntervalCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetUpdateIntervalCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set period between the unsolicited sending of the routing table from
     *  address.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_set_update_interval(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const uint32_t&	t_secs,
	const SetUpdateIntervalCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const uint32_t*>::RefPtr UpdateIntervalCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get period between the unsolicited sending of the routing table from
     *  address.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_update_interval(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const UpdateIntervalCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetUpdateJitterCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set jitter between the unsolicited sending of the routing table from
     *  address (in percents of the period).
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_set_update_jitter(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const uint32_t&	t_jitter,
	const SetUpdateJitterCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const uint32_t*>::RefPtr UpdateJitterCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get jitter between the unsolicited sending of the routing table from
     *  address (in percents of the period).
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_update_jitter(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const UpdateJitterCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetTriggeredUpdateDelayCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set period between sending triggered updates from address.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_set_triggered_update_delay(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const uint32_t&	t_secs,
	const SetTriggeredUpdateDelayCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const uint32_t*>::RefPtr TriggeredUpdateDelayCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set period between sending triggered updates from address.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_triggered_update_delay(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const TriggeredUpdateDelayCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetTriggeredUpdateJitterCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set jitter between sending triggered updates from address (in percents
     *  of the period).
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_set_triggered_update_jitter(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const uint32_t&	t_jitter,
	const SetTriggeredUpdateJitterCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const uint32_t*>::RefPtr TriggeredUpdateJitterCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get jitter between sending triggered updates from address (in percents
     *  of the period).
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_triggered_update_jitter(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const TriggeredUpdateJitterCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetInterpacketDelayCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set the inter-packet delay between the output of packets from address.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_set_interpacket_delay(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const uint32_t&	t_msecs,
	const SetInterpacketDelayCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const uint32_t*>::RefPtr InterpacketDelayCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get the inter-packet delay between the output of packets from address.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_interpacket_delay(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const InterpacketDelayCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const string*>::RefPtr RipAddressStatusCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get a textual description of the status of address RIP is running upon.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param ifname the interface that owns vif that has the address.
     *
     *  @param vifname virtual interface owns the address.
     *
     *  @param addr the address to query.
     */
    bool send_rip_address_status(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const RipAddressStatusCB&	cb
    );

    typedef XorpCallback4<void, const XrlError&, const XrlAtomList*, const XrlAtomList*, const XrlAtomList*>::RefPtr GetAllAddressesCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get addresses running RIP.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_get_all_addresses(
	const char*	dst_xrl_target_name,
	const GetAllAddressesCB&	cb
    );

    typedef XorpCallback3<void, const XrlError&, const XrlAtomList*, const XrlAtomList*>::RefPtr GetCountersCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get counters associated with interface / vif /address.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_get_counters(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const GetCountersCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const XrlAtomList*>::RefPtr GetPeersCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get the list of peers associated with interface / vif / address.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_get_peers(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const GetPeersCB&	cb
    );

    typedef XorpCallback5<void, const XrlError&, const XrlAtomList*, const XrlAtomList*, const XrlAtomList*, const XrlAtomList*>::RefPtr GetAllPeersCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get list of all peers known to RIP. There is a 1-to-1 correspondence
     *  between the items in the lists of peers, ifnames, vifnames, addrs.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_get_all_peers(
	const char*	dst_xrl_target_name,
	const GetAllPeersCB&	cb
    );

    typedef XorpCallback4<void, const XrlError&, const XrlAtomList*, const XrlAtomList*, const uint32_t*>::RefPtr GetPeerCountersCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get counters associated with peer of interface / vif /address.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_get_peer_counters(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv6&	addr,
	const IPv6&	peer,
	const GetPeerCountersCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr TraceCB;
    /**
     *  Send Xrl intended to:
     *
     *  Enable/Disable tracing.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param tvar trace variable.
     *
     *  @param enable set to true to enable false to disable.
     */
    bool send_trace(
	const char*	dst_xrl_target_name,
	const string&	tvar,
	const bool&	enable,
	const TraceCB&	cb
    );

protected:
    XrlSender* _sender;

private:
    void unmarshall_add_rip_address(
	const XrlError&	e,
	XrlArgs*	a,
	AddRipAddressCB		cb
    );

    void unmarshall_remove_rip_address(
	const XrlError&	e,
	XrlArgs*	a,
	RemoveRipAddressCB		cb
    );

    void unmarshall_set_rip_address_enabled(
	const XrlError&	e,
	XrlArgs*	a,
	SetRipAddressEnabledCB		cb
    );

    void unmarshall_rip_address_enabled(
	const XrlError&	e,
	XrlArgs*	a,
	RipAddressEnabledCB		cb
    );

    void unmarshall_set_cost(
	const XrlError&	e,
	XrlArgs*	a,
	SetCostCB		cb
    );

    void unmarshall_cost(
	const XrlError&	e,
	XrlArgs*	a,
	CostCB		cb
    );

    void unmarshall_set_horizon(
	const XrlError&	e,
	XrlArgs*	a,
	SetHorizonCB		cb
    );

    void unmarshall_horizon(
	const XrlError&	e,
	XrlArgs*	a,
	HorizonCB		cb
    );

    void unmarshall_set_passive(
	const XrlError&	e,
	XrlArgs*	a,
	SetPassiveCB		cb
    );

    void unmarshall_passive(
	const XrlError&	e,
	XrlArgs*	a,
	PassiveCB		cb
    );

    void unmarshall_set_accept_non_rip_requests(
	const XrlError&	e,
	XrlArgs*	a,
	SetAcceptNonRipRequestsCB		cb
    );

    void unmarshall_accept_non_rip_requests(
	const XrlError&	e,
	XrlArgs*	a,
	AcceptNonRipRequestsCB		cb
    );

    void unmarshall_set_accept_default_route(
	const XrlError&	e,
	XrlArgs*	a,
	SetAcceptDefaultRouteCB		cb
    );

    void unmarshall_accept_default_route(
	const XrlError&	e,
	XrlArgs*	a,
	AcceptDefaultRouteCB		cb
    );

    void unmarshall_set_advertise_default_route(
	const XrlError&	e,
	XrlArgs*	a,
	SetAdvertiseDefaultRouteCB		cb
    );

    void unmarshall_advertise_default_route(
	const XrlError&	e,
	XrlArgs*	a,
	AdvertiseDefaultRouteCB		cb
    );

    void unmarshall_set_route_timeout(
	const XrlError&	e,
	XrlArgs*	a,
	SetRouteTimeoutCB		cb
    );

    void unmarshall_route_timeout(
	const XrlError&	e,
	XrlArgs*	a,
	RouteTimeoutCB		cb
    );

    void unmarshall_set_deletion_delay(
	const XrlError&	e,
	XrlArgs*	a,
	SetDeletionDelayCB		cb
    );

    void unmarshall_deletion_delay(
	const XrlError&	e,
	XrlArgs*	a,
	DeletionDelayCB		cb
    );

    void unmarshall_set_request_interval(
	const XrlError&	e,
	XrlArgs*	a,
	SetRequestIntervalCB		cb
    );

    void unmarshall_request_interval(
	const XrlError&	e,
	XrlArgs*	a,
	RequestIntervalCB		cb
    );

    void unmarshall_set_update_interval(
	const XrlError&	e,
	XrlArgs*	a,
	SetUpdateIntervalCB		cb
    );

    void unmarshall_update_interval(
	const XrlError&	e,
	XrlArgs*	a,
	UpdateIntervalCB		cb
    );

    void unmarshall_set_update_jitter(
	const XrlError&	e,
	XrlArgs*	a,
	SetUpdateJitterCB		cb
    );

    void unmarshall_update_jitter(
	const XrlError&	e,
	XrlArgs*	a,
	UpdateJitterCB		cb
    );

    void unmarshall_set_triggered_update_delay(
	const XrlError&	e,
	XrlArgs*	a,
	SetTriggeredUpdateDelayCB		cb
    );

    void unmarshall_triggered_update_delay(
	const XrlError&	e,
	XrlArgs*	a,
	TriggeredUpdateDelayCB		cb
    );

    void unmarshall_set_triggered_update_jitter(
	const XrlError&	e,
	XrlArgs*	a,
	SetTriggeredUpdateJitterCB		cb
    );

    void unmarshall_triggered_update_jitter(
	const XrlError&	e,
	XrlArgs*	a,
	TriggeredUpdateJitterCB		cb
    );

    void unmarshall_set_interpacket_delay(
	const XrlError&	e,
	XrlArgs*	a,
	SetInterpacketDelayCB		cb
    );

    void unmarshall_interpacket_delay(
	const XrlError&	e,
	XrlArgs*	a,
	InterpacketDelayCB		cb
    );

    void unmarshall_rip_address_status(
	const XrlError&	e,
	XrlArgs*	a,
	RipAddressStatusCB		cb
    );

    void unmarshall_get_all_addresses(
	const XrlError&	e,
	XrlArgs*	a,
	GetAllAddressesCB		cb
    );

    void unmarshall_get_counters(
	const XrlError&	e,
	XrlArgs*	a,
	GetCountersCB		cb
    );

    void unmarshall_get_peers(
	const XrlError&	e,
	XrlArgs*	a,
	GetPeersCB		cb
    );

    void unmarshall_get_all_peers(
	const XrlError&	e,
	XrlArgs*	a,
	GetAllPeersCB		cb
    );

    void unmarshall_get_peer_counters(
	const XrlError&	e,
	XrlArgs*	a,
	GetPeerCountersCB		cb
    );

    void unmarshall_trace(
	const XrlError&	e,
	XrlArgs*	a,
	TraceCB		cb
    );

};

#endif /* __XRL_INTERFACES_RIPNG_XIF_HH__ */
