//  descriptor.cpp -- unit tests for the utsushi::descriptor API
//  Copyright (C) 2012  SEIKO EPSON CORPORATION
//
//  License: GPL-3.0+
//  Author : AVASYS CORPORATION
//
//  This file is part of the 'Utsushi' package.
//  This package is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License or, at
//  your option, any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//  You ought to have received a copy of the GNU General Public License
//  along with this package.  If not, see <http://www.gnu.org/licenses/>.

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <boost/test/unit_test.hpp>

#include "utsushi/descriptor.hpp"

using namespace utsushi;

BOOST_AUTO_TEST_CASE (attribute_aggregation)
{
  aggregator a = attributes (tag::general)(level::extended)(tag::geometry);

  BOOST_CHECK_EQUAL (2, a.tags ().size ());
  BOOST_CHECK (a.is_at (level::extended));
}

#include "utsushi/test/runner.ipp"
