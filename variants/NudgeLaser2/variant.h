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

#ifndef _VARIANT_NRF52_DK_
#define _VARIANT_NRF52_DK_

/** Master clock frequency */
#define VARIANT_MCK       (64000000ul)

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

// Number of pins defined in PinDescription array
#define PINS_COUNT           (16u)
#define NUM_DIGITAL_PINS     (16u)
#define NUM_ANALOG_INPUTS    (0u)
#define NUM_ANALOG_OUTPUTS   (0u)

// LEDs
#define BLUE_LED                (0u)
#define GREEN_LED               (1u)
#define RED_LED                 (2u)
#define PIN_LED1                RED_LED
#define PIN_LED2                GREEN_LED
#define PIN_LED3                BLUE_LED
#define LED_BUILTIN             PIN_LED1

// Buttons
#define PIN_BUTTON1             (3u)
#define PIN_BUTTON2             (4u)

/*
 * Serial interfaces
 */
// Serial
#define PIN_SERIAL_RX           (15u)
#define PIN_SERIAL_TX           (16u)

/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_MISO            (10u)
#define PIN_SPI_MOSI            (12u)
#define PIN_SPI_SCK             (11u)

static const uint8_t SS   = 9 ;
static const uint8_t MOSI = PIN_SPI_MOSI ;
static const uint8_t MISO = PIN_SPI_MISO ;
static const uint8_t SCK  = PIN_SPI_SCK ;

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA            (13u)
#define PIN_WIRE_SCL            (14u)

static const uint8_t SDA = PIN_WIRE_SDA;
static const uint8_t SCL = PIN_WIRE_SCL;

// Interupts
#define PIN_MPU_INTERRUPT       (5u)
#define PIN_STAT                (6u)
#define PIN_LASER_TRIGGER       (8u)
#define PIN_AIM_TRIGGER         (7u)

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
