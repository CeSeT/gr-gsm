/* -*- c++ -*- */
/*
 * Copyright 2006,2009,2013 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * GNU Radio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * GNU Radio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNU Radio; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_GRGSM_CONSTANTS_H
#define INCLUDED_GRGSM_CONSTANTS_H

#include <grgsm/api.h>
#include <string>

namespace gr {
 namespace gsm{
  /*!
   * \brief return date/time of build, as set when 'cmake' is run
   */
  GRGSM_API const std::string build_date();

  /*!
   * \brief return version string defined by cmake (GrVersion.cmake)
   */
  GRGSM_API const std::string version();

  /*!
   * \brief return just the major version defined by cmake
   */
  GRGSM_API const std::string major_version();

  /*!
   * \brief return just the api version defined by cmake
   */
  GRGSM_API const std::string api_version();

  /*!
   * \brief returnjust the minor version defined by cmake
   */
  GRGSM_API const std::string minor_version();
 } /* namespace gsm */
} /* namespace gr */

#endif /* INCLUDED_GRGSM_CONSTANTS_H */