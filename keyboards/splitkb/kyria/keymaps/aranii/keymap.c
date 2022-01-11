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
#include QMK_KEYBOARD_H

enum layers {
    _RSTHD = 0,
    _FUN,
    _ADJ
};

// Aliases for readability
#define TO_HOME TO(_RSTHD)

// #define DOT_TAP TD(SNTC_END_TD)
#define YOU_TAP TD(Y_YOU_TD)
#define OSL_FUN OSL(_FUN)

#include "macros.c"
#include "tapdance.c"
#include "combos.c"
#include "overrides.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * Base Layer: RSTHD
 *
 * ,-----------------------------------.                             ,----------------------------------.
 * |   J  |   W  |   P  |   F  |  X   |                              |   Z  |   M  |   ,  |   U  |   Q  |
 * |------+------+------+------+------|                              |------+------+------+------+------|
 * |   R  |   S  |   T  |   H  |  B   |                              |   /  |   N  |   A  |   I  |   O  |
 * |------+------+------+------+------+                              +------+------+------+------+------|
 * |   V  |   C  |   G  |   D  |  <   |                              |   >  |   L  |   .  |   Y  |   K  |
 * `-------------+------+------+------+-------------.  ,------+-----+-------+------+------+-------------'
 *               |      |      | _NAV |   E  |      |  |      | Space|  Meh |      |      |
 *               |      |      |      |      |      |  |      |      |      |      |      |
 *               `----------------------------------'  `----------------------------------'
 */
    [_RSTHD] = LAYOUT(
      _______,    KC_J,    KC_W,    KC_P,    KC_F,    KC_X,                                        KC_Z,    KC_M, KC_COMM,    KC_U,    KC_Q, _______,
      _______,    KC_R,    KC_S,    KC_T,    KC_H,    KC_B,                                     KC_SLSH,    KC_N,    KC_A,    KC_I,    KC_O, _______,
      _______,    KC_V,    KC_C,    KC_G,    KC_D, KC_LABK, _______, _______, _______, _______, KC_RABK,    KC_L,  KC_DOT, YOU_TAP,    KC_K, _______,
                                 _______, _______, OSL_FUN,    KC_E, _______, _______,  KC_SPC, KC_ENT, _______, _______
    ),

/*
 * Navigation Layer
 *
 * ,-------------------------------------------.                              ,-------------------------------------------.
 * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
 * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |      |  |      |      |      |      |      |      |      |        |
 * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
 *                        |      |      |      |      |      |  |      |      |      |      |      |
 *                        |      |      |      |      |      |  |      |      |      |      |      |
 *                        `----------------------------------'  `----------------------------------'
 */
    [_FUN] = LAYOUT(
      _______,TO(_ADJ), _______, _______, _______, _______,                                     _______, MEH_M,   MEH_COMM, MEH_U,    MEH_Q, _______,
      _______,    UNDO,     CUT,    COPY,   PASTE, KC_CAPS,                                     _______, MEH_N,   MEH_A,   MEH_I,     MEH_O, _______,
      _______,    REDO, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP,  KC_END, _______,
                                 _______, _______, _______, _______, _______, _______, MEH_SPC, _______, _______, _______
    ),
/*
 * Adjust Layer: Function keys, RGB
 *
 * ,-------------------------------------------.                              ,-------------------------------------------.
 * |        | F1   |  F2  | F3   | F4   | F5   |                              | F6   | F7   |  F8  | F9   | F10  |        |
 * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
 * |        | TOG  | SAI  | HUI  | VAI  | MOD  |                              |      |      |      | F11  | F12  |        |
 * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
 * |        |      | SAD  | HUD  | VAD  | RMOD |      |      |  |      |      |      |      |      |      |      |        |
 * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
 *                        |      |      |      |      |      |  |      |      |      |      |      |
 *                        |      |      |      |      |      |  |      |      |      |      |      |
 *                        `----------------------------------'  `----------------------------------'
 */
    [_ADJ] = LAYOUT(
      _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                                       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
      _______, RGB_TOG, RGB_SAI, RGB_HUI, RGB_VAI, RGB_MOD,                                     _______, _______, _______, KC_F11,  KC_F12,  _______,
      _______, _______, RGB_SAD, RGB_HUD, RGB_VAD, RGB_RMOD,_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                                 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    )
// /*
//  * Layer template
//  *
//  * ,-------------------------------------------.                              ,-------------------------------------------.
//  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
//  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
//  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
//  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
//  * |        |      |      |      |      |      |      |      |  |      |      |      |      |      |      |      |        |
//  * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
//  *                        |      |      |      |      |      |  |      |      |      |      |      |
//  *                        |      |      |      |      |      |  |      |      |      |      |      |
//  *                        `----------------------------------'  `----------------------------------'
//  */
//     [_LAYERINDEX] = LAYOUT(
//       _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
//                                  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
//     ),
};
