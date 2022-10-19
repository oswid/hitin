/* Copyright 2018
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


#define USE_SERIAL
/* serial.c configuration for split keyboard */


/* Select hand configuration */
#define MASTER_LEFT


/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 4*2
#define MATRIX_COLS 7


#define MATRIX_ROW_PINS { F4, B1, F6, F7}
#define MATRIX_COL_PINS { D1, D0, D4, C6, D7, D3, B4}

//#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW


#define USE_SERIAL
/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D2 



#define COMBO_KEYS_COUNT 99
#define COMBO_MAX_SIZE 3
#define COMBO_STACK_MAX_SIZE 3
#define COMBO_WAIT_TIME 100



#define UNICODE_SELECTED_MODES UC_LNX, UC_WIN