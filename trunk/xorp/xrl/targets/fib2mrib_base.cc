/*
 * Copyright (c) 2001-2009 XORP, Inc.
 * See the XORP LICENSE.lgpl file for licensing, conditions, and warranties
 * on use.
 *
 * DO NOT EDIT THIS FILE - IT IS PROGRAMMATICALLY GENERATED
 *
 * Generated by 'tgt-gen'.
 */




#include "fib2mrib_base.hh"


const struct XrlFib2mribTargetBase::handler_table XrlFib2mribTargetBase::handlers[] = {
    { "common/0.1/get_target_name",
      &XrlFib2mribTargetBase::handle_common_0_1_get_target_name },
    { "common/0.1/get_version",
      &XrlFib2mribTargetBase::handle_common_0_1_get_version },
    { "common/0.1/get_status",
      &XrlFib2mribTargetBase::handle_common_0_1_get_status },
    { "common/0.1/shutdown",
      &XrlFib2mribTargetBase::handle_common_0_1_shutdown },
    { "finder_event_observer/0.1/xrl_target_birth",
      &XrlFib2mribTargetBase::handle_finder_event_observer_0_1_xrl_target_birth },
    { "finder_event_observer/0.1/xrl_target_death",
      &XrlFib2mribTargetBase::handle_finder_event_observer_0_1_xrl_target_death },
    { "fea_fib_client/0.1/add_route4",
      &XrlFib2mribTargetBase::handle_fea_fib_client_0_1_add_route4 },
    { "fea_fib_client/0.1/add_route6",
      &XrlFib2mribTargetBase::handle_fea_fib_client_0_1_add_route6 },
    { "fea_fib_client/0.1/replace_route4",
      &XrlFib2mribTargetBase::handle_fea_fib_client_0_1_replace_route4 },
    { "fea_fib_client/0.1/replace_route6",
      &XrlFib2mribTargetBase::handle_fea_fib_client_0_1_replace_route6 },
    { "fea_fib_client/0.1/delete_route4",
      &XrlFib2mribTargetBase::handle_fea_fib_client_0_1_delete_route4 },
    { "fea_fib_client/0.1/delete_route6",
      &XrlFib2mribTargetBase::handle_fea_fib_client_0_1_delete_route6 },
    { "fea_fib_client/0.1/resolve_route4",
      &XrlFib2mribTargetBase::handle_fea_fib_client_0_1_resolve_route4 },
    { "fea_fib_client/0.1/resolve_route6",
      &XrlFib2mribTargetBase::handle_fea_fib_client_0_1_resolve_route6 },
    { "policy_backend/0.1/configure",
      &XrlFib2mribTargetBase::handle_policy_backend_0_1_configure },
    { "policy_backend/0.1/reset",
      &XrlFib2mribTargetBase::handle_policy_backend_0_1_reset },
    { "policy_backend/0.1/push_routes",
      &XrlFib2mribTargetBase::handle_policy_backend_0_1_push_routes },
    { "fib2mrib/0.1/enable_fib2mrib",
      &XrlFib2mribTargetBase::handle_fib2mrib_0_1_enable_fib2mrib },
    { "fib2mrib/0.1/start_fib2mrib",
      &XrlFib2mribTargetBase::handle_fib2mrib_0_1_start_fib2mrib },
    { "fib2mrib/0.1/stop_fib2mrib",
      &XrlFib2mribTargetBase::handle_fib2mrib_0_1_stop_fib2mrib },
    { "fib2mrib/0.1/enable_log_trace_all",
      &XrlFib2mribTargetBase::handle_fib2mrib_0_1_enable_log_trace_all },
};

const size_t XrlFib2mribTargetBase::num_handlers = (sizeof(XrlFib2mribTargetBase::handlers) / sizeof(XrlFib2mribTargetBase::handlers[0]));


XrlFib2mribTargetBase::XrlFib2mribTargetBase(XrlCmdMap* cmds)
    : _cmds(cmds)
{
    if (_cmds)
	add_handlers();
}

XrlFib2mribTargetBase::~XrlFib2mribTargetBase()
{
    if (_cmds)
	remove_handlers();
}

bool
XrlFib2mribTargetBase::set_command_map(XrlCmdMap* cmds)
{
    if (_cmds == 0 && cmds) {
        _cmds = cmds;
        add_handlers();
        return true;
    }
    if (_cmds && cmds == 0) {
	remove_handlers();
        _cmds = cmds;
        return true;
    }
    return false;
}

const XrlCmdError
XrlFib2mribTargetBase::handle_common_0_1_get_target_name(const XrlArgs& xa_inputs, XrlArgs* pxa_outputs)
{
    if (xa_inputs.size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u) handling %s",
            XORP_UINT_CAST(0), XORP_UINT_CAST(xa_inputs.size()), "common/0.1/get_target_name");
	return XrlCmdError::BAD_ARGS();
    }

    if (pxa_outputs == 0) {
	XLOG_FATAL("Return list empty");
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    string name;
    try {
	XrlCmdError e = common_0_1_get_target_name(
	    name);
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for %s failed: %s",
            		 "common/0.1/get_target_name", e.str().c_str());
	    return e;
        }
    } catch (const XrlArgs::BadArgs& e) {
	XLOG_ERROR("Error decoding the arguments: %s", e.str().c_str());
	return XrlCmdError::BAD_ARGS(e.str());
    }

    /* Marshall return values */
    try {
	pxa_outputs->add("name", name);
    } catch (const XrlArgs::XrlAtomFound& ) {
	XLOG_FATAL("Duplicate atom name"); /* XXX Should never happen */
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlFib2mribTargetBase::handle_common_0_1_get_version(const XrlArgs& xa_inputs, XrlArgs* pxa_outputs)
{
    if (xa_inputs.size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u) handling %s",
            XORP_UINT_CAST(0), XORP_UINT_CAST(xa_inputs.size()), "common/0.1/get_version");
	return XrlCmdError::BAD_ARGS();
    }

    if (pxa_outputs == 0) {
	XLOG_FATAL("Return list empty");
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    string version;
    try {
	XrlCmdError e = common_0_1_get_version(
	    version);
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for %s failed: %s",
            		 "common/0.1/get_version", e.str().c_str());
	    return e;
        }
    } catch (const XrlArgs::BadArgs& e) {
	XLOG_ERROR("Error decoding the arguments: %s", e.str().c_str());
	return XrlCmdError::BAD_ARGS(e.str());
    }

    /* Marshall return values */
    try {
	pxa_outputs->add("version", version);
    } catch (const XrlArgs::XrlAtomFound& ) {
	XLOG_FATAL("Duplicate atom name"); /* XXX Should never happen */
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlFib2mribTargetBase::handle_common_0_1_get_status(const XrlArgs& xa_inputs, XrlArgs* pxa_outputs)
{
    if (xa_inputs.size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u) handling %s",
            XORP_UINT_CAST(0), XORP_UINT_CAST(xa_inputs.size()), "common/0.1/get_status");
	return XrlCmdError::BAD_ARGS();
    }

    if (pxa_outputs == 0) {
	XLOG_FATAL("Return list empty");
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    uint32_t status;
    string reason;
    try {
	XrlCmdError e = common_0_1_get_status(
	    status,
	    reason);
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for %s failed: %s",
            		 "common/0.1/get_status", e.str().c_str());
	    return e;
        }
    } catch (const XrlArgs::BadArgs& e) {
	XLOG_ERROR("Error decoding the arguments: %s", e.str().c_str());
	return XrlCmdError::BAD_ARGS(e.str());
    }

    /* Marshall return values */
    try {
	pxa_outputs->add("status", status);
	pxa_outputs->add("reason", reason);
    } catch (const XrlArgs::XrlAtomFound& ) {
	XLOG_FATAL("Duplicate atom name"); /* XXX Should never happen */
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlFib2mribTargetBase::handle_common_0_1_shutdown(const XrlArgs& xa_inputs, XrlArgs* /* pxa_outputs */)
{
    if (xa_inputs.size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u) handling %s",
            XORP_UINT_CAST(0), XORP_UINT_CAST(xa_inputs.size()), "common/0.1/shutdown");
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = common_0_1_shutdown();
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for %s failed: %s",
            		 "common/0.1/shutdown", e.str().c_str());
	    return e;
        }
    } catch (const XrlArgs::BadArgs& e) {
	XLOG_ERROR("Error decoding the arguments: %s", e.str().c_str());
	return XrlCmdError::BAD_ARGS(e.str());
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlFib2mribTargetBase::handle_finder_event_observer_0_1_xrl_target_birth(const XrlArgs& xa_inputs, XrlArgs* /* pxa_outputs */)
{
    if (xa_inputs.size() != 2) {
	XLOG_ERROR("Wrong number of arguments (%u != %u) handling %s",
            XORP_UINT_CAST(2), XORP_UINT_CAST(xa_inputs.size()), "finder_event_observer/0.1/xrl_target_birth");
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = finder_event_observer_0_1_xrl_target_birth(
	    xa_inputs.get(0, "target_class").text(),
	    xa_inputs.get(1, "target_instance").text());
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for %s failed: %s",
            		 "finder_event_observer/0.1/xrl_target_birth", e.str().c_str());
	    return e;
        }
    } catch (const XrlArgs::BadArgs& e) {
	XLOG_ERROR("Error decoding the arguments: %s", e.str().c_str());
	return XrlCmdError::BAD_ARGS(e.str());
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlFib2mribTargetBase::handle_finder_event_observer_0_1_xrl_target_death(const XrlArgs& xa_inputs, XrlArgs* /* pxa_outputs */)
{
    if (xa_inputs.size() != 2) {
	XLOG_ERROR("Wrong number of arguments (%u != %u) handling %s",
            XORP_UINT_CAST(2), XORP_UINT_CAST(xa_inputs.size()), "finder_event_observer/0.1/xrl_target_death");
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = finder_event_observer_0_1_xrl_target_death(
	    xa_inputs.get(0, "target_class").text(),
	    xa_inputs.get(1, "target_instance").text());
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for %s failed: %s",
            		 "finder_event_observer/0.1/xrl_target_death", e.str().c_str());
	    return e;
        }
    } catch (const XrlArgs::BadArgs& e) {
	XLOG_ERROR("Error decoding the arguments: %s", e.str().c_str());
	return XrlCmdError::BAD_ARGS(e.str());
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlFib2mribTargetBase::handle_fea_fib_client_0_1_add_route4(const XrlArgs& xa_inputs, XrlArgs* /* pxa_outputs */)
{
    if (xa_inputs.size() != 8) {
	XLOG_ERROR("Wrong number of arguments (%u != %u) handling %s",
            XORP_UINT_CAST(8), XORP_UINT_CAST(xa_inputs.size()), "fea_fib_client/0.1/add_route4");
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = fea_fib_client_0_1_add_route4(
	    xa_inputs.get(0, "network").ipv4net(),
	    xa_inputs.get(1, "nexthop").ipv4(),
	    xa_inputs.get(2, "ifname").text(),
	    xa_inputs.get(3, "vifname").text(),
	    xa_inputs.get(4, "metric").uint32(),
	    xa_inputs.get(5, "admin_distance").uint32(),
	    xa_inputs.get(6, "protocol_origin").text(),
	    xa_inputs.get(7, "xorp_route").boolean());
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for %s failed: %s",
            		 "fea_fib_client/0.1/add_route4", e.str().c_str());
	    return e;
        }
    } catch (const XrlArgs::BadArgs& e) {
	XLOG_ERROR("Error decoding the arguments: %s", e.str().c_str());
	return XrlCmdError::BAD_ARGS(e.str());
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlFib2mribTargetBase::handle_fea_fib_client_0_1_add_route6(const XrlArgs& xa_inputs, XrlArgs* /* pxa_outputs */)
{
    if (xa_inputs.size() != 8) {
	XLOG_ERROR("Wrong number of arguments (%u != %u) handling %s",
            XORP_UINT_CAST(8), XORP_UINT_CAST(xa_inputs.size()), "fea_fib_client/0.1/add_route6");
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = fea_fib_client_0_1_add_route6(
	    xa_inputs.get(0, "network").ipv6net(),
	    xa_inputs.get(1, "nexthop").ipv6(),
	    xa_inputs.get(2, "ifname").text(),
	    xa_inputs.get(3, "vifname").text(),
	    xa_inputs.get(4, "metric").uint32(),
	    xa_inputs.get(5, "admin_distance").uint32(),
	    xa_inputs.get(6, "protocol_origin").text(),
	    xa_inputs.get(7, "xorp_route").boolean());
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for %s failed: %s",
            		 "fea_fib_client/0.1/add_route6", e.str().c_str());
	    return e;
        }
    } catch (const XrlArgs::BadArgs& e) {
	XLOG_ERROR("Error decoding the arguments: %s", e.str().c_str());
	return XrlCmdError::BAD_ARGS(e.str());
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlFib2mribTargetBase::handle_fea_fib_client_0_1_replace_route4(const XrlArgs& xa_inputs, XrlArgs* /* pxa_outputs */)
{
    if (xa_inputs.size() != 8) {
	XLOG_ERROR("Wrong number of arguments (%u != %u) handling %s",
            XORP_UINT_CAST(8), XORP_UINT_CAST(xa_inputs.size()), "fea_fib_client/0.1/replace_route4");
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = fea_fib_client_0_1_replace_route4(
	    xa_inputs.get(0, "network").ipv4net(),
	    xa_inputs.get(1, "nexthop").ipv4(),
	    xa_inputs.get(2, "ifname").text(),
	    xa_inputs.get(3, "vifname").text(),
	    xa_inputs.get(4, "metric").uint32(),
	    xa_inputs.get(5, "admin_distance").uint32(),
	    xa_inputs.get(6, "protocol_origin").text(),
	    xa_inputs.get(7, "xorp_route").boolean());
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for %s failed: %s",
            		 "fea_fib_client/0.1/replace_route4", e.str().c_str());
	    return e;
        }
    } catch (const XrlArgs::BadArgs& e) {
	XLOG_ERROR("Error decoding the arguments: %s", e.str().c_str());
	return XrlCmdError::BAD_ARGS(e.str());
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlFib2mribTargetBase::handle_fea_fib_client_0_1_replace_route6(const XrlArgs& xa_inputs, XrlArgs* /* pxa_outputs */)
{
    if (xa_inputs.size() != 8) {
	XLOG_ERROR("Wrong number of arguments (%u != %u) handling %s",
            XORP_UINT_CAST(8), XORP_UINT_CAST(xa_inputs.size()), "fea_fib_client/0.1/replace_route6");
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = fea_fib_client_0_1_replace_route6(
	    xa_inputs.get(0, "network").ipv6net(),
	    xa_inputs.get(1, "nexthop").ipv6(),
	    xa_inputs.get(2, "ifname").text(),
	    xa_inputs.get(3, "vifname").text(),
	    xa_inputs.get(4, "metric").uint32(),
	    xa_inputs.get(5, "admin_distance").uint32(),
	    xa_inputs.get(6, "protocol_origin").text(),
	    xa_inputs.get(7, "xorp_route").boolean());
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for %s failed: %s",
            		 "fea_fib_client/0.1/replace_route6", e.str().c_str());
	    return e;
        }
    } catch (const XrlArgs::BadArgs& e) {
	XLOG_ERROR("Error decoding the arguments: %s", e.str().c_str());
	return XrlCmdError::BAD_ARGS(e.str());
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlFib2mribTargetBase::handle_fea_fib_client_0_1_delete_route4(const XrlArgs& xa_inputs, XrlArgs* /* pxa_outputs */)
{
    if (xa_inputs.size() != 3) {
	XLOG_ERROR("Wrong number of arguments (%u != %u) handling %s",
            XORP_UINT_CAST(3), XORP_UINT_CAST(xa_inputs.size()), "fea_fib_client/0.1/delete_route4");
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = fea_fib_client_0_1_delete_route4(
	    xa_inputs.get(0, "network").ipv4net(),
	    xa_inputs.get(1, "ifname").text(),
	    xa_inputs.get(2, "vifname").text());
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for %s failed: %s",
            		 "fea_fib_client/0.1/delete_route4", e.str().c_str());
	    return e;
        }
    } catch (const XrlArgs::BadArgs& e) {
	XLOG_ERROR("Error decoding the arguments: %s", e.str().c_str());
	return XrlCmdError::BAD_ARGS(e.str());
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlFib2mribTargetBase::handle_fea_fib_client_0_1_delete_route6(const XrlArgs& xa_inputs, XrlArgs* /* pxa_outputs */)
{
    if (xa_inputs.size() != 3) {
	XLOG_ERROR("Wrong number of arguments (%u != %u) handling %s",
            XORP_UINT_CAST(3), XORP_UINT_CAST(xa_inputs.size()), "fea_fib_client/0.1/delete_route6");
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = fea_fib_client_0_1_delete_route6(
	    xa_inputs.get(0, "network").ipv6net(),
	    xa_inputs.get(1, "ifname").text(),
	    xa_inputs.get(2, "vifname").text());
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for %s failed: %s",
            		 "fea_fib_client/0.1/delete_route6", e.str().c_str());
	    return e;
        }
    } catch (const XrlArgs::BadArgs& e) {
	XLOG_ERROR("Error decoding the arguments: %s", e.str().c_str());
	return XrlCmdError::BAD_ARGS(e.str());
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlFib2mribTargetBase::handle_fea_fib_client_0_1_resolve_route4(const XrlArgs& xa_inputs, XrlArgs* /* pxa_outputs */)
{
    if (xa_inputs.size() != 1) {
	XLOG_ERROR("Wrong number of arguments (%u != %u) handling %s",
            XORP_UINT_CAST(1), XORP_UINT_CAST(xa_inputs.size()), "fea_fib_client/0.1/resolve_route4");
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = fea_fib_client_0_1_resolve_route4(
	    xa_inputs.get(0, "network").ipv4net());
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for %s failed: %s",
            		 "fea_fib_client/0.1/resolve_route4", e.str().c_str());
	    return e;
        }
    } catch (const XrlArgs::BadArgs& e) {
	XLOG_ERROR("Error decoding the arguments: %s", e.str().c_str());
	return XrlCmdError::BAD_ARGS(e.str());
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlFib2mribTargetBase::handle_fea_fib_client_0_1_resolve_route6(const XrlArgs& xa_inputs, XrlArgs* /* pxa_outputs */)
{
    if (xa_inputs.size() != 1) {
	XLOG_ERROR("Wrong number of arguments (%u != %u) handling %s",
            XORP_UINT_CAST(1), XORP_UINT_CAST(xa_inputs.size()), "fea_fib_client/0.1/resolve_route6");
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = fea_fib_client_0_1_resolve_route6(
	    xa_inputs.get(0, "network").ipv6net());
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for %s failed: %s",
            		 "fea_fib_client/0.1/resolve_route6", e.str().c_str());
	    return e;
        }
    } catch (const XrlArgs::BadArgs& e) {
	XLOG_ERROR("Error decoding the arguments: %s", e.str().c_str());
	return XrlCmdError::BAD_ARGS(e.str());
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlFib2mribTargetBase::handle_policy_backend_0_1_configure(const XrlArgs& xa_inputs, XrlArgs* /* pxa_outputs */)
{
    if (xa_inputs.size() != 2) {
	XLOG_ERROR("Wrong number of arguments (%u != %u) handling %s",
            XORP_UINT_CAST(2), XORP_UINT_CAST(xa_inputs.size()), "policy_backend/0.1/configure");
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = policy_backend_0_1_configure(
	    xa_inputs.get(0, "filter").uint32(),
	    xa_inputs.get(1, "conf").text());
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for %s failed: %s",
            		 "policy_backend/0.1/configure", e.str().c_str());
	    return e;
        }
    } catch (const XrlArgs::BadArgs& e) {
	XLOG_ERROR("Error decoding the arguments: %s", e.str().c_str());
	return XrlCmdError::BAD_ARGS(e.str());
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlFib2mribTargetBase::handle_policy_backend_0_1_reset(const XrlArgs& xa_inputs, XrlArgs* /* pxa_outputs */)
{
    if (xa_inputs.size() != 1) {
	XLOG_ERROR("Wrong number of arguments (%u != %u) handling %s",
            XORP_UINT_CAST(1), XORP_UINT_CAST(xa_inputs.size()), "policy_backend/0.1/reset");
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = policy_backend_0_1_reset(
	    xa_inputs.get(0, "filter").uint32());
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for %s failed: %s",
            		 "policy_backend/0.1/reset", e.str().c_str());
	    return e;
        }
    } catch (const XrlArgs::BadArgs& e) {
	XLOG_ERROR("Error decoding the arguments: %s", e.str().c_str());
	return XrlCmdError::BAD_ARGS(e.str());
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlFib2mribTargetBase::handle_policy_backend_0_1_push_routes(const XrlArgs& xa_inputs, XrlArgs* /* pxa_outputs */)
{
    if (xa_inputs.size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u) handling %s",
            XORP_UINT_CAST(0), XORP_UINT_CAST(xa_inputs.size()), "policy_backend/0.1/push_routes");
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = policy_backend_0_1_push_routes();
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for %s failed: %s",
            		 "policy_backend/0.1/push_routes", e.str().c_str());
	    return e;
        }
    } catch (const XrlArgs::BadArgs& e) {
	XLOG_ERROR("Error decoding the arguments: %s", e.str().c_str());
	return XrlCmdError::BAD_ARGS(e.str());
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlFib2mribTargetBase::handle_fib2mrib_0_1_enable_fib2mrib(const XrlArgs& xa_inputs, XrlArgs* /* pxa_outputs */)
{
    if (xa_inputs.size() != 1) {
	XLOG_ERROR("Wrong number of arguments (%u != %u) handling %s",
            XORP_UINT_CAST(1), XORP_UINT_CAST(xa_inputs.size()), "fib2mrib/0.1/enable_fib2mrib");
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = fib2mrib_0_1_enable_fib2mrib(
	    xa_inputs.get(0, "enable").boolean());
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for %s failed: %s",
            		 "fib2mrib/0.1/enable_fib2mrib", e.str().c_str());
	    return e;
        }
    } catch (const XrlArgs::BadArgs& e) {
	XLOG_ERROR("Error decoding the arguments: %s", e.str().c_str());
	return XrlCmdError::BAD_ARGS(e.str());
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlFib2mribTargetBase::handle_fib2mrib_0_1_start_fib2mrib(const XrlArgs& xa_inputs, XrlArgs* /* pxa_outputs */)
{
    if (xa_inputs.size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u) handling %s",
            XORP_UINT_CAST(0), XORP_UINT_CAST(xa_inputs.size()), "fib2mrib/0.1/start_fib2mrib");
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = fib2mrib_0_1_start_fib2mrib();
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for %s failed: %s",
            		 "fib2mrib/0.1/start_fib2mrib", e.str().c_str());
	    return e;
        }
    } catch (const XrlArgs::BadArgs& e) {
	XLOG_ERROR("Error decoding the arguments: %s", e.str().c_str());
	return XrlCmdError::BAD_ARGS(e.str());
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlFib2mribTargetBase::handle_fib2mrib_0_1_stop_fib2mrib(const XrlArgs& xa_inputs, XrlArgs* /* pxa_outputs */)
{
    if (xa_inputs.size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u) handling %s",
            XORP_UINT_CAST(0), XORP_UINT_CAST(xa_inputs.size()), "fib2mrib/0.1/stop_fib2mrib");
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = fib2mrib_0_1_stop_fib2mrib();
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for %s failed: %s",
            		 "fib2mrib/0.1/stop_fib2mrib", e.str().c_str());
	    return e;
        }
    } catch (const XrlArgs::BadArgs& e) {
	XLOG_ERROR("Error decoding the arguments: %s", e.str().c_str());
	return XrlCmdError::BAD_ARGS(e.str());
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlFib2mribTargetBase::handle_fib2mrib_0_1_enable_log_trace_all(const XrlArgs& xa_inputs, XrlArgs* /* pxa_outputs */)
{
    if (xa_inputs.size() != 1) {
	XLOG_ERROR("Wrong number of arguments (%u != %u) handling %s",
            XORP_UINT_CAST(1), XORP_UINT_CAST(xa_inputs.size()), "fib2mrib/0.1/enable_log_trace_all");
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = fib2mrib_0_1_enable_log_trace_all(
	    xa_inputs.get(0, "enable").boolean());
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for %s failed: %s",
            		 "fib2mrib/0.1/enable_log_trace_all", e.str().c_str());
	    return e;
        }
    } catch (const XrlArgs::BadArgs& e) {
	XLOG_ERROR("Error decoding the arguments: %s", e.str().c_str());
	return XrlCmdError::BAD_ARGS(e.str());
    }
    return XrlCmdError::OKAY();
}

void
XrlFib2mribTargetBase::add_handlers()
{
    for (size_t i = 0; i < num_handlers; ++i) {
        if (!_cmds->add_handler(handlers[i].name,
                                callback(this, handlers[i].method))) {
            XLOG_ERROR("Failed to register xrl handler finder://%s/%s", "fib2mrib", handlers[i].name);
        }
    }
    _cmds->finalize();
}

void
XrlFib2mribTargetBase::remove_handlers()
{
     for (size_t i = 0; i < num_handlers; ++i) {
         _cmds->remove_handler(handlers[i].name);
     }
}
