/*
 * Copyright (c) 2001-2008 XORP, Inc.
 * See the XORP LICENSE.lgpl file for licensing, conditions, and warranties
 * on use.
 *
 * DO NOT EDIT THIS FILE - IT IS PROGRAMMATICALLY GENERATED
 *
 * Generated by 'tgt-gen'.
 */

#ident "$XORP: xorp/xrl/targets/show_distances_base.cc,v 1.8 2008/09/23 08:13:23 abittau Exp $"


#include "show_distances_base.hh"


XrlShowDistancesTargetBase::XrlShowDistancesTargetBase(XrlCmdMap* cmds)
    : _cmds(cmds)
{
    if (_cmds)
	add_handlers();
}

XrlShowDistancesTargetBase::~XrlShowDistancesTargetBase()
{
    if (_cmds)
	remove_handlers();
}

bool
XrlShowDistancesTargetBase::set_command_map(XrlCmdMap* cmds)
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
XrlShowDistancesTargetBase::handle_common_0_1_get_target_name(const XrlArgs& xa_inputs, XrlArgs* pxa_outputs)
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
XrlShowDistancesTargetBase::handle_common_0_1_get_version(const XrlArgs& xa_inputs, XrlArgs* pxa_outputs)
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
XrlShowDistancesTargetBase::handle_common_0_1_get_status(const XrlArgs& xa_inputs, XrlArgs* pxa_outputs)
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
XrlShowDistancesTargetBase::handle_common_0_1_shutdown(const XrlArgs& xa_inputs, XrlArgs* /* pxa_outputs */)
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
XrlShowDistancesTargetBase::handle_finder_event_observer_0_1_xrl_target_birth(const XrlArgs& xa_inputs, XrlArgs* /* pxa_outputs */)
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
XrlShowDistancesTargetBase::handle_finder_event_observer_0_1_xrl_target_death(const XrlArgs& xa_inputs, XrlArgs* /* pxa_outputs */)
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

void
XrlShowDistancesTargetBase::add_handlers()
{
	if (_cmds->add_handler("common/0.1/get_target_name",
	    callback(this, &XrlShowDistancesTargetBase::handle_common_0_1_get_target_name)) == false) {
	    XLOG_ERROR("Failed to xrl handler finder://%s/%s", "show_distances", "common/0.1/get_target_name");
	}
	if (_cmds->add_handler("common/0.1/get_version",
	    callback(this, &XrlShowDistancesTargetBase::handle_common_0_1_get_version)) == false) {
	    XLOG_ERROR("Failed to xrl handler finder://%s/%s", "show_distances", "common/0.1/get_version");
	}
	if (_cmds->add_handler("common/0.1/get_status",
	    callback(this, &XrlShowDistancesTargetBase::handle_common_0_1_get_status)) == false) {
	    XLOG_ERROR("Failed to xrl handler finder://%s/%s", "show_distances", "common/0.1/get_status");
	}
	if (_cmds->add_handler("common/0.1/shutdown",
	    callback(this, &XrlShowDistancesTargetBase::handle_common_0_1_shutdown)) == false) {
	    XLOG_ERROR("Failed to xrl handler finder://%s/%s", "show_distances", "common/0.1/shutdown");
	}
	if (_cmds->add_handler("finder_event_observer/0.1/xrl_target_birth",
	    callback(this, &XrlShowDistancesTargetBase::handle_finder_event_observer_0_1_xrl_target_birth)) == false) {
	    XLOG_ERROR("Failed to xrl handler finder://%s/%s", "show_distances", "finder_event_observer/0.1/xrl_target_birth");
	}
	if (_cmds->add_handler("finder_event_observer/0.1/xrl_target_death",
	    callback(this, &XrlShowDistancesTargetBase::handle_finder_event_observer_0_1_xrl_target_death)) == false) {
	    XLOG_ERROR("Failed to xrl handler finder://%s/%s", "show_distances", "finder_event_observer/0.1/xrl_target_death");
	}
	_cmds->finalize();
}

void
XrlShowDistancesTargetBase::remove_handlers()
{
	_cmds->remove_handler("common/0.1/get_target_name");
	_cmds->remove_handler("common/0.1/get_version");
	_cmds->remove_handler("common/0.1/get_status");
	_cmds->remove_handler("common/0.1/shutdown");
	_cmds->remove_handler("finder_event_observer/0.1/xrl_target_birth");
	_cmds->remove_handler("finder_event_observer/0.1/xrl_target_death");
}
