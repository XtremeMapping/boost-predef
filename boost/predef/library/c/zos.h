/*
Copyright Redshift Software, Inc. 2008-2010
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_LIBRARY_C_ZOS_H
#define BOOST_PREDEF_LIBRARY_C_ZOS_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

#define BOOST_LIBC_ZOS BOOST_VERSION_NUMBER(0,0,0)

#if defined(__LIBREL__)
    #undef BOOST_LIBC_ZOS
    #define BOOST_LIBC_ZOS BOOST_PREDEF_MAKE_F_FF_FFFF(__LIBREL__)
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_LIBC_ZOS,"zOS")

#endif
