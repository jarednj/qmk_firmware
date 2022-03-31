bool process_adaptive_key(uint16_t keycode, const keyrecord_t *record) {
    bool return_state = true; // assume we don't do anything.
    static uint16_t prior_keycode = KC_NO; // for process_adaptive_key
    static uint16_t prior_keydown = 0;
    uint8_t  saved_mods;

    saved_mods = get_mods();
    if (record->event.pressed) {
        if ((timer_elapsed(prior_keydown) < ADAPTIVE_TERM)) {
            saved_mods = get_mods();
            unregister_code(KC_LSFT); // turn off shift to facilitate
            unregister_code(KC_RSFT); // first-words & Proper nouns.
            keycode = keycode & 0xFF; // ignore all taps&mods? (or just shift?)
            switch (keycode) {
                case KC_COMM:
                    switch (prior_keycode) {
                        case KC_U:
                            tap_code(KC_L); // quickly typing "U," yields "UL"
                            return_state = false;
                            break;
                    }
                    break;
                case KC_G:
                    switch (prior_keycode) {
                        case KC_S:
                            tap_code(KC_C); // quickly typing "SG" yields "SC"
                            return_state = false;
                            break;
                    }
                    break;
                case KC_F:
                    switch (prior_keycode) {
                        case KC_P:
                            tap_code(KC_T); // quickly typing "PF" yields "PT"
                            return_state = false;
                            break;
                    }
                    break;
            }
            if (return_state) set_mods(saved_mods); // Restore mods
        }
        prior_keycode = keycode; // this keycode is stripped of mods+taps
        prior_keydown = timer_read(); // (re)start prior_key timing
    }
    return return_state; //
}
