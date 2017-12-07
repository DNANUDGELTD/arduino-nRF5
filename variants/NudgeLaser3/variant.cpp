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
  6, // 0 B
  8, // 1 G
  5, // 2 R

  // Buttons
  18,  // 3 
  7,  // 4

  // Interupts
  14, // 5
  27,  // 6
  13,  // 7
  17,  // 8

  // SPI
  30, // 9
  31, // 10
  29, // 11
  28, // 12

  // SDA, SCL
  3, // 13
  2, // 14

  // RX, TX
  19,  // 15
  21   // 16
};
