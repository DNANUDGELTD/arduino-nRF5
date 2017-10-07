/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "variant.h"

const uint32_t g_ADigitalPinMap[] = {
  // LED
  28, // 0
  29, // 1
  30, // 2

  // Buttons
  4,  // 3
  7,  // 4

  // Interupts
  25, // 5
  0,  // 6
  2,  // 7
  3,  // 8

  // SPI
  12, // 9
  14, // 10
  16, // 11
  20, // 12

  // SDA, SCL
  26, // 13
  27, // 14

  // RX, TX
  8,  // 15
  6   // 16
};
