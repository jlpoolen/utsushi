//  log.cpp -- formatted messages based on priority and category
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

#include "utsushi/log.hpp"

namespace utsushi {

  //log::priority log::threshold = log::FATAL;
  log::priority log::threshold = log::DEBUG;
  //log::category log::matching  = log::NOTHING;
  log::category log::matching  = log::ALL;
  

template<>
std::basic_ostream< char >&
log::basic_logger< char >::os_(std::clog);

template<>
std::basic_ostream< wchar_t >&
log::basic_logger< wchar_t >::os_(std::wclog);

}       // namespace utsushi
