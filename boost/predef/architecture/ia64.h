/*
Copyright Redshift Software, Inc. 2008-2011
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_ARCHITECTURE_IA64_H
#define BOOST_PREDEF_ARCHITECTURE_IA64_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_ARCHITECTURE_IA64`]

[@http://en.wikipedia.org/wiki/Ia64 Intel IA-64] architecture.
 */

#define BOOST_ARCHITECTURE_IA64 BOOST_VERSION_NUMBER(0,0,0)

#if defined(__ia64__) || defined(_IA64) || \
    defined(__IA64__) || defined(__ia64) || \
    defined(_M_IA64) || defined(__itanium__) || \
    defined(__x86_64) ||  defined(__x86_64__)
    #undef BOOST_ARCHITECTURE_IA64
    #define BOOST_ARCHITECTURE_IA64 BOOST_VERSION_NUMBER(0,0,1)
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_ARCHITECTURE_IA64,"Intel IA-64")

#endif
