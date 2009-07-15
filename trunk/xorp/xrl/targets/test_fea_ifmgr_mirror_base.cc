/*
 * Copyright (c) 2001-2009 XORP, Inc.
 * See the XORP LICENSE.lgpl file for licensing, conditions, and warranties
 * on use.
 *
 * DO NOT EDIT THIS FILE - IT IS PROGRAMMATICALLY GENERATED
 *
 * Generated by 'tgt-gen'.
 */




#include "test_fea_ifmgr_mirror_base.hh"


const struct XrlTestFeaIfmgrMirrorTargetBase::handler_table XrlTestFeaIfmgrMirrorTargetBase::handlers[] = {
    { "ifmgr_replicator/0.1/register_ifmgr_mirror",
      &XrlTestFeaIfmgrMirrorTargetBase::handle_ifmgr_replicator_0_1_register_ifmgr_mirror },
    { "ifmgr_replicator/0.1/unregister_ifmgr_mirror",
      &XrlTestFeaIfmgrMirrorTargetBase::handle_ifmgr_replicator_0_1_unregister_ifmgr_mirror },
};

const size_t XrlTestFeaIfmgrMirrorTargetBase::num_handlers = (sizeof(XrlTestFeaIfmgrMirrorTargetBase::handlers) / sizeof(XrlTestFeaIfmgrMirrorTargetBase::handlers[0]));


XrlTestFeaIfmgrMirrorTargetBase::XrlTestFeaIfmgrMirrorTargetBase(XrlCmdMap* cmds)
    : _cmds(cmds)
{
    if (_cmds)
	add_handlers();
}

XrlTestFeaIfmgrMirrorTargetBase::~XrlTestFeaIfmgrMirrorTargetBase()
{
    if (_cmds)
	remove_handlers();
}

bool
XrlTestFeaIfmgrMirrorTargetBase::set_command_map(XrlCmdMap* cmds)
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
XrlTestFeaIfmgrMirrorTargetBase::handle_ifmgr_replicator_0_1_register_ifmgr_mirror(const XrlArgs& xa_inputs, XrlArgs* /* pxa_outputs */)
{
    if (xa_inputs.size() != 1) {
	XLOG_ERROR("Wrong number of arguments (%u != %u) handling %s",
            XORP_UINT_CAST(1), XORP_UINT_CAST(xa_inputs.size()), "ifmgr_replicator/0.1/register_ifmgr_mirror");
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = ifmgr_replicator_0_1_register_ifmgr_mirror(
	    xa_inputs.get(0, "clientname").text());
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for %s failed: %s",
            		 "ifmgr_replicator/0.1/register_ifmgr_mirror", e.str().c_str());
	    return e;
        }
    } catch (const XrlArgs::BadArgs& e) {
	XLOG_ERROR("Error decoding the arguments: %s", e.str().c_str());
	return XrlCmdError::BAD_ARGS(e.str());
    }
    return XrlCmdError::OKAY();
}

const XrlCmdError
XrlTestFeaIfmgrMirrorTargetBase::handle_ifmgr_replicator_0_1_unregister_ifmgr_mirror(const XrlArgs& xa_inputs, XrlArgs* /* pxa_outputs */)
{
    if (xa_inputs.size() != 1) {
	XLOG_ERROR("Wrong number of arguments (%u != %u) handling %s",
            XORP_UINT_CAST(1), XORP_UINT_CAST(xa_inputs.size()), "ifmgr_replicator/0.1/unregister_ifmgr_mirror");
	return XrlCmdError::BAD_ARGS();
    }

    /* Return value declarations */
    try {
	XrlCmdError e = ifmgr_replicator_0_1_unregister_ifmgr_mirror(
	    xa_inputs.get(0, "clientname").text());
	if (e != XrlCmdError::OKAY()) {
	    XLOG_WARNING("Handling method for %s failed: %s",
            		 "ifmgr_replicator/0.1/unregister_ifmgr_mirror", e.str().c_str());
	    return e;
        }
    } catch (const XrlArgs::BadArgs& e) {
	XLOG_ERROR("Error decoding the arguments: %s", e.str().c_str());
	return XrlCmdError::BAD_ARGS(e.str());
    }
    return XrlCmdError::OKAY();
}

void
XrlTestFeaIfmgrMirrorTargetBase::add_handlers()
{
    for (size_t i = 0; i < num_handlers; ++i) {
        if (!_cmds->add_handler(handlers[i].name,
                                callback(this, handlers[i].method))) {
            XLOG_ERROR("Failed to register xrl handler finder://%s/%s", "test_fea_ifmgr_mirror", handlers[i].name);
        }
    }
    _cmds->finalize();
}

void
XrlTestFeaIfmgrMirrorTargetBase::remove_handlers()
{
     for (size_t i = 0; i < num_handlers; ++i) {
         _cmds->remove_handler(handlers[i].name);
     }
}
