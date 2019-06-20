/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Type A Machines Series 1, Revision A
 * RAMPS Based system with two Y axis drivers
 *
 * TAM Series 1 has some minor differences over the default RAMPS 1.3 setup
 *  - Z axis is hooked up to the Y axis
 *  - Y axis has two drivers
 *    - Y axis uses the Z axis because of the two available 
 *  - Second heater has moved pin
 */

#define BOARD_NAME              "TAM_SERIES_1_REVA"
#define DEFAULT_MACHINE_NAME    "Type A Machines Series 1, Revision A"
//#define DEFAULT_SOURCE_CODE_URL "https://github.com/birkett/Vertex-K8400-Firmware"

#include "pins_RAMPS_13.h"

//
// Limit Switches
//
#undef Y_STEP_PIN
#undef Y_DIR_PIN
#undef Y_ENABLE_PIN

#define Y_STEP_PIN         46
#define Y_DIR_PIN          48
#define Y_ENABLE_PIN       62
#ifndef Y_CS_PIN
  #define Y_CS_PIN         40
#endif

#undef Z_STEP_PIN
#undef Z_DIR_PIN
#undef Z_ENABLE_PIN

#define Z_STEP_PIN         60
#define Z_DIR_PIN          61
#define Z_ENABLE_PIN       56
#ifndef Z_CS_PIN
  #define Z_CS_PIN         49
#endif


