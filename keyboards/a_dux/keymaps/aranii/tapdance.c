// Tap Dance declarations
enum {
    SNTC_END_TD,
    Y_YOU_TD,
};

void sentence_end(qk_tap_dance_state_t *state, void *user_data) {
    switch (state->count) {
        // Double tapping TD_DOT produces ". <one-shot-shift>" i.e. dot, space and capitalize next letter.
        // This helps to quickly end a sentence and begin another one without having to hit shift.
        case 2:
            /* Check that Shift is inactive */
            if (!(get_mods() & MOD_MASK_SHIFT)) {
                tap_code(KC_SPC);
                /* Internal code of OSM(MOD_LSFT) */
                add_oneshot_mods(MOD_BIT(KC_LSHIFT));
            } else {
                tap_code(KC_DOT);
            }
            break;
        case 3:
            clear_oneshot_mods();
            // remove the added space of the double tap case
            tap_code(KC_BSPC);
            // replace the space with a second dot
            tap_code(KC_DOT);
            // tap the third dot
            tap_code(KC_DOT);
            break;
        default:
            tap_code(KC_DOT);
    }
};

void send_string_you(qk_tap_dance_state_t *state, void *user_data) {
    switch (state->count) {
      case 2:
         tap_code(KC_O);
         tap_code(KC_U);
         break;
      case 3:
        if ((get_mods() & MOD_MASK_SHIFT)) {
             del_mods(MOD_MASK_SHIFT);
             tap_code(KC_QUOT);
             add_mods(MOD_MASK_SHIFT);
        } else {
            tap_code(KC_QUOT);
        }
         tap_code(KC_R);
         tap_code(KC_E);
         break;
      default:
         tap_code(KC_Y);
   }
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    [SNTC_END_TD] = ACTION_TAP_DANCE_FN_ADVANCED(sentence_end, NULL, NULL),
    [Y_YOU_TD] = ACTION_TAP_DANCE_FN_ADVANCED(send_string_you, NULL, NULL),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TD(SNTC_END_TD):
        case TD(Y_YOU_TD):
            return TAPPING_TERM + 60;
        default:
            return TAPPING_TERM;
    }
};
