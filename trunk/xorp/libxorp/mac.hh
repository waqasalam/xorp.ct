// -*- c-basic-offset: 4; tab-width: 8; indent-tabs-mode: t -*-

// Copyright (c) 2001-2007 International Computer Science Institute
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software")
// to deal in the Software without restriction, subject to the conditions
// listed in the XORP LICENSE file. These conditions include: you must
// preserve this copyright notice, and you cannot mention the copyright
// holders in advertising related to the Software without their permission.
// The Software is provided WITHOUT ANY WARRANTY, EXPRESS OR IMPLIED. This
// notice is a summary of the XORP LICENSE file; the license in that file is
// legally binding.

// $XORP: xorp/libxorp/mac.hh,v 1.16 2007/06/22 22:53:52 pavlin Exp $

#ifndef __LIBXORP_MAC_HH__
#define __LIBXORP_MAC_HH__

#include "libxorp/xorp.h"
#include "libxorp/ether_compat.h"
#include "libxorp/exceptions.hh"


/**
 * @short MAC exceptions.
 *
 * The exception which is thrown when an illegal operation is
 * attempted on a MAC.
 */
class BadMac : public XorpReasonedException {
public:
    BadMac(const char* file, size_t line, const string init_why = "") 
	: XorpReasonedException("Incompatible Mac conversion",
				file, line, init_why) {}
};

/**
 * @short Generic container for any type of MAC.
 *
 * A class intended to carry any type of MAC. The assumption is
 * that all current and future MAC classes will have a printable
 * string representation and can be treated as opaque identifiers.
 */
class Mac {
public:
    /**
     * Default constructor
     */
    Mac() {}

    /**
     * Construct MAC address from string. Mac address format must conform
     * to one of known types.
     *
     * @param from_string string representation of MAC.
     * @throws InvalidString if s is not recognized Mac type.
     */
    Mac(const string& from_string) throw (InvalidString);

    /**
     * Copy a MAC address from string. Mac address format must conform
     * to one of known types.
     *
     * @param from_string the storage to copy the address from.
     * @return the number of copied octets.
     * @throws InvalidString if from_string is not recognized Mac type.
     */
    size_t copy_in(const string& from_string) throw (InvalidString);

    /**
     * @return string representation of MAC address.
     */
    const string& str() const { return _srep; }

    /**
     * Get the normalized string of MAC address.
     *
     * For example, in case of Ethernet MAC address, the original
     * string with an EtherMAC address is converted into
     * an "struct ether_addr", and then back to a string.
     * Thus, the string address representation is normalized
     * to the system's internal preference. Example:
     * "00:00:00:00:00:00" -> "0:0:0:0:0:0"
     *
     * @return normalized string representation of MAC address.
     */
    string normalized_str() const;

    /**
     * @return true if MAC address value is unset.
     */
    bool empty() const { return _srep.empty(); }

protected:
    void set_rep(const string& s) { _srep = s; }
    string _srep;
};

//
// EtherMac is really IEEE standard 6 octet address
//
class EtherMac : public Mac {
public:
    /**
     * Default constructor
     */
    EtherMac() : Mac() {}

    /**
     * Constructor from a (uint8_t *) memory pointer.
     *
     * @param from_uint8 the pointer to the memory to copy the address value
     * from.
     */
    explicit EtherMac(const uint8_t* from_uint8);

    /**
     * Construct EtherMac from a string representation.
     *
     * @param from_string string representation of the form XX:XX:XX:XX:XX:XX
     * where X represents a hex-digit.
     * @throws InvalidString if string passed does not match expected format.
     */
    EtherMac(const string& from_string) throw (InvalidString);

    /**
     * Construct EtherMac from Mac.
     *
     * @param from_mac Mac to construct EtherMac from.
     * @throws BadMac if the Mac's string representation is not equivalent to 
     * the EtherMac's string representation.
     */
    EtherMac(const Mac& from_mac) throw (BadMac);

    /**
     * Construct EtherMac from ether_addr structure.
     *
     * @param from_ether_addr the ether_addr structure to construct EtherMac
     * from.
     * @throws BadMac if the ether_addr cannot be used to construct EtherMac.
     */
    EtherMac(const struct ether_addr& from_ether_addr) throw (BadMac);

    /**
     * Construct EtherMac from sockaddr structure.
     *
     * @param from_sockaddr the sockaddr structure to construct EtherMac from.
     * @throws BadMac if the sockaddr cannot be used to construct EtherMac.
     */
    EtherMac(const struct sockaddr& from_sockaddr) throw (BadMac);

    /**
     * Copy the EtherMac raw address to specified memory location.
     *
     * @param: to_uint8 the pointer to the memory to copy the address to.
     * @return the number of copied octets.
     */
    size_t copy_out(uint8_t* to_uint8) const;

    /**
     * Copy a raw EtherMac address from specified memory location into
     * EtherMac container.
     *
     * @param from_uint8 the memory address to copy the address from.
     * @return the number of copied octets.
     */
    size_t copy_in(const uint8_t* from_uint8);

    /**
     * Copy the EtherMac address to ether_addr structure.
     *
     * @param to_ether_addr the storage to copy the address to.
     * @return the number of copied octets.
     */
    size_t copy_out(struct ether_addr& to_ether_addr) const;

    /**
     * Copy a raw Ethernet address from ether_addr structure into EtherMac
     * container.
     *
     * @param from_ether_addr the storage to copy the address from.
     * @return the number of copied octets.
     */
    size_t copy_in(const struct ether_addr& from_ether_addr);

    /**
     * Copy the EtherMac address to sockaddr structure.
     *
     * @param to_sockaddr the storage to copy the address to.
     * @return the number of copied octets.
     */
    size_t copy_out(struct sockaddr& to_sockaddr) const;

    /**
     * Copy a raw Ethernet address from sockaddr structure into EtherMac
     * container.
     *
     * @param from_sockaddr the storage to copy the address from.
     * @return the number of copied octets.
     */
    size_t copy_in(const struct sockaddr& from_sockaddr);

    /**
     * Copy the EtherMac address to generic Mac container.
     *
     * @param to_mac the storage to copy the address to.
     * @return the number of copied octets.
     */
    size_t copy_out(Mac& to_mac) const;

    /**
     * Copy an Ethernet address from Mac container into EtherMac container.
     *
     * @param from_mac the storage to copy the address from.
     * @return the number of copied octets.
     * @throws BadMac if the Mac cannot be used to construct EtherMac.
     */
    size_t copy_in(const Mac& from_mac) throw (BadMac);

    /**
     * Check whether string contains valid EtherMac representation.
     *
     * @param s potential EtherMac string representation.
     * @return true if s is valid, false otherwise.
     */
    static bool valid(const string& s);

    /**
     * Normalize the string representation of an EtherMac address.
     *
     * Convert the string with an EtherMAC address into
     * an "struct ether_addr", and then back to a string.
     * Thus, the string address representation is normalized
     * to the system's internal preference. Example:
     * "00:00:00:00:00:00" -> "0:0:0:0:0:0"
     *
     * @param s the string with the EtherMac address to normalize.
     * @return a string with the normalized EtherMac address.
     */
    static string normalize(const string& s) throw (InvalidString);

    /**
     * Number of bits in address as a constant.
     */
    static const uint32_t ADDR_BITLEN = 48;

    /**
     * Number of bytes in address as a constant.
     */
    static const uint32_t ADDR_BYTELEN = ADDR_BITLEN / 8;
};

inline bool
operator==(const Mac& m1, const Mac& m2)
{
    return m1.normalized_str() == m2.normalized_str();
}

inline bool
operator==(const EtherMac& m1, const EtherMac& m2)
{
    struct ether_addr ea1, ea2;

    if (m1.copy_out(ea1) != EtherMac::ADDR_BYTELEN)
	return false;
    if (m2.copy_out(ea2) != EtherMac::ADDR_BYTELEN)
	return false;
    return (memcmp(&ea1, &ea2, sizeof(ea1)) == 0);
}

#endif // __LIBXORP_MAC_HH__
