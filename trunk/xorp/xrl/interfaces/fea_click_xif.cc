/*
 * Copyright (c) 2001-2009 XORP, Inc.
 * See the XORP LICENSE.lgpl file for licensing, conditions, and warranties
 * on use.
 *
 * DO NOT EDIT THIS FILE - IT IS PROGRAMMATICALLY GENERATED
 *
 * Generated by 'clnt-gen'.
 */



#include "fea_click_xif.hh"

bool
XrlFeaClickV0p1Client::send_load_click(
	const char*	dst_xrl_target_name,
	const LoadClickCB&	cb
)
{
    static Xrl* x = NULL;

    if (!x) {
        x = new Xrl(dst_xrl_target_name, "fea_click/0.1/load_click");
    }

    x->set_target(dst_xrl_target_name);


    return _sender->send(*x, callback(this, &XrlFeaClickV0p1Client::unmarshall_load_click, cb));
}


/* Unmarshall load_click */
void
XrlFeaClickV0p1Client::unmarshall_load_click(
	const XrlError&	e,
	XrlArgs*	a,
	LoadClickCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaClickV0p1Client::send_unload_click(
	const char*	dst_xrl_target_name,
	const UnloadClickCB&	cb
)
{
    static Xrl* x = NULL;

    if (!x) {
        x = new Xrl(dst_xrl_target_name, "fea_click/0.1/unload_click");
    }

    x->set_target(dst_xrl_target_name);


    return _sender->send(*x, callback(this, &XrlFeaClickV0p1Client::unmarshall_unload_click, cb));
}


/* Unmarshall unload_click */
void
XrlFeaClickV0p1Client::unmarshall_unload_click(
	const XrlError&	e,
	XrlArgs*	a,
	UnloadClickCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaClickV0p1Client::send_enable_click(
	const char*	dst_xrl_target_name,
	const bool&	enable,
	const EnableClickCB&	cb
)
{
    static Xrl* x = NULL;

    if (!x) {
        x = new Xrl(dst_xrl_target_name, "fea_click/0.1/enable_click");
        x->args().add(XrlAtom(enable));
    }

    x->set_target(dst_xrl_target_name);

    x->args().set_arg(0, enable);

    return _sender->send(*x, callback(this, &XrlFeaClickV0p1Client::unmarshall_enable_click, cb));
}


/* Unmarshall enable_click */
void
XrlFeaClickV0p1Client::unmarshall_enable_click(
	const XrlError&	e,
	XrlArgs*	a,
	EnableClickCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaClickV0p1Client::send_start_click(
	const char*	dst_xrl_target_name,
	const StartClickCB&	cb
)
{
    static Xrl* x = NULL;

    if (!x) {
        x = new Xrl(dst_xrl_target_name, "fea_click/0.1/start_click");
    }

    x->set_target(dst_xrl_target_name);


    return _sender->send(*x, callback(this, &XrlFeaClickV0p1Client::unmarshall_start_click, cb));
}


/* Unmarshall start_click */
void
XrlFeaClickV0p1Client::unmarshall_start_click(
	const XrlError&	e,
	XrlArgs*	a,
	StartClickCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaClickV0p1Client::send_stop_click(
	const char*	dst_xrl_target_name,
	const StopClickCB&	cb
)
{
    static Xrl* x = NULL;

    if (!x) {
        x = new Xrl(dst_xrl_target_name, "fea_click/0.1/stop_click");
    }

    x->set_target(dst_xrl_target_name);


    return _sender->send(*x, callback(this, &XrlFeaClickV0p1Client::unmarshall_stop_click, cb));
}


/* Unmarshall stop_click */
void
XrlFeaClickV0p1Client::unmarshall_stop_click(
	const XrlError&	e,
	XrlArgs*	a,
	StopClickCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaClickV0p1Client::send_enable_duplicate_routes_to_kernel(
	const char*	dst_xrl_target_name,
	const bool&	enable,
	const EnableDuplicateRoutesToKernelCB&	cb
)
{
    static Xrl* x = NULL;

    if (!x) {
        x = new Xrl(dst_xrl_target_name, "fea_click/0.1/enable_duplicate_routes_to_kernel");
        x->args().add(XrlAtom(enable));
    }

    x->set_target(dst_xrl_target_name);

    x->args().set_arg(0, enable);

    return _sender->send(*x, callback(this, &XrlFeaClickV0p1Client::unmarshall_enable_duplicate_routes_to_kernel, cb));
}


/* Unmarshall enable_duplicate_routes_to_kernel */
void
XrlFeaClickV0p1Client::unmarshall_enable_duplicate_routes_to_kernel(
	const XrlError&	e,
	XrlArgs*	a,
	EnableDuplicateRoutesToKernelCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaClickV0p1Client::send_enable_kernel_click(
	const char*	dst_xrl_target_name,
	const bool&	enable,
	const EnableKernelClickCB&	cb
)
{
    static Xrl* x = NULL;

    if (!x) {
        x = new Xrl(dst_xrl_target_name, "fea_click/0.1/enable_kernel_click");
        x->args().add(XrlAtom(enable));
    }

    x->set_target(dst_xrl_target_name);

    x->args().set_arg(0, enable);

    return _sender->send(*x, callback(this, &XrlFeaClickV0p1Client::unmarshall_enable_kernel_click, cb));
}


/* Unmarshall enable_kernel_click */
void
XrlFeaClickV0p1Client::unmarshall_enable_kernel_click(
	const XrlError&	e,
	XrlArgs*	a,
	EnableKernelClickCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaClickV0p1Client::send_enable_kernel_click_install_on_startup(
	const char*	dst_xrl_target_name,
	const bool&	enable,
	const EnableKernelClickInstallOnStartupCB&	cb
)
{
    static Xrl* x = NULL;

    if (!x) {
        x = new Xrl(dst_xrl_target_name, "fea_click/0.1/enable_kernel_click_install_on_startup");
        x->args().add(XrlAtom(enable));
    }

    x->set_target(dst_xrl_target_name);

    x->args().set_arg(0, enable);

    return _sender->send(*x, callback(this, &XrlFeaClickV0p1Client::unmarshall_enable_kernel_click_install_on_startup, cb));
}


/* Unmarshall enable_kernel_click_install_on_startup */
void
XrlFeaClickV0p1Client::unmarshall_enable_kernel_click_install_on_startup(
	const XrlError&	e,
	XrlArgs*	a,
	EnableKernelClickInstallOnStartupCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaClickV0p1Client::send_set_kernel_click_modules(
	const char*	dst_xrl_target_name,
	const string&	modules,
	const SetKernelClickModulesCB&	cb
)
{
    static Xrl* x = NULL;

    if (!x) {
        x = new Xrl(dst_xrl_target_name, "fea_click/0.1/set_kernel_click_modules");
        x->args().add(XrlAtom(modules));
    }

    x->set_target(dst_xrl_target_name);

    x->args().set_arg(0, modules);

    return _sender->send(*x, callback(this, &XrlFeaClickV0p1Client::unmarshall_set_kernel_click_modules, cb));
}


/* Unmarshall set_kernel_click_modules */
void
XrlFeaClickV0p1Client::unmarshall_set_kernel_click_modules(
	const XrlError&	e,
	XrlArgs*	a,
	SetKernelClickModulesCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaClickV0p1Client::send_set_kernel_click_mount_directory(
	const char*	dst_xrl_target_name,
	const string&	directory,
	const SetKernelClickMountDirectoryCB&	cb
)
{
    static Xrl* x = NULL;

    if (!x) {
        x = new Xrl(dst_xrl_target_name, "fea_click/0.1/set_kernel_click_mount_directory");
        x->args().add(XrlAtom(directory));
    }

    x->set_target(dst_xrl_target_name);

    x->args().set_arg(0, directory);

    return _sender->send(*x, callback(this, &XrlFeaClickV0p1Client::unmarshall_set_kernel_click_mount_directory, cb));
}


/* Unmarshall set_kernel_click_mount_directory */
void
XrlFeaClickV0p1Client::unmarshall_set_kernel_click_mount_directory(
	const XrlError&	e,
	XrlArgs*	a,
	SetKernelClickMountDirectoryCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaClickV0p1Client::send_set_kernel_click_config_generator_file(
	const char*	dst_xrl_target_name,
	const string&	kernel_click_config_generator_file,
	const SetKernelClickConfigGeneratorFileCB&	cb
)
{
    static Xrl* x = NULL;

    if (!x) {
        x = new Xrl(dst_xrl_target_name, "fea_click/0.1/set_kernel_click_config_generator_file");
        x->args().add(XrlAtom(kernel_click_config_generator_file));
    }

    x->set_target(dst_xrl_target_name);

    x->args().set_arg(0, kernel_click_config_generator_file);

    return _sender->send(*x, callback(this, &XrlFeaClickV0p1Client::unmarshall_set_kernel_click_config_generator_file, cb));
}


/* Unmarshall set_kernel_click_config_generator_file */
void
XrlFeaClickV0p1Client::unmarshall_set_kernel_click_config_generator_file(
	const XrlError&	e,
	XrlArgs*	a,
	SetKernelClickConfigGeneratorFileCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaClickV0p1Client::send_enable_user_click(
	const char*	dst_xrl_target_name,
	const bool&	enable,
	const EnableUserClickCB&	cb
)
{
    static Xrl* x = NULL;

    if (!x) {
        x = new Xrl(dst_xrl_target_name, "fea_click/0.1/enable_user_click");
        x->args().add(XrlAtom(enable));
    }

    x->set_target(dst_xrl_target_name);

    x->args().set_arg(0, enable);

    return _sender->send(*x, callback(this, &XrlFeaClickV0p1Client::unmarshall_enable_user_click, cb));
}


/* Unmarshall enable_user_click */
void
XrlFeaClickV0p1Client::unmarshall_enable_user_click(
	const XrlError&	e,
	XrlArgs*	a,
	EnableUserClickCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaClickV0p1Client::send_set_user_click_command_file(
	const char*	dst_xrl_target_name,
	const string&	user_click_command_file,
	const SetUserClickCommandFileCB&	cb
)
{
    static Xrl* x = NULL;

    if (!x) {
        x = new Xrl(dst_xrl_target_name, "fea_click/0.1/set_user_click_command_file");
        x->args().add(XrlAtom(user_click_command_file));
    }

    x->set_target(dst_xrl_target_name);

    x->args().set_arg(0, user_click_command_file);

    return _sender->send(*x, callback(this, &XrlFeaClickV0p1Client::unmarshall_set_user_click_command_file, cb));
}


/* Unmarshall set_user_click_command_file */
void
XrlFeaClickV0p1Client::unmarshall_set_user_click_command_file(
	const XrlError&	e,
	XrlArgs*	a,
	SetUserClickCommandFileCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaClickV0p1Client::send_set_user_click_command_extra_arguments(
	const char*	dst_xrl_target_name,
	const string&	user_click_command_extra_arguments,
	const SetUserClickCommandExtraArgumentsCB&	cb
)
{
    static Xrl* x = NULL;

    if (!x) {
        x = new Xrl(dst_xrl_target_name, "fea_click/0.1/set_user_click_command_extra_arguments");
        x->args().add(XrlAtom(user_click_command_extra_arguments));
    }

    x->set_target(dst_xrl_target_name);

    x->args().set_arg(0, user_click_command_extra_arguments);

    return _sender->send(*x, callback(this, &XrlFeaClickV0p1Client::unmarshall_set_user_click_command_extra_arguments, cb));
}


/* Unmarshall set_user_click_command_extra_arguments */
void
XrlFeaClickV0p1Client::unmarshall_set_user_click_command_extra_arguments(
	const XrlError&	e,
	XrlArgs*	a,
	SetUserClickCommandExtraArgumentsCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaClickV0p1Client::send_set_user_click_command_execute_on_startup(
	const char*	dst_xrl_target_name,
	const bool&	user_click_command_execute_on_startup,
	const SetUserClickCommandExecuteOnStartupCB&	cb
)
{
    static Xrl* x = NULL;

    if (!x) {
        x = new Xrl(dst_xrl_target_name, "fea_click/0.1/set_user_click_command_execute_on_startup");
        x->args().add(XrlAtom(user_click_command_execute_on_startup));
    }

    x->set_target(dst_xrl_target_name);

    x->args().set_arg(0, user_click_command_execute_on_startup);

    return _sender->send(*x, callback(this, &XrlFeaClickV0p1Client::unmarshall_set_user_click_command_execute_on_startup, cb));
}


/* Unmarshall set_user_click_command_execute_on_startup */
void
XrlFeaClickV0p1Client::unmarshall_set_user_click_command_execute_on_startup(
	const XrlError&	e,
	XrlArgs*	a,
	SetUserClickCommandExecuteOnStartupCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaClickV0p1Client::send_set_user_click_control_address(
	const char*	dst_xrl_target_name,
	const IPv4&	user_click_control_address,
	const SetUserClickControlAddressCB&	cb
)
{
    static Xrl* x = NULL;

    if (!x) {
        x = new Xrl(dst_xrl_target_name, "fea_click/0.1/set_user_click_control_address");
        x->args().add(XrlAtom(user_click_control_address));
    }

    x->set_target(dst_xrl_target_name);

    x->args().set_arg(0, user_click_control_address);

    return _sender->send(*x, callback(this, &XrlFeaClickV0p1Client::unmarshall_set_user_click_control_address, cb));
}


/* Unmarshall set_user_click_control_address */
void
XrlFeaClickV0p1Client::unmarshall_set_user_click_control_address(
	const XrlError&	e,
	XrlArgs*	a,
	SetUserClickControlAddressCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaClickV0p1Client::send_set_user_click_control_socket_port(
	const char*	dst_xrl_target_name,
	const uint32_t&	user_click_control_socket_port,
	const SetUserClickControlSocketPortCB&	cb
)
{
    static Xrl* x = NULL;

    if (!x) {
        x = new Xrl(dst_xrl_target_name, "fea_click/0.1/set_user_click_control_socket_port");
        x->args().add(XrlAtom(user_click_control_socket_port));
    }

    x->set_target(dst_xrl_target_name);

    x->args().set_arg(0, user_click_control_socket_port);

    return _sender->send(*x, callback(this, &XrlFeaClickV0p1Client::unmarshall_set_user_click_control_socket_port, cb));
}


/* Unmarshall set_user_click_control_socket_port */
void
XrlFeaClickV0p1Client::unmarshall_set_user_click_control_socket_port(
	const XrlError&	e,
	XrlArgs*	a,
	SetUserClickControlSocketPortCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaClickV0p1Client::send_set_user_click_startup_config_file(
	const char*	dst_xrl_target_name,
	const string&	user_click_startup_config_file,
	const SetUserClickStartupConfigFileCB&	cb
)
{
    static Xrl* x = NULL;

    if (!x) {
        x = new Xrl(dst_xrl_target_name, "fea_click/0.1/set_user_click_startup_config_file");
        x->args().add(XrlAtom(user_click_startup_config_file));
    }

    x->set_target(dst_xrl_target_name);

    x->args().set_arg(0, user_click_startup_config_file);

    return _sender->send(*x, callback(this, &XrlFeaClickV0p1Client::unmarshall_set_user_click_startup_config_file, cb));
}


/* Unmarshall set_user_click_startup_config_file */
void
XrlFeaClickV0p1Client::unmarshall_set_user_click_startup_config_file(
	const XrlError&	e,
	XrlArgs*	a,
	SetUserClickStartupConfigFileCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}

bool
XrlFeaClickV0p1Client::send_set_user_click_config_generator_file(
	const char*	dst_xrl_target_name,
	const string&	user_click_config_generator_file,
	const SetUserClickConfigGeneratorFileCB&	cb
)
{
    static Xrl* x = NULL;

    if (!x) {
        x = new Xrl(dst_xrl_target_name, "fea_click/0.1/set_user_click_config_generator_file");
        x->args().add(XrlAtom(user_click_config_generator_file));
    }

    x->set_target(dst_xrl_target_name);

    x->args().set_arg(0, user_click_config_generator_file);

    return _sender->send(*x, callback(this, &XrlFeaClickV0p1Client::unmarshall_set_user_click_config_generator_file, cb));
}


/* Unmarshall set_user_click_config_generator_file */
void
XrlFeaClickV0p1Client::unmarshall_set_user_click_config_generator_file(
	const XrlError&	e,
	XrlArgs*	a,
	SetUserClickConfigGeneratorFileCB		cb
)
{
    if (e != XrlError::OKAY()) {
	cb->dispatch(e);
	return;
    } else if (a && a->size() != 0) {
	XLOG_ERROR("Wrong number of arguments (%u != %u)", XORP_UINT_CAST(a->size()), XORP_UINT_CAST(0));
	cb->dispatch(XrlError::BAD_ARGS());
	return;
    }
    cb->dispatch(e);
}
