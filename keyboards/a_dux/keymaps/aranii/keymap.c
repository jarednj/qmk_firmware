#include QMK_KEYBOARD_H

enum layers {
    _RSTHD = 0,
    _FUN
};

// Aliases for readability
// #define DOT_TAP TD(SNTC_END_TD)
#define YOU_TAP TD(Y_YOU_TD)
#define OSL_FUN OSL(_FUN)

#include "features/autocorrection.c"
#include "macros.c"
#include "tapdance.c"
#include "combos.c"
#include "overrides.c"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * Base Layer: RSTHD
 *
 * ,-----------------------------------.               ,----------------------------------.
 * |   J  |   W  |   P  |   F  |  X   |                |   Z  |   M  |   ,  |   U  |   Q  |
 * |------+------+------+------+------|                |------+------+------+------+------|
 * |   R  |   S  |   T  |   H  |  B   |                |   /  |   N  |   A  |   I  |   O  |
 * |------+------+------+------+------+                +------+------+------+------+------|
 * |   V  |   C  |   G  |   D  |  <   |                |   >  |   L  |   .  |   Y  |   K  |
 * `-------------+------+------+------+------.  ,------+------+------+------+------+------'
 *                             | _FUN |   E  |  |  Spc |  Ent |
 *                             `-------------'  `-------------'
 */
    [_RSTHD] = LAYOUT(
      KC_J,    KC_W,    KC_P,    KC_F,    KC_X,                      KC_Z,    KC_M, KC_COMM,    KC_U,    KC_Q,
      KC_R,    KC_S,    KC_T,    KC_H,    KC_B,                   KC_SLSH,    KC_N,    KC_A,    KC_I,    KC_O,
      KC_V,    KC_C,    KC_G,    KC_D, KC_LABK,                   KC_RABK,    KC_L,  KC_DOT, KC_Y,    KC_K,
                                       OSL_FUN,   KC_E,  KC_SPC,  KC_ENT
    ),

/*
 * Function Layer:
 *
 * ,-----------------------------------.               ,----------------------------------.
 * |   J  |   W  |   P  |   F  |  X   |                |   Z  |   M  |   ,  |   U  |   Q  |
 * |------+------+------+------+------|                |------+------+------+------+------|
 * |   R  |   S  |   T  |   H  |  B   |                |   /  |   N  |   A  |   I  |   O  |
 * |------+------+------+------+------+                +------+------+------+------+------|
 * |   V  |   C  |   G  |   D  |  <   |                |   >  |   L  |   .  |   Y  |   K  |
 * `-------------+------+------+------+------.  ,------+------+------+------+------+------'
 *                             | _NAV |   E  |  |  Spc |  Ent |
 *                             `-------------'  `-------------'
 */
    [_FUN] = LAYOUT(
       _______, KC_MPRV, KC_MPLY, KC_MNXT, _______,                   _______,   MEH_M, MEH_COM,   MEH_U,   MEH_Q,
          UNDO,     CUT,    COPY,   PASTE, KC_CAPS,                   _______,   MEH_N,   MEH_A,   MEH_I,   MEH_O,
          REDO, _______, _______, _______, _______,                   _______, KC_HOME, KC_PGDN, KC_PGUP,  KC_END,
                                           _______, _______, MEH_SPC, _______
    ),
};
