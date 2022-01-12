// Macros
enum custom_keycodes {
	COPY = SAFE_RANGE,
	PASTE,
	CUT,
	UNDO,
	REDO,
    MEH_N,
    MEH_A,
    MEH_I,
    MEH_O,
    MEH_SPC,
    MEH_M,
    MEH_COM,
    MEH_U,
    MEH_Q,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_autocorrection(keycode, record)) { return false; }
    switch (keycode) {
    case COPY:
        if (record->event.pressed) {
            SEND_STRING(SS_LGUI("c"));
        } else {}
        break;
    case PASTE:
        if (record->event.pressed) {
            register_code(KC_LGUI);
            register_code(KC_V);
        } else {
            unregister_code(KC_V);
            unregister_code(KC_LGUI);
        }
        break;
    case CUT:
        if (record->event.pressed) {
            SEND_STRING(SS_LGUI("x"));
        } else {}
        break;
    case UNDO:
        if (record->event.pressed) {
            register_code(KC_LGUI);
            register_code(KC_Z);
        } else {
            unregister_code(KC_Z);
            unregister_code(KC_LGUI);
        }
        break;
    case REDO:
        if (record->event.pressed) {
            register_code(KC_LGUI);
            register_code(KC_LSFT);
            register_code(KC_Z);
        } else {
            unregister_code(KC_Z);
            unregister_code(KC_LSFT);
            unregister_code(KC_LGUI);
        }
        break;
    case MEH_N:
        if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_LCTRL(SS_LSFT("n"))));
        } else {}
        break;
    case MEH_A:
        if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_LCTRL(SS_LSFT("a"))));
        } else {}
        break;
    case MEH_I:
        if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_LCTRL(SS_LSFT("i"))));
        } else {}
        break;
    case MEH_O:
        if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_LCTRL(SS_LSFT("o"))));
        } else {}
        break;
    case MEH_SPC:
        if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_LCTRL(SS_LSFT(SS_TAP(X_SPC)))));
        } else {}
        break;
    case MEH_M:
        if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_LCTRL(SS_LSFT("m"))));
        } else {}
        break;
    case MEH_COM:
        if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_LCTRL(SS_LSFT(SS_TAP(X_COMM)))));
        } else {}
        break;
    case MEH_U:
        if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_LCTRL(SS_LSFT("u"))));
        } else {}
        break;
    case MEH_Q:
        if (record->event.pressed) {
            SEND_STRING(SS_LALT(SS_LCTRL(SS_LSFT("q"))));
        } else {}
        break;
    }
    return true;
};
