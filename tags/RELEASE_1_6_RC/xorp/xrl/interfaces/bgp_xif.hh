/*
 * Copyright (c) 2001-2008 XORP, Inc.
 * See the XORP LICENSE.lgpl file for licensing, conditions, and warranties
 * on use.
 *
 * DO NOT EDIT THIS FILE - IT IS PROGRAMMATICALLY GENERATED
 *
 * Generated by 'clnt-gen'.
 *
 * $XORP: xorp/xrl/interfaces/bgp_xif.hh,v 1.53 2008/07/23 11:55:13 bms Exp $
 */

#ifndef __XRL_INTERFACES_BGP_XIF_HH__
#define __XRL_INTERFACES_BGP_XIF_HH__

#undef XORP_LIBRARY_NAME
#define XORP_LIBRARY_NAME "XifBgp"

#include "libxorp/xlog.h"
#include "libxorp/callback.hh"

#include "libxipc/xrl.hh"
#include "libxipc/xrl_error.hh"
#include "libxipc/xrl_sender.hh"


class XrlBgpV0p3Client {
public:
    XrlBgpV0p3Client(XrlSender* s) : _sender(s) {}
    virtual ~XrlBgpV0p3Client() {}

    typedef XorpCallback2<void, const XrlError&, const uint32_t*>::RefPtr GetBgpVersionCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get the BGP version currently running.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_get_bgp_version(
	const char*	dst_xrl_target_name,
	const GetBgpVersionCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr LocalConfigCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get local config
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param id our BGP ID.
     */
    bool send_local_config(
	const char*	dst_xrl_target_name,
	const string&	as,
	const IPv4&	id,
	const bool&	use_4byte_asnums,
	const LocalConfigCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetLocalAsCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set the local AS number.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param as our AS number.
     */
    bool send_set_local_as(
	const char*	dst_xrl_target_name,
	const string&	as,
	const SetLocalAsCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr Set4ByteAsSupportCB;
    /**
     *  Send Xrl intended to:
     *
     *  Allow 4-byte AS numbers.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param enable whether this is enabled.
     */
    bool send_set_4byte_as_support(
	const char*	dst_xrl_target_name,
	const bool&	enable,
	const Set4ByteAsSupportCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const string*>::RefPtr GetLocalAsCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get the local AS number.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_get_local_as(
	const char*	dst_xrl_target_name,
	const GetLocalAsCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetBgpIdCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set the BGP id.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param id our BGP ID.
     */
    bool send_set_bgp_id(
	const char*	dst_xrl_target_name,
	const IPv4&	id,
	const SetBgpIdCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const IPv4*>::RefPtr GetBgpIdCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get the BGP id.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_get_bgp_id(
	const char*	dst_xrl_target_name,
	const GetBgpIdCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetConfederationIdentifierCB;
    /**
     *  Send Xrl intended to:
     *
     *  Confederation identifier.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param as externally visible AS number.
     *
     *  @param disable true if confederations are disabled.
     */
    bool send_set_confederation_identifier(
	const char*	dst_xrl_target_name,
	const string&	as,
	const bool&	disable,
	const SetConfederationIdentifierCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetClusterIdCB;
    /**
     *  Send Xrl intended to:
     *
     *  Route reflection.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param cluster_id the route reflection cluster ID.
     *
     *  @param disable if true this router is a router reflector.
     */
    bool send_set_cluster_id(
	const char*	dst_xrl_target_name,
	const IPv4&	cluster_id,
	const bool&	disable,
	const SetClusterIdCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetDampingCB;
    /**
     *  Send Xrl intended to:
     *
     *  Route Flap Damping. RFC 2439
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param half_life decay half life in minutes.
     *
     *  @param max_suppress maximum time in minutes a route can be held down.
     *
     *  @param reuse threshold, point at which a route can be reused.
     */
    bool send_set_damping(
	const char*	dst_xrl_target_name,
	const uint32_t&	half_life,
	const uint32_t&	max_suppress,
	const uint32_t&	reuse,
	const uint32_t&	suppress,
	const bool&	disable,
	const SetDampingCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr AddPeerCB;
    /**
     *  Send Xrl intended to:
     *
     *  Add peer.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param as the peer's AS number.
     *
     *  @param next_hop the local next hop.
     *
     *  @param holdtime if traffic is not received in holdtime seconds a
     *  peering is considered down.
     */
    bool send_add_peer(
	const char*	dst_xrl_target_name,
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const string&	as,
	const IPv4&	next_hop,
	const uint32_t&	holdtime,
	const AddPeerCB&	cb
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
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const DeletePeerCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr EnablePeerCB;
    /**
     *  Send Xrl intended to:
     *
     *  Enable this peer.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_enable_peer(
	const char*	dst_xrl_target_name,
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const EnablePeerCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr DisablePeerCB;
    /**
     *  Send Xrl intended to:
     *
     *  Disable this peer.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_disable_peer(
	const char*	dst_xrl_target_name,
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const DisablePeerCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr ChangeLocalIpCB;
    /**
     *  Send Xrl intended to:
     *
     *  Change the local IP address.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param local_ip current IP address.
     *
     *  @param local_port server port.
     *
     *  @param peer_ip IP address.
     *
     *  @param peer_port peer port.
     *
     *  @param new_local_ip new IP address.
     */
    bool send_change_local_ip(
	const char*	dst_xrl_target_name,
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const string&	new_local_ip,
	const ChangeLocalIpCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr ChangeLocalPortCB;
    /**
     *  Send Xrl intended to:
     *
     *  Change the local port.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param local_ip current IP address.
     *
     *  @param local_port server port.
     *
     *  @param peer_ip IP address.
     *
     *  @param peer_port peer port.
     *
     *  @param new_local_port new local port.
     */
    bool send_change_local_port(
	const char*	dst_xrl_target_name,
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const uint32_t&	new_local_port,
	const ChangeLocalPortCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr ChangePeerPortCB;
    /**
     *  Send Xrl intended to:
     *
     *  Change the peer port.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param local_ip current IP address.
     *
     *  @param local_port server port.
     *
     *  @param peer_ip IP address.
     *
     *  @param peer_port peer port.
     */
    bool send_change_peer_port(
	const char*	dst_xrl_target_name,
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const uint32_t&	new_peer_port,
	const ChangePeerPortCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetPeerAsCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set the peer's AS number.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param peer_as the peer's AS number.
     */
    bool send_set_peer_as(
	const char*	dst_xrl_target_name,
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const string&	peer_as,
	const SetPeerAsCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetHoldtimeCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set the holdtime
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param holdtime if traffic is not received in holdtime seconds a
     *  peering is considered down.
     */
    bool send_set_holdtime(
	const char*	dst_xrl_target_name,
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const uint32_t&	holdtime,
	const SetHoldtimeCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetDelayOpenTimeCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set the delay open time
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param delay_open_time to wait is seconds before sending an open.
     */
    bool send_set_delay_open_time(
	const char*	dst_xrl_target_name,
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const uint32_t&	delay_open_time,
	const SetDelayOpenTimeCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetRouteReflectorClientCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set the route reflection client state. Is this peer a route reflector
     *  client.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param state true if peer is a route reflector client.
     */
    bool send_set_route_reflector_client(
	const char*	dst_xrl_target_name,
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const bool&	state,
	const SetRouteReflectorClientCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetConfederationMemberCB;
    /**
     *  Send Xrl intended to:
     *
     *  Is this peer a confederation member.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param state true if peer is a confederation member.
     */
    bool send_set_confederation_member(
	const char*	dst_xrl_target_name,
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const bool&	state,
	const SetConfederationMemberCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetPrefixLimitCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set the prefix limit.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param maximum number of prefixes
     *
     *  @param state true if the prefix limit is being enforced
     */
    bool send_set_prefix_limit(
	const char*	dst_xrl_target_name,
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const uint32_t&	maximum,
	const bool&	state,
	const SetPrefixLimitCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetNexthop4CB;
    /**
     *  Send Xrl intended to:
     *
     *  Set the peer's AS number.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param next_hop IPv4 nexthop.
     */
    bool send_set_nexthop4(
	const char*	dst_xrl_target_name,
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const IPv4&	next_hop,
	const SetNexthop4CB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetNexthop6CB;
    /**
     *  Send Xrl intended to:
     *
     *  Set the IPv6 nexthop.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param next_hop IPv6 nexthop
     */
    bool send_set_nexthop6(
	const char*	dst_xrl_target_name,
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const IPv6&	next_hop,
	const SetNexthop6CB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const IPv6*>::RefPtr GetNexthop6CB;
    /**
     *  Send Xrl intended to:
     *
     *  Get the IPv6 nexthop.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_get_nexthop6(
	const char*	dst_xrl_target_name,
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const GetNexthop6CB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetPeerStateCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set the peer state enabled or disabled.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param toggle enabled or disabled.
     */
    bool send_set_peer_state(
	const char*	dst_xrl_target_name,
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const bool&	toggle,
	const SetPeerStateCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetPeerMd5PasswordCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set the peer md5 password.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param password the password to use for TCP-MD5 authentication.
     */
    bool send_set_peer_md5_password(
	const char*	dst_xrl_target_name,
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const string&	password,
	const SetPeerMd5PasswordCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr ActivateCB;
    /**
     *  Send Xrl intended to:
     *
     *  Enable or disable the peering based on the peer state.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_activate(
	const char*	dst_xrl_target_name,
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const ActivateCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr SetParameterCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set which parameters we support per peer
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_set_parameter(
	const char*	dst_xrl_target_name,
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const string&	parameter,
	const bool&	toggle,
	const SetParameterCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr NextHopRewriteFilterCB;
    /**
     *  Send Xrl intended to:
     *
     *  Set next hop rewrite filter. XXX - This is a temporary hack until we
     *  get programmable filters.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_next_hop_rewrite_filter(
	const char*	dst_xrl_target_name,
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const IPv4&	next_hop,
	const NextHopRewriteFilterCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr OriginateRoute4CB;
    /**
     *  Send Xrl intended to:
     *
     *  Originate route IPv4
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param nlri subnet to announce
     *
     *  @param next_hop to forward to
     *
     *  @param unicast if true install in unicast routing table
     *
     *  @param multicast if true install in multicast routing table
     */
    bool send_originate_route4(
	const char*	dst_xrl_target_name,
	const IPv4Net&	nlri,
	const IPv4&	next_hop,
	const bool&	unicast,
	const bool&	multicast,
	const OriginateRoute4CB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr OriginateRoute6CB;
    /**
     *  Send Xrl intended to:
     *
     *  Originate route IPv6
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param nlri subnet to announce
     *
     *  @param next_hop to forward to
     *
     *  @param unicast if true install in unicast routing table
     *
     *  @param multicast if true install in multicast routing table
     */
    bool send_originate_route6(
	const char*	dst_xrl_target_name,
	const IPv6Net&	nlri,
	const IPv6&	next_hop,
	const bool&	unicast,
	const bool&	multicast,
	const OriginateRoute6CB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr WithdrawRoute4CB;
    /**
     *  Send Xrl intended to:
     *
     *  Withdraw route IPv4
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param nlri subnet to withdraw
     *
     *  @param unicast if true withdraw from unicast routing table
     *
     *  @param multicast if true withdraw from multicast routing table
     */
    bool send_withdraw_route4(
	const char*	dst_xrl_target_name,
	const IPv4Net&	nlri,
	const bool&	unicast,
	const bool&	multicast,
	const WithdrawRoute4CB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr WithdrawRoute6CB;
    /**
     *  Send Xrl intended to:
     *
     *  Withdraw route IPv6
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param nlri subnet to withdraw
     *
     *  @param unicast if true withdraw from unicast routing table
     *
     *  @param multicast if true withdraw from multicast routing table
     */
    bool send_withdraw_route6(
	const char*	dst_xrl_target_name,
	const IPv6Net&	nlri,
	const bool&	unicast,
	const bool&	multicast,
	const WithdrawRoute6CB&	cb
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

    typedef XorpCallback3<void, const XrlError&, const uint32_t*, const bool*>::RefPtr GetPeerListStartCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get the first item of a list of BGP peers See RFC 1657 (BGP MIB) for
     *  full definitions of return values.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_get_peer_list_start(
	const char*	dst_xrl_target_name,
	const GetPeerListStartCB&	cb
    );

    typedef XorpCallback6<void, const XrlError&, const string*, const uint32_t*, const string*, const uint32_t*, const bool*>::RefPtr GetPeerListNextCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get the next item of a list of BGP peers
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param token token from prior call to get_peer_list
     */
    bool send_get_peer_list_next(
	const char*	dst_xrl_target_name,
	const uint32_t&	token,
	const GetPeerListNextCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const IPv4*>::RefPtr GetPeerIdCB;

    bool send_get_peer_id(
	const char*	dst_xrl_target_name,
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const GetPeerIdCB&	cb
    );

    typedef XorpCallback3<void, const XrlError&, const uint32_t*, const uint32_t*>::RefPtr GetPeerStatusCB;

    bool send_get_peer_status(
	const char*	dst_xrl_target_name,
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const GetPeerStatusCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const int32_t*>::RefPtr GetPeerNegotiatedVersionCB;

    bool send_get_peer_negotiated_version(
	const char*	dst_xrl_target_name,
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const GetPeerNegotiatedVersionCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const string*>::RefPtr GetPeerAsCB;

    bool send_get_peer_as(
	const char*	dst_xrl_target_name,
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const GetPeerAsCB&	cb
    );

    typedef XorpCallback7<void, const XrlError&, const uint32_t*, const uint32_t*, const uint32_t*, const uint32_t*, const uint32_t*, const uint32_t*>::RefPtr GetPeerMsgStatsCB;

    bool send_get_peer_msg_stats(
	const char*	dst_xrl_target_name,
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const GetPeerMsgStatsCB&	cb
    );

    typedef XorpCallback3<void, const XrlError&, const uint32_t*, const uint32_t*>::RefPtr GetPeerEstablishedStatsCB;

    bool send_get_peer_established_stats(
	const char*	dst_xrl_target_name,
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const GetPeerEstablishedStatsCB&	cb
    );

    typedef XorpCallback8<void, const XrlError&, const uint32_t*, const uint32_t*, const uint32_t*, const uint32_t*, const uint32_t*, const uint32_t*, const uint32_t*>::RefPtr GetPeerTimerConfigCB;

    bool send_get_peer_timer_config(
	const char*	dst_xrl_target_name,
	const string&	local_ip,
	const uint32_t&	local_port,
	const string&	peer_ip,
	const uint32_t&	peer_port,
	const GetPeerTimerConfigCB&	cb
    );

    typedef XorpCallback1<void, const XrlError&>::RefPtr RegisterRibCB;
    /**
     *  Send Xrl intended to:
     *
     *  Register rib.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param name rib name.
     */
    bool send_register_rib(
	const char*	dst_xrl_target_name,
	const string&	name,
	const RegisterRibCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const uint32_t*>::RefPtr GetV4RouteListStartCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get the first item of a list of BGP routes See RFC 1657 (BGP MIB) for
     *  full definitions of return values.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param net the subtree to examine. NB Either unicast or multicast
     *  should be set to true, but not both.
     *
     *  @param unicast request start of unicast routes.
     *
     *  @param multicast request start of unicast routes.
     */
    bool send_get_v4_route_list_start(
	const char*	dst_xrl_target_name,
	const IPv4Net&	net,
	const bool&	unicast,
	const bool&	multicast,
	const GetV4RouteListStartCB&	cb
    );

    typedef XorpCallback2<void, const XrlError&, const uint32_t*>::RefPtr GetV6RouteListStartCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get the first item of a list of BGP routes See RFC 1657 (BGP MIB) for
     *  full definitions of return values.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     *
     *  @param net the subtree to examine. NB Either unicast or multicast
     *  should be set to true, but not both.
     *
     *  @param unicast request start of unicast routes.
     *
     *  @param multicast request start of multicast routes.
     */
    bool send_get_v6_route_list_start(
	const char*	dst_xrl_target_name,
	const IPv6Net&	net,
	const bool&	unicast,
	const bool&	multicast,
	const GetV6RouteListStartCB&	cb
    );

    typedef XorpCallback15<void, const XrlError&, const IPv4*, const IPv4Net*, const uint32_t*, const vector<uint8_t>*, const IPv4*, const int32_t*, const int32_t*, const int32_t*, const vector<uint8_t>*, const int32_t*, const vector<uint8_t>*, const bool*, const bool*, const bool*>::RefPtr GetV4RouteListNextCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get the next route in the list See RFC 1657 (BGP MIB) for full
     *  definitions of return values.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_get_v4_route_list_next(
	const char*	dst_xrl_target_name,
	const uint32_t&	token,
	const GetV4RouteListNextCB&	cb
    );

    typedef XorpCallback15<void, const XrlError&, const IPv4*, const IPv6Net*, const uint32_t*, const vector<uint8_t>*, const IPv6*, const int32_t*, const int32_t*, const int32_t*, const vector<uint8_t>*, const int32_t*, const vector<uint8_t>*, const bool*, const bool*, const bool*>::RefPtr GetV6RouteListNextCB;
    /**
     *  Send Xrl intended to:
     *
     *  Get the next route in the list See RFC 1657 (BGP MIB) for full
     *  definitions of return values.
     *
     *  @param dst_xrl_target_name the Xrl target name of the destination.
     */
    bool send_get_v6_route_list_next(
	const char*	dst_xrl_target_name,
	const uint32_t&	token,
	const GetV6RouteListNextCB&	cb
    );

protected:
    XrlSender* _sender;

private:
    void unmarshall_get_bgp_version(
	const XrlError&	e,
	XrlArgs*	a,
	GetBgpVersionCB		cb
    );

    void unmarshall_local_config(
	const XrlError&	e,
	XrlArgs*	a,
	LocalConfigCB		cb
    );

    void unmarshall_set_local_as(
	const XrlError&	e,
	XrlArgs*	a,
	SetLocalAsCB		cb
    );

    void unmarshall_set_4byte_as_support(
	const XrlError&	e,
	XrlArgs*	a,
	Set4ByteAsSupportCB		cb
    );

    void unmarshall_get_local_as(
	const XrlError&	e,
	XrlArgs*	a,
	GetLocalAsCB		cb
    );

    void unmarshall_set_bgp_id(
	const XrlError&	e,
	XrlArgs*	a,
	SetBgpIdCB		cb
    );

    void unmarshall_get_bgp_id(
	const XrlError&	e,
	XrlArgs*	a,
	GetBgpIdCB		cb
    );

    void unmarshall_set_confederation_identifier(
	const XrlError&	e,
	XrlArgs*	a,
	SetConfederationIdentifierCB		cb
    );

    void unmarshall_set_cluster_id(
	const XrlError&	e,
	XrlArgs*	a,
	SetClusterIdCB		cb
    );

    void unmarshall_set_damping(
	const XrlError&	e,
	XrlArgs*	a,
	SetDampingCB		cb
    );

    void unmarshall_add_peer(
	const XrlError&	e,
	XrlArgs*	a,
	AddPeerCB		cb
    );

    void unmarshall_delete_peer(
	const XrlError&	e,
	XrlArgs*	a,
	DeletePeerCB		cb
    );

    void unmarshall_enable_peer(
	const XrlError&	e,
	XrlArgs*	a,
	EnablePeerCB		cb
    );

    void unmarshall_disable_peer(
	const XrlError&	e,
	XrlArgs*	a,
	DisablePeerCB		cb
    );

    void unmarshall_change_local_ip(
	const XrlError&	e,
	XrlArgs*	a,
	ChangeLocalIpCB		cb
    );

    void unmarshall_change_local_port(
	const XrlError&	e,
	XrlArgs*	a,
	ChangeLocalPortCB		cb
    );

    void unmarshall_change_peer_port(
	const XrlError&	e,
	XrlArgs*	a,
	ChangePeerPortCB		cb
    );

    void unmarshall_set_peer_as(
	const XrlError&	e,
	XrlArgs*	a,
	SetPeerAsCB		cb
    );

    void unmarshall_set_holdtime(
	const XrlError&	e,
	XrlArgs*	a,
	SetHoldtimeCB		cb
    );

    void unmarshall_set_delay_open_time(
	const XrlError&	e,
	XrlArgs*	a,
	SetDelayOpenTimeCB		cb
    );

    void unmarshall_set_route_reflector_client(
	const XrlError&	e,
	XrlArgs*	a,
	SetRouteReflectorClientCB		cb
    );

    void unmarshall_set_confederation_member(
	const XrlError&	e,
	XrlArgs*	a,
	SetConfederationMemberCB		cb
    );

    void unmarshall_set_prefix_limit(
	const XrlError&	e,
	XrlArgs*	a,
	SetPrefixLimitCB		cb
    );

    void unmarshall_set_nexthop4(
	const XrlError&	e,
	XrlArgs*	a,
	SetNexthop4CB		cb
    );

    void unmarshall_set_nexthop6(
	const XrlError&	e,
	XrlArgs*	a,
	SetNexthop6CB		cb
    );

    void unmarshall_get_nexthop6(
	const XrlError&	e,
	XrlArgs*	a,
	GetNexthop6CB		cb
    );

    void unmarshall_set_peer_state(
	const XrlError&	e,
	XrlArgs*	a,
	SetPeerStateCB		cb
    );

    void unmarshall_set_peer_md5_password(
	const XrlError&	e,
	XrlArgs*	a,
	SetPeerMd5PasswordCB		cb
    );

    void unmarshall_activate(
	const XrlError&	e,
	XrlArgs*	a,
	ActivateCB		cb
    );

    void unmarshall_set_parameter(
	const XrlError&	e,
	XrlArgs*	a,
	SetParameterCB		cb
    );

    void unmarshall_next_hop_rewrite_filter(
	const XrlError&	e,
	XrlArgs*	a,
	NextHopRewriteFilterCB		cb
    );

    void unmarshall_originate_route4(
	const XrlError&	e,
	XrlArgs*	a,
	OriginateRoute4CB		cb
    );

    void unmarshall_originate_route6(
	const XrlError&	e,
	XrlArgs*	a,
	OriginateRoute6CB		cb
    );

    void unmarshall_withdraw_route4(
	const XrlError&	e,
	XrlArgs*	a,
	WithdrawRoute4CB		cb
    );

    void unmarshall_withdraw_route6(
	const XrlError&	e,
	XrlArgs*	a,
	WithdrawRoute6CB		cb
    );

    void unmarshall_trace(
	const XrlError&	e,
	XrlArgs*	a,
	TraceCB		cb
    );

    void unmarshall_get_peer_list_start(
	const XrlError&	e,
	XrlArgs*	a,
	GetPeerListStartCB		cb
    );

    void unmarshall_get_peer_list_next(
	const XrlError&	e,
	XrlArgs*	a,
	GetPeerListNextCB		cb
    );

    void unmarshall_get_peer_id(
	const XrlError&	e,
	XrlArgs*	a,
	GetPeerIdCB		cb
    );

    void unmarshall_get_peer_status(
	const XrlError&	e,
	XrlArgs*	a,
	GetPeerStatusCB		cb
    );

    void unmarshall_get_peer_negotiated_version(
	const XrlError&	e,
	XrlArgs*	a,
	GetPeerNegotiatedVersionCB		cb
    );

    void unmarshall_get_peer_as(
	const XrlError&	e,
	XrlArgs*	a,
	GetPeerAsCB		cb
    );

    void unmarshall_get_peer_msg_stats(
	const XrlError&	e,
	XrlArgs*	a,
	GetPeerMsgStatsCB		cb
    );

    void unmarshall_get_peer_established_stats(
	const XrlError&	e,
	XrlArgs*	a,
	GetPeerEstablishedStatsCB		cb
    );

    void unmarshall_get_peer_timer_config(
	const XrlError&	e,
	XrlArgs*	a,
	GetPeerTimerConfigCB		cb
    );

    void unmarshall_register_rib(
	const XrlError&	e,
	XrlArgs*	a,
	RegisterRibCB		cb
    );

    void unmarshall_get_v4_route_list_start(
	const XrlError&	e,
	XrlArgs*	a,
	GetV4RouteListStartCB		cb
    );

    void unmarshall_get_v6_route_list_start(
	const XrlError&	e,
	XrlArgs*	a,
	GetV6RouteListStartCB		cb
    );

    void unmarshall_get_v4_route_list_next(
	const XrlError&	e,
	XrlArgs*	a,
	GetV4RouteListNextCB		cb
    );

    void unmarshall_get_v6_route_list_next(
	const XrlError&	e,
	XrlArgs*	a,
	GetV6RouteListNextCB		cb
    );

};

#endif /* __XRL_INTERFACES_BGP_XIF_HH__ */
