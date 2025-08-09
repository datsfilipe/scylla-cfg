/*
 * Copyright 2021 Manna Harbour
 * https://github.com/manna-harbour/miryoku
 */

#include QMK_KEYBOARD_H
#include "config.h"

enum layers {
  _BASE,
  _NAV,
  _SYM,
  _NUM,
  _FUN,
  _MEDIA
};

enum custom_keycodes {
  U_A_CTL = MT(MOD_LCTL, KC_A),
  U_S_ALT = MT(MOD_LALT, KC_S),
  U_D_GUI = MT(MOD_LGUI, KC_D),
  U_F_SFT = MT(MOD_LSFT, KC_F),

  U_J_SFT = MT(MOD_RSFT, KC_J),
  U_K_GUI = MT(MOD_RGUI, KC_K),
  U_L_ALT = MT(MOD_LALT, KC_L),
  U_SCLN_CTL = MT(MOD_RCTL, KC_SCLN),

  U_SPC_NAV = LT(_NAV, KC_SPC),
  U_ENT_SYM = LT(_SYM, KC_ENT),
  U_BSPC_NUM = LT(_NUM, KC_BSPC),
  U_DEL_FUN = LT(_FUN, KC_DEL),
  U_TAB_MEDIA = LT(_MEDIA, KC_TAB),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT_miryoku(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    U_A_CTL, U_S_ALT, U_D_GUI, U_F_SFT, KC_G,        KC_H,    U_J_SFT, U_K_GUI, U_L_ALT, U_SCLN_CTL,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
    KC_NO,   KC_NO,   U_BSPC_NUM, U_SPC_NAV, KC_ESC,     U_ENT_SYM, U_DEL_FUN, KC_NO,   KC_NO,   KC_NO
  ),

  [_NAV] = LAYOUT_miryoku(
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_NO,
    KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, KC_NO,       KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   _______, _______, _______,     _______, _______, KC_NO,   KC_NO,   KC_NO
  ),

  [_SYM] = LAYOUT_miryoku(
    KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,     KC_LPRN, KC_RPRN, KC_MINS, KC_PLUS, KC_EQL,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_LBRC, KC_RBRC, KC_UNDS, KC_PIPE, KC_GRV,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_LCBR, KC_RCBR, KC_BSLS, KC_QUOT, KC_TILD,
    KC_NO,   KC_NO,   _______, _______, _______,     _______, _______, KC_NO,   KC_NO,   KC_NO
  ),

  [_NUM] = LAYOUT_miryoku(
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_P7,   KC_P8,   KC_P9,   KC_PSLS, KC_PAST,
    KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, KC_NO,       KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_PMNS,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_P1,   KC_P2,   KC_P3,   KC_PDOT, KC_PCMM,
    KC_NO,   KC_NO,   _______, _______, _______,     _______, U_TAB_MEDIA, KC_P0, KC_PEQL, KC_PENT
  ),

  [_FUN] = LAYOUT_miryoku(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_F11,
    KC_NO,   KC_NO,   QK_BOOT, KC_NO,   KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_F12,
    KC_NO,   KC_NO,   _______, _______, _______,     _______, _______, KC_NO,   KC_NO,   KC_NO
  ),

  [_MEDIA] = LAYOUT_miryoku(
    RGB_TOG, RGB_MOD, RGB_RMOD,RGB_HUI, RGB_SAI,     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    RGB_VAI, RGB_SPI, RGB_VAD, RGB_SPD, KC_NO,       KC_MPLY, KC_MPRV, KC_VOLU, KC_MNXT, KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_MUTE, KC_NO,   KC_VOLD, KC_NO,   KC_NO,
    KC_NO,   KC_NO,   _______, _______, _______,     _______, _______, KC_NO,   KC_NO,   KC_NO
  )
};
