// Key overrides
const key_override_t comma_dquo_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_COMM,
                                          KC_DQUO, ~0, MOD_MASK_CAG, ko_option_no_reregister_trigger);
const key_override_t period_quot_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, KC_DOT,
                                          KC_QUOT, ~0, MOD_MASK_CAG, ko_option_no_reregister_trigger);
const key_override_t space_underscore_override = ko_make_with_layers_negmods_and_options(MOD_MASK_ALT, KC_SPC,
                                          KC_UNDS, ~0, MOD_MASK_CSG, ko_option_no_reregister_trigger);
const key_override_t e_pipe_override = ko_make_with_layers_negmods_and_options(MOD_MASK_ALT, KC_E,
                                          KC_PIPE, ~0, MOD_MASK_CSG, ko_option_no_reregister_trigger);
const key_override_t n_bang_override = ko_make_with_layers_negmods_and_options(MOD_MASK_ALT, KC_N,
                                          KC_EXLM, ~0, MOD_MASK_CSG, ko_option_no_reregister_trigger);
const key_override_t a_ques_override = ko_make_with_layers_negmods_and_options(MOD_MASK_ALT, KC_A,
                                          KC_QUES, ~0, MOD_MASK_CSG, ko_option_no_reregister_trigger);
const key_override_t i_dlr_override = ko_make_with_layers_negmods_and_options(MOD_MASK_ALT, KC_I,
                                          KC_DLR, ~0, MOD_MASK_CSG, ko_option_no_reregister_trigger);
const key_override_t o_hash_override = ko_make_with_layers_negmods_and_options(MOD_MASK_ALT, KC_O,
                                          KC_HASH, ~0, MOD_MASK_CSG, ko_option_no_reregister_trigger);
const key_override_t h_astr_override = ko_make_with_layers_negmods_and_options(MOD_MASK_ALT, KC_H,
                                          KC_ASTR, ~0, MOD_MASK_CSG, ko_option_no_reregister_trigger);
const key_override_t t_grv_override = ko_make_with_layers_negmods_and_options(MOD_MASK_ALT, KC_T,
                                          KC_GRV, ~0, MOD_MASK_CSG, ko_option_no_reregister_trigger);
const key_override_t s_eql_override = ko_make_with_layers_negmods_and_options(MOD_MASK_ALT, KC_S,
                                          KC_EQL, ~0, MOD_MASK_CSG, ko_option_no_reregister_trigger);
const key_override_t r_plus_override = ko_make_with_layers_negmods_and_options(MOD_MASK_ALT, KC_R,
                                          KC_PLUS, ~0, MOD_MASK_CSG, ko_option_no_reregister_trigger);
const key_override_t d_at_override = ko_make_with_layers_negmods_and_options(MOD_MASK_ALT, KC_D,
                                          KC_AT, ~0, MOD_MASK_CSG, ko_option_no_reregister_trigger);
const key_override_t g_perc_override = ko_make_with_layers_negmods_and_options(MOD_MASK_ALT, KC_G,
                                          KC_PERC, ~0, MOD_MASK_CSG, ko_option_no_reregister_trigger);
const key_override_t c_circ_override = ko_make_with_layers_negmods_and_options(MOD_MASK_ALT, KC_C,
                                          KC_CIRC, ~0, MOD_MASK_CSG, ko_option_no_reregister_trigger);
const key_override_t l_bsls_override = ko_make_with_layers_negmods_and_options(MOD_MASK_ALT, KC_L,
                                          KC_BSLS, ~0, MOD_MASK_CSG, ko_option_no_reregister_trigger);
const key_override_t dot_scln_override = ko_make_with_layers_negmods_and_options(MOD_MASK_ALT, KC_DOT,
                                          KC_SCLN, ~0, MOD_MASK_CSG, ko_option_no_reregister_trigger);
const key_override_t y_ampr_override = ko_make_with_layers_negmods_and_options(MOD_MASK_ALT, YOU_TAP,
                                          KC_AMPR, ~0, MOD_MASK_CSG, ko_option_no_reregister_trigger);
const key_override_t comm_voldown_override = ko_make_with_layers_negmods_and_options(MOD_MASK_ALT, KC_COMM,
                                          KC_VOLD, ~0, MOD_MASK_CSG, ko_option_no_reregister_trigger);
const key_override_t u_mute_override = ko_make_with_layers_negmods_and_options(MOD_MASK_ALT, KC_U,
                                          KC_MUTE, ~0, MOD_MASK_CSG, ko_option_no_reregister_trigger);
const key_override_t m_volup_override = ko_make_with_layers_negmods_and_options(MOD_MASK_ALT, KC_M,
                                          KC_VOLU, ~0, MOD_MASK_CSG, ko_option_no_reregister_trigger);

const key_override_t **key_overrides = (const key_override_t *[]){
    &comma_dquo_override,
    &period_quot_override,
    &space_underscore_override,
    &e_pipe_override,
    &n_bang_override,
    &a_ques_override,
    &i_dlr_override,
    &o_hash_override,
    &h_astr_override,
    &t_grv_override,
    &s_eql_override,
    &r_plus_override,
    &d_at_override,
    &g_perc_override,
    &c_circ_override,
    &l_bsls_override,
    &dot_scln_override,
    &y_ampr_override,
    &p_play_override,
    &f_next_override,
    &w_prev_override,
    &comm_voldown_override,
    &u_mute_override,
    &m_volup_override,
    NULL // Null terminate the array of overrides
};
