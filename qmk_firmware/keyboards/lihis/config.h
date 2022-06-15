/* Copyright 2022 Eetu Harjunpää
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0x0843
#define PRODUCT_ID 0x3589
#define DEVICE_VER 0x0001
#define MANUFACTURER ced
#define PRODUCT lihis

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 7

#define MATRIX_COL_PINS { B12, B13, B14, B15, B0, A7, B9 }
#define MATRIX_ROW_PINS { A6, A5, A4, A3 }

#define DIODE_DIRECTION COL2ROW

#define SOFT_SERIAL_PIN A15
#define SELECT_SOFT_SERIAL_SPEED 1

#define MATRIX_IO_DELAY 5
#define TAP_CODE_DELAY 10

#define ENCODERS_PAD_A { B4 }
#define ENCODERS_PAD_B { B5 }

#define PRODUCT lihis

#define SPLIT_HAND_PIN B3
#define EEPROM_I2C_24LC64


/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
