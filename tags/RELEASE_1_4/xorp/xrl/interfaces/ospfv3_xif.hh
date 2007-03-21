/*
 * Copyright (c) 2001-2007 International Computer Science Institute
 * See LICENSE file for licensing, conditions, and warranties on use.
 *
 * DO NOT EDIT THIS FILE - IT IS PROGRAMMATICALLY GENERATED
 *
 * Generated by 'clnt-gen'.
 *
 * $XORP: xorp/xrl/interfaces/ospfv3_xif.hh,v 1.13 2007/02/23 01:54:25 atanu Exp $
 */

#ifndef __XRL_INTERFACES_OSPFV3_XIF_HH__
#define __XRL_INTERFACES_OSPFV3_XIF_HH__

#undef XORP_LIBRARY_NAME
#define XORP_LIBRARY_NAME "XifOspfv3"

#include "libxorp/xlog.h"
#include "libxorp/callback.hh"

#include "libxipc/xrl.hh"
#include "libxipc/xrl_error.hh"
#include "libxipc/xrl_sender.hh"


class XrlOspfv3V0p1Client {
public:
    XrlOspfv3V0p1Client(XrlSender* s) : _sender(s) {}
    virtual ~XrlOspfv3V0p1Client() {}

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetInstanceIdCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set instance id
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_set_instance_id(
	const char*	dst_xrl_target_name,
	const uint32_t&	id,
	const SetInstanceIdCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetRouterIdCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set router id
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_set_router_id(
	const char*	dst_xrl_target_name,
	const IPv4&	id,
	const SetRouterIdCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetIpRouterAlertCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set the router alert in the IP options.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_set_ip_router_alert(
	const char*	dst_xrl_target_name,
	const bool&	ip_router_alert,
	const SetIpRouterAlertCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr CreateAreaRouterCB;
    /**
     *  Send Xrl intended to:
     *
     *  Create an area.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param area id of the area
     *
     *  @param type of area "border", "stub", "nssa"
     */
    bool send_create_area_router(
	const char*	dst_xrl_target_name,
	const IPv4&	area,
	const string&	type,
	const CreateAreaRouterCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr ChangeAreaRouterTypeCB;
    /**
     *  Send Xrl intended to:
     *
     *  Change area type.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param area id of the area
     *
     *  @param type of area "border", "stub", "nssa"
     */
    bool send_change_area_router_type(
	const char*	dst_xrl_target_name,
	const IPv4&	area,
	const string&	type,
	const ChangeAreaRouterTypeCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr DestroyAreaRouterCB;
    /**
     *  Send Xrl intended to:
     *
     *  Destroy area.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param area id of the area
     */
    bool send_destroy_area_router(
	const char*	dst_xrl_target_name,
	const IPv4&	area,
	const DestroyAreaRouterCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr CreatePeerCB;
    /**
     *  Send Xrl intended to:
     *
     *  Create a binding to an interface.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param ifname the interface.
     *
     *  @param vifname virtual interface.
     *
     *  @param type of link "p2p", "broadcast", "nbma", "p2m", "vlink"
     */
    bool send_create_peer(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const string&	type,
	const IPv4&	area,
	const CreatePeerCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr DeletePeerCB;
    /**
     *  Send Xrl intended to:
     *
     *  Delete peer.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_delete_peer(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const DeletePeerCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetPeerStateCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set the peer state up or down.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_set_peer_state(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const bool&	enable,
	const SetPeerStateCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr AddAddressPeerCB;
    /**
     *  Send Xrl intended to:
     *
     *  Add an address to the peer.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_add_address_peer(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv4&	area,
	const IPv6&	addr,
	const AddAddressPeerCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr RemoveAddressPeerCB;
    /**
     *  Send Xrl intended to:
     *
     *  Remove an address from the peer.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_remove_address_peer(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv4&	area,
	const IPv6&	addr,
	const RemoveAddressPeerCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetAddressStatePeerCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set the address state up or down.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_set_address_state_peer(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv4&	area,
	const IPv6&	addr,
	const bool&	enable,
	const SetAddressStatePeerCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr ActivatePeerCB;
    /**
     *  Send Xrl intended to:
     *
     *  Activate peer. Called once the peer and child nodes have been
     *  configured.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_activate_peer(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv4&	area,
	const ActivatePeerCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr UpdatePeerCB;
    /**
     *  Send Xrl intended to:
     *
     *  Update peer. Called if the peer and child nodes are modified.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_update_peer(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv4&	area,
	const UpdatePeerCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr AddNeighbourCB;
    /**
     *  Send Xrl intended to:
     *
     *  Add a neighbour to the peer.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_add_neighbour(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv4&	area,
	const IPv6&	neighbour_address,
	const IPv4&	neighbour_id,
	const AddNeighbourCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr RemoveNeighbourCB;
    /**
     *  Send Xrl intended to:
     *
     *  Remove a neighbour from the peer.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_remove_neighbour(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv4&	area,
	const IPv6&	neighbour_address,
	const IPv4&	neighbour_id,
	const RemoveNeighbourCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr CreateVirtualLinkCB;
    /**
     *  Send Xrl intended to:
     *
     *  Create a virtual link.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param neighbour_id the router ID of the other end of the link.
     *
     *  @param area in which an attempt has been made to configure a virtual
     *  link it has to be the backbone. Its just being passed in so it can be
     *  checked by the protocol.
     */
    bool send_create_virtual_link(
	const char*	dst_xrl_target_name,
	const IPv4&	neighbour_id,
	const IPv4&	area,
	const CreateVirtualLinkCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr DeleteVirtualLinkCB;
    /**
     *  Send Xrl intended to:
     *
     *  Delete virtual link
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param neighbour_id the router ID of the other end of the link.
     */
    bool send_delete_virtual_link(
	const char*	dst_xrl_target_name,
	const IPv4&	neighbour_id,
	const DeleteVirtualLinkCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr TransitAreaVirtualLinkCB;
    /**
     *  Send Xrl intended to:
     *
     *  The area through which the virtual link transits.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param neighbour_id the router ID of the other end of the link.
     *
     *  @param transit_area that the virtual link transits.
     */
    bool send_transit_area_virtual_link(
	const char*	dst_xrl_target_name,
	const IPv4&	neighbour_id,
	const IPv4&	transit_area,
	const TransitAreaVirtualLinkCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetInterfaceCostCB;
    /**
     *  Send Xrl intended to:
     *
     *  The edge cost of this interface.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_set_interface_cost(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv4&	area,
	const uint32_t&	cost,
	const SetInterfaceCostCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetRetransmitIntervalCB;
    /**
     *  Send Xrl intended to:
     *
     *  RxmtInterval The number of seconds between LSA retransmissions, for
     *  adjacencies belonging to this interface. Also used when retransmitting
     *  Database Description and Link State Request Packets. This should be
     *  well over the expected round-trip delay between any two routers on the
     *  attached network. The setting of this value should be conservative or
     *  needless retransmissions will result. Sample value for a local area
     *  network: 5 seconds.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_set_retransmit_interval(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv4&	area,
	const uint32_t&	interval,
	const SetRetransmitIntervalCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetInftransdelayCB;
    /**
     *  Send Xrl intended to:
     *
     *  The estimated number of seconds it takes to transmit a Link State
     *  Update Packet over this interface. LSAs contained in the Link State
     *  Update packet will have their age incremented by this amount before
     *  transmission. This value should take into account transmission and
     *  propagation delays; it must be greater than zero.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_set_inftransdelay(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv4&	area,
	const uint32_t&	delay,
	const SetInftransdelayCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetRouterPriorityCB;
    /**
     *  Send Xrl intended to:
     *
     *  Used in the designated router election.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_set_router_priority(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv4&	area,
	const uint32_t&	priority,
	const SetRouterPriorityCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetHelloIntervalCB;
    /**
     *  Send Xrl intended to:
     *
     *  The interval between hello messages.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_set_hello_interval(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv4&	area,
	const uint32_t&	interval,
	const SetHelloIntervalCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetRouterDeadIntervalCB;
    /**
     *  Send Xrl intended to:
     *
     *  The period to wait before considering a router dead.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_set_router_dead_interval(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv4&	area,
	const uint32_t&	interval,
	const SetRouterDeadIntervalCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetPassiveCB;
    /**
     *  Send Xrl intended to:
     *
     *  Toggle the passive status of an interface.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_set_passive(
	const char*	dst_xrl_target_name,
	const string&	ifname,
	const string&	vifname,
	const IPv4&	area,
	const bool&	passive,
	const SetPassiveCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr OriginateDefaultRouteCB;
    /**
     *  Send Xrl intended to:
     *
     *  If this is a "stub" or "nssa" area toggle the sending of a default
     *  route.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_originate_default_route(
	const char*	dst_xrl_target_name,
	const IPv4&	area,
	const bool&	enable,
	const OriginateDefaultRouteCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr StubDefaultCostCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set the StubDefaultCost, the default cost sent in a default route in a
     *  "stub" or "nssa" area.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_stub_default_cost(
	const char*	dst_xrl_target_name,
	const IPv4&	area,
	const uint32_t&	cost,
	const StubDefaultCostCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SummariesCB;
    /**
     *  Send Xrl intended to:
     *
     *  Toggle the sending of summaries into "stub" or "nssa" areas.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_summaries(
	const char*	dst_xrl_target_name,
	const IPv4&	area,
	const bool&	enable,
	const SummariesCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr AreaRangeAddCB;
    /**
     *  Send Xrl intended to:
     *
     *  Add area range.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_area_range_add(
	const char*	dst_xrl_target_name,
	const IPv4&	area,
	const IPv6Net&	net,
	const bool&	advertise,
	const AreaRangeAddCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr AreaRangeDeleteCB;
    /**
     *  Send Xrl intended to:
     *
     *  Delete area range.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_area_range_delete(
	const char*	dst_xrl_target_name,
	const IPv4&	area,
	const IPv6Net&	net,
	const AreaRangeDeleteCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr AreaRangeChangeStateCB;
    /**
     *  Send Xrl intended to:
     *
     *  Change the advertised state of this area.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_area_range_change_state(
	const char*	dst_xrl_target_name,
	const IPv4&	area,
	const IPv6Net&	net,
	const bool&	advertise,
	const AreaRangeChangeStateCB&	cb
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

    typedef XorpCallback5<void, const XrlError&, const bool*, const bool*, const bool*, const vector<uint8_t>*>::RefPtr GetLsaCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get a single lsa from an area. A stateless mechanism to get LSAs. The
     *  client of this interface should start from zero and continue to request
     *  LSAs (incrementing index) until toohigh becomes true.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param area database that is being searched.
     *
     *  @param index into database starting from 0.
     */
    bool send_get_lsa(
	const char*	dst_xrl_target_name,
	const IPv4&	area,
	const uint32_t&	index,
	const GetLsaCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const XrlAtomList*>::RefPtr GetAreaListCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get a list of all the configured areas. Return a list of u32 type
     *  values. Each value is an area ID.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_get_area_list(
	const char*	dst_xrl_target_name,
	const GetAreaListCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const XrlAtomList*>::RefPtr GetNeighbourListCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get the list of neighbours. Return a list of u32 type values. Each
     *  value is an internal identifier that can be used with the
     *  get_neighbour_info XRL.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_get_neighbour_list(
	const char*	dst_xrl_target_name,
	const GetNeighbourListCB&	cb
    );

    typedef XorpCallback13<void, const XrlError&, const string*, const string*, const string*, const IPv4*, const uint32_t*, const uint32_t*, const IPv4*, const uint32_t*, const IPv4*, const IPv4*, const uint32_t*, const uint32_t*>::RefPtr GetNeighbourInfoCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get information on a neighbour.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param nid neighbour ID returned by the get_neighbour_list.
     */
    bool send_get_neighbour_info(
	const char*	dst_xrl_target_name,
	const uint32_t&	nid,
	const GetNeighbourInfoCB&	cb
    );

protected:
    XrlSender* _sender;

private:
    void unmarshall_set_instance_id(
	const XrlError&	e,
	XrlArgs*	a,
	SetInstanceIdCB		cb
    );

    void unmarshall_set_router_id(
	const XrlError&	e,
	XrlArgs*	a,
	SetRouterIdCB		cb
    );

    void unmarshall_set_ip_router_alert(
	const XrlError&	e,
	XrlArgs*	a,
	SetIpRouterAlertCB		cb
    );

    void unmarshall_create_area_router(
	const XrlError&	e,
	XrlArgs*	a,
	CreateAreaRouterCB		cb
    );

    void unmarshall_change_area_router_type(
	const XrlError&	e,
	XrlArgs*	a,
	ChangeAreaRouterTypeCB		cb
    );

    void unmarshall_destroy_area_router(
	const XrlError&	e,
	XrlArgs*	a,
	DestroyAreaRouterCB		cb
    );

    void unmarshall_create_peer(
	const XrlError&	e,
	XrlArgs*	a,
	CreatePeerCB		cb
    );

    void unmarshall_delete_peer(
	const XrlError&	e,
	XrlArgs*	a,
	DeletePeerCB		cb
    );

    void unmarshall_set_peer_state(
	const XrlError&	e,
	XrlArgs*	a,
	SetPeerStateCB		cb
    );

    void unmarshall_add_address_peer(
	const XrlError&	e,
	XrlArgs*	a,
	AddAddressPeerCB		cb
    );

    void unmarshall_remove_address_peer(
	const XrlError&	e,
	XrlArgs*	a,
	RemoveAddressPeerCB		cb
    );

    void unmarshall_set_address_state_peer(
	const XrlError&	e,
	XrlArgs*	a,
	SetAddressStatePeerCB		cb
    );

    void unmarshall_activate_peer(
	const XrlError&	e,
	XrlArgs*	a,
	ActivatePeerCB		cb
    );

    void unmarshall_update_peer(
	const XrlError&	e,
	XrlArgs*	a,
	UpdatePeerCB		cb
    );

    void unmarshall_add_neighbour(
	const XrlError&	e,
	XrlArgs*	a,
	AddNeighbourCB		cb
    );

    void unmarshall_remove_neighbour(
	const XrlError&	e,
	XrlArgs*	a,
	RemoveNeighbourCB		cb
    );

    void unmarshall_create_virtual_link(
	const XrlError&	e,
	XrlArgs*	a,
	CreateVirtualLinkCB		cb
    );

    void unmarshall_delete_virtual_link(
	const XrlError&	e,
	XrlArgs*	a,
	DeleteVirtualLinkCB		cb
    );

    void unmarshall_transit_area_virtual_link(
	const XrlError&	e,
	XrlArgs*	a,
	TransitAreaVirtualLinkCB		cb
    );

    void unmarshall_set_interface_cost(
	const XrlError&	e,
	XrlArgs*	a,
	SetInterfaceCostCB		cb
    );

    void unmarshall_set_retransmit_interval(
	const XrlError&	e,
	XrlArgs*	a,
	SetRetransmitIntervalCB		cb
    );

    void unmarshall_set_inftransdelay(
	const XrlError&	e,
	XrlArgs*	a,
	SetInftransdelayCB		cb
    );

    void unmarshall_set_router_priority(
	const XrlError&	e,
	XrlArgs*	a,
	SetRouterPriorityCB		cb
    );

    void unmarshall_set_hello_interval(
	const XrlError&	e,
	XrlArgs*	a,
	SetHelloIntervalCB		cb
    );

    void unmarshall_set_router_dead_interval(
	const XrlError&	e,
	XrlArgs*	a,
	SetRouterDeadIntervalCB		cb
    );

    void unmarshall_set_passive(
	const XrlError&	e,
	XrlArgs*	a,
	SetPassiveCB		cb
    );

    void unmarshall_originate_default_route(
	const XrlError&	e,
	XrlArgs*	a,
	OriginateDefaultRouteCB		cb
    );

    void unmarshall_stub_default_cost(
	const XrlError&	e,
	XrlArgs*	a,
	StubDefaultCostCB		cb
    );

    void unmarshall_summaries(
	const XrlError&	e,
	XrlArgs*	a,
	SummariesCB		cb
    );

    void unmarshall_area_range_add(
	const XrlError&	e,
	XrlArgs*	a,
	AreaRangeAddCB		cb
    );

    void unmarshall_area_range_delete(
	const XrlError&	e,
	XrlArgs*	a,
	AreaRangeDeleteCB		cb
    );

    void unmarshall_area_range_change_state(
	const XrlError&	e,
	XrlArgs*	a,
	AreaRangeChangeStateCB		cb
    );

    void unmarshall_trace(
	const XrlError&	e,
	XrlArgs*	a,
	TraceCB		cb
    );

    void unmarshall_get_lsa(
	const XrlError&	e,
	XrlArgs*	a,
	GetLsaCB		cb
    );

    void unmarshall_get_area_list(
	const XrlError&	e,
	XrlArgs*	a,
	GetAreaListCB		cb
    );

    void unmarshall_get_neighbour_list(
	const XrlError&	e,
	XrlArgs*	a,
	GetNeighbourListCB		cb
    );

    void unmarshall_get_neighbour_info(
	const XrlError&	e,
	XrlArgs*	a,
	GetNeighbourInfoCB		cb
    );

};

#endif /* __XRL_INTERFACES_OSPFV3_XIF_HH__ */