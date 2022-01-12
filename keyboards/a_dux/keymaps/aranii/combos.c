// Combos
enum myCombos {
   ONE_COMBO,
   TWO_COMBO,
   THREE_COMBO,
   FOUR_COMBO,
   FIVE_COMBO,
   SIX_COMBO,
   SEVEN_COMBO,
   EIGHT_COMBO,
   NINE_COMBO,
   ZERO_COMBO,
   BKSPC_COMBO,
   DEL_COMBO,
   ENT_COMBO,
   ESC_COMBO,
   TAB_COMBO,
   COLON_COMBO,
   DASH_COMBO,
   TILDE_COMBO,
   LEFT_COMBO,
   DOWN_COMBO,
   UP_COMBO,
   RIGHT_COMBO,
   LPRN_COMBO,
   LBRC_COMBO,
   LCBR_COMBO,
   RPRN_COMBO,
   RBRC_COMBO,
   RCBR_COMBO,
   CAPS_COMBO,
   LCTRL_COMBO,
   LOPT_COMBO,
   LCMD_COMBO,
   LSHIFT_COMBO,
   LCTL_OPT_COMBO,
   LCMD_OPT_COMBO,
   LSFT_CMD_COMBO,
   LCMD_CTL_COMBO,
   RCTRL_COMBO,
   ROPT_COMBO,
   RCMD_COMBO,
   RSHIFT_COMBO,
   RCTL_OPT_COMBO,
   RCMD_OPT_COMBO,
   RSFT_CMD_COMBO,
   RCMD_CTL_COMBO,
   DESKTOP_RIGHT,
   DESKTOP_LEFT,
   RESET_COMBO,
   COMBO_LENGTH // Only necessary for the combo_len var
};

uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM one_combo[] = { KC_H, KC_F, COMBO_END};
const uint16_t PROGMEM two_combo[] = { KC_T, KC_P, COMBO_END};
const uint16_t PROGMEM three_combo[] = { KC_W, KC_S, COMBO_END};
const uint16_t PROGMEM four_combo[] = { KC_R, KC_J, COMBO_END};
const uint16_t PROGMEM five_combo[] = { KC_X, KC_B, COMBO_END};
const uint16_t PROGMEM six_combo[] = { KC_SLSH, KC_Z, COMBO_END};
const uint16_t PROGMEM seven_combo[] = { KC_O, KC_Q, COMBO_END};
const uint16_t PROGMEM eight_combo[] = { KC_I, KC_U, COMBO_END};
const uint16_t PROGMEM nine_combo[] = { KC_DOT, KC_A, COMBO_END};
const uint16_t PROGMEM zero_combo[] = { KC_N, KC_M, COMBO_END};
const uint16_t PROGMEM bkspc_combo[] = { KC_G, KC_D, COMBO_END};
const uint16_t PROGMEM del_combo[] = { KC_G, KC_C, COMBO_END};
const uint16_t PROGMEM ent_combo[] = { KC_DOT, KC_L, COMBO_END};
const uint16_t PROGMEM esc_combo[] = { KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM tab_combo[] = { KC_DOT, YOU_TAP, COMBO_END};
const uint16_t PROGMEM colon_combo[] = { KC_H, KC_D, COMBO_END};
const uint16_t PROGMEM dash_combo[] = { KC_T, KC_G, COMBO_END};
const uint16_t PROGMEM tilde_combo[] = { KC_C, KC_S, COMBO_END};
const uint16_t PROGMEM left_combo[] = { KC_N, KC_L, COMBO_END};
const uint16_t PROGMEM down_combo[] = { KC_A, KC_DOT, COMBO_END};
const uint16_t PROGMEM up_combo[] = { KC_I, YOU_TAP, COMBO_END};
const uint16_t PROGMEM right_combo[] = { KC_O, KC_K, COMBO_END};
const uint16_t PROGMEM lprn_combo[] = { KC_H, KC_B, COMBO_END};
const uint16_t PROGMEM lbrc_combo[] = { KC_D, KC_LABK, COMBO_END};
const uint16_t PROGMEM lcbr_combo[] = { KC_F, KC_X, COMBO_END};
const uint16_t PROGMEM rprn_combo[] = { KC_N, KC_SLSH, COMBO_END};
const uint16_t PROGMEM rbrc_combo[] = { KC_L, KC_RABK, COMBO_END};
const uint16_t PROGMEM rcbr_combo[] = { KC_M, KC_Z, COMBO_END};
const uint16_t PROGMEM caps_combo[] = { KC_SLSH, KC_B, COMBO_END};
const uint16_t PROGMEM lctrl_combo[] = { KC_R, KC_S, COMBO_END};
const uint16_t PROGMEM lopt_combo[] = { KC_T, KC_S, COMBO_END};
const uint16_t PROGMEM lcmd_combo[] = { KC_H, KC_S, COMBO_END};
const uint16_t PROGMEM lshift_combo[] = { KC_H, KC_T, COMBO_END};
const uint16_t PROGMEM lctl_opt_combo[] = { KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM lcmd_opt_combo[] = { KC_R, KC_H, COMBO_END};
const uint16_t PROGMEM lsft_cmd_combo[] = { KC_S, KC_T, KC_H, COMBO_END};
const uint16_t PROGMEM lcmd_ctl_combo[] = { KC_R, KC_S, KC_T, COMBO_END};
const uint16_t PROGMEM rctrl_combo[] = { KC_O, KC_I, COMBO_END};
const uint16_t PROGMEM ropt_combo[] = { KC_I, KC_A, COMBO_END};
const uint16_t PROGMEM rcmd_combo[] = { KC_N, KC_I, COMBO_END};
const uint16_t PROGMEM rshift_combo[] = { KC_N, KC_A, COMBO_END};
const uint16_t PROGMEM rctl_opt_combo[] = { KC_O, KC_A, COMBO_END};
const uint16_t PROGMEM rcmd_opt_combo[] = { KC_O, KC_N, COMBO_END};
const uint16_t PROGMEM rsft_cmd_combo[] = { KC_I, KC_A, KC_N, COMBO_END};
const uint16_t PROGMEM rcmd_ctl_combo[] = { KC_O, KC_I, KC_A, COMBO_END};
const uint16_t PROGMEM desktop_right[] = { KC_COMM, KC_U, COMBO_END};
const uint16_t PROGMEM desktop_left[] = { KC_COMM, KC_M, COMBO_END};
const uint16_t PROGMEM reset_combo[] = { KC_J, KC_V, KC_X, KC_LABK, COMBO_END};

combo_t key_combos[] = {
    [ONE_COMBO] = COMBO(one_combo, KC_1),
    [TWO_COMBO] = COMBO(two_combo, KC_2),
    [THREE_COMBO] = COMBO(three_combo, KC_3),
    [FOUR_COMBO] = COMBO(four_combo, KC_4),
    [FIVE_COMBO] = COMBO(five_combo, KC_5),
    [SIX_COMBO] = COMBO(six_combo, KC_6),
    [SEVEN_COMBO] = COMBO(seven_combo, KC_7),
    [EIGHT_COMBO] = COMBO(eight_combo, KC_8),
    [NINE_COMBO] = COMBO(nine_combo, KC_9),
    [ZERO_COMBO] = COMBO(zero_combo, KC_0),
    [BKSPC_COMBO] = COMBO(bkspc_combo, KC_BSPC),
    [DEL_COMBO] = COMBO(del_combo, KC_DEL),
    [ENT_COMBO] = COMBO(ent_combo, KC_ENT),
    [ESC_COMBO] = COMBO(esc_combo, KC_ESC),
    [TAB_COMBO] = COMBO(tab_combo, KC_TAB),
    [COLON_COMBO] = COMBO(colon_combo, KC_COLN),
    [DASH_COMBO] = COMBO(dash_combo, KC_MINS),
    [TILDE_COMBO] = COMBO(tilde_combo, KC_TILD),
    [LEFT_COMBO] = COMBO(left_combo, KC_LEFT),
    [DOWN_COMBO] = COMBO(down_combo, KC_DOWN),
    [UP_COMBO] = COMBO(up_combo, KC_UP),
    [RIGHT_COMBO] = COMBO(right_combo, KC_RGHT),
    [LPRN_COMBO] = COMBO(lprn_combo, KC_LPRN),
    [LBRC_COMBO] = COMBO(lbrc_combo, KC_LBRC),
    [LCBR_COMBO] = COMBO(lcbr_combo, KC_LCBR),
    [RPRN_COMBO] = COMBO(rprn_combo, KC_RPRN),
    [RBRC_COMBO] = COMBO(rbrc_combo, KC_RBRC),
    [RCBR_COMBO] = COMBO(rcbr_combo, KC_RCBR),
    [CAPS_COMBO] = COMBO(caps_combo, KC_CAPS),
    [LCTRL_COMBO] = COMBO(lctrl_combo, OSM(MOD_LCTL)),
    [LOPT_COMBO] = COMBO(lopt_combo, OSM(MOD_LALT)),
    [LCMD_COMBO] = COMBO(lcmd_combo, OSM(MOD_LGUI)),
    [LSHIFT_COMBO] = COMBO(lshift_combo, OSM(MOD_LSFT)),
    [LCTL_OPT_COMBO] = COMBO(lctl_opt_combo, OSM(MOD_LCTL | MOD_LALT)),
    [LCMD_OPT_COMBO] = COMBO(lcmd_opt_combo, OSM(MOD_LGUI | MOD_LALT)),
    [LSFT_CMD_COMBO] = COMBO(lsft_cmd_combo, OSM(MOD_LSFT | MOD_LGUI)),
    [LCMD_CTL_COMBO] = COMBO(lcmd_ctl_combo, OSM(MOD_LGUI | MOD_LCTL)),
    [RCTRL_COMBO] = COMBO(rctrl_combo, OSM(MOD_LCTL)),
    [ROPT_COMBO] = COMBO(ropt_combo, OSM(MOD_LALT)),
    [RCMD_COMBO] = COMBO(rcmd_combo, OSM(MOD_LGUI)),
    [RSHIFT_COMBO] = COMBO(rshift_combo, OSM(MOD_LSFT)),
    [RCTL_OPT_COMBO] = COMBO(rctl_opt_combo, OSM(MOD_RCTL | MOD_RALT)),
    [RCMD_OPT_COMBO] = COMBO(rcmd_opt_combo, OSM(MOD_RGUI | MOD_RALT)),
    [RSFT_CMD_COMBO] = COMBO(rsft_cmd_combo, OSM(MOD_RSFT | MOD_RGUI)),
    [RCMD_CTL_COMBO] = COMBO(rcmd_ctl_combo, OSM(MOD_RGUI | MOD_RCTL)),
    [DESKTOP_RIGHT] = COMBO(desktop_right, LCTL(KC_RGHT)),
    [DESKTOP_LEFT] = COMBO(desktop_left, LCTL(KC_LEFT)),
    [RESET_COMBO] = COMBO(reset_combo, RESET),
};
