/*
Copyright Redshift Software, Inc. 2008-2010
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_LIBRARY_C_VMS_H
#define BOOST_PREDEF_LIBRARY_C_VMS_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

#define BOOST_LIBC_VMS BOOST_VERSION_NUMBER(0,0,0)

#if defined(__CRTL_VER)
    #undef BOOST_LIBC_VMS
    #define BOOST_LIBC_VMS BOOST_VERSION_NUMBER(
        (__CRTL_VER)/10000000,\
        (__CRTL_VER%10000000)/100000,\
        (__CRTL_VER%10000)/100)
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_LIBC_VMS,"VMS")

#endif
