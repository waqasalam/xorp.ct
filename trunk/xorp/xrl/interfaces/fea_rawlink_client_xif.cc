/*
 * Copyright (c) 2001-2009 XORP, Inc.
 * See the XORP LICENSE.lgpl file for licensing, conditions, and warranties
 * on use.
 *
 * DO NOT EDIT THIS FILE - IT IS PROGRAMMATICALLY GENERATED
 *
 * Generated by 'clnt-gen'.
 */



#include "fea_rawlink_client_xif.hh"

bool
XrlRawLinkClientV0p1Client::send_recv(
	const char*	dst_xrl_target_name,
	const string&	if_name,
	const string&	vif_name,
	const Mac&	src_address,
	const Mac&	dst_address,
	const uint32_t&	ether_type,
	const vector<uint8_t>&	payload,
	const RecvCB&	cb
)
{
    static Xrl* x = NULL;

    if (!x) {
        x = new Xrl(dst_xrl_target_name, "raw_link_client/0.1/recv");
        x->args().add(XrlAtom(if_name));
        x->args().add(XrlAtom(vif_name));
        x->args().add(XrlAtom(src_address));
        x->args().add(XrlAtom(dst_address));
        x->args().add(XrlAtom(ether_type));
        x->args().add(XrlAtom(payload));
    }

    x->set_target(dst_xrl_target_name);

    x->args().set_arg(0, if_name);
    x->args().set_arg(1, vif_name);
    x->args().set_arg(2, src_address);
    x->args().set_arg(3, dst_address);
    x->args().set_arg(4, ether_type);
    x->args().set_arg(5, payload);

    return _sender->send(*x, callback(this, &XrlRawLinkClientV0p1Client::unmarshall_recv, cb));
}


/* Unmarshall recv */
void
XrlRawLinkClientV0p1Client::unmarshall_recv(
	const XrlError&	e,
	XrlArgs*	a,
	RecvCB		cb
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
