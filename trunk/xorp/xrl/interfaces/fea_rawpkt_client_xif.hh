/*
 * Copyright (c) 2002 International Computer Science Institute
 * See LICENSE file for licensing, conditions, and warranties on use.
 *
 * DO NOT EDIT THIS FILE - IT IS PROGRAMMATICALLY GENERATED
 *
 * Generated by '../scripts/clnt-gen'.
 *
 * $XORP: xorp/xrl/interfaces/fea_rawpkt_client_xif.hh,v 1.2 2002/11/19 19:31:44 hodson Exp $
 */


#ifndef __XRL_INTERFACES_FEA_RAWPKT_CLIENT_XIF_HH__
#define __XRL_INTERFACES_FEA_RAWPKT_CLIENT_XIF_HH__

#undef XORP_LIBRARY_NAME
#define XORP_LIBRARY_NAME "XifFeaRawpktClient"
#include "libxorp/xlog.h"
#include "libxipc/xrlrouter.hh"

class XrlRawPacketClientV0p1Client {
public:
    XrlRawPacketClientV0p1Client(XrlRouter* r) : _router(r) {}
    virtual ~XrlRawPacketClientV0p1Client() {}

    typedef XorpCallback1<void, const XrlError&>::RefPtr CB0;
    /**
     *  Send Xrl intended to:
     *  
     *  Receive a packet from a raw socket.
     *  
     *  @param tgt_name Xrl Target name
     */
    bool send_recv_raw4(
	const char*	target_name, 
	const string&	if_name, 
	const string&	vif_name, 
	const vector<uint8_t>&	packet, 
	const CB0&	cb
    );

protected:
    XrlRouter* _router;

private:
    void unmarshall0(
	const XrlError&	e, 
	XrlRouter&	/* r */, 
	const Xrl&	/* x */, 
	XrlArgs*	a, 
	CB0		cb
    );

};

#endif /* __XRL_INTERFACES_FEA_RAWPKT_CLIENT_XIF_HH__ */
