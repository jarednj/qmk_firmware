/* Copyright 2019 Thomas Baart <thomas@splitkb.com>
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

#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_ANIMATIONS
#    define RGBLIGHT_HUE_STEP  8
#    define RGBLIGHT_SAT_STEP  8
#    define RGBLIGHT_VAL_STEP  8
#    define RGBLIGHT_LIMIT_VAL 150
#endif

// If you are using an Elite C rev3 on the slave side, uncomment the lines below:
// #define SPLIT_USB_DETECT
#define NO_USB_STARTUP_CHECK

#define LAYER_STATE_8BIT // 8 layers max, to save on space

#undef DRIVER_LED_TOTAL
#define DRIVER_LED_TOTAL 16
#undef RGB_MATRIX_SPLIT
#define RGB_MATRIX_SPLIT { 8, 8 }

#define TAPPING_TOGGLE 1

// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 350

#define ONESHOT_TIMEOUT 4000
#define ONESHOT_TAP_TOGGLE 2

#define COMBO_TERM 45
#define COMBO_STRICT_TIMER
#define COMBO_ONLY_FROM_LAYER 0
