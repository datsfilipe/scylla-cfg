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
  U_A_GUI = MT(MOD_LGUI, KC_A),
  U_S_ALT = MT(MOD_LALT, KC_S),
  U_D_CTL = MT(MOD_LCTL, KC_D),
  U_F_SFT = MT(MOD_LSFT, KC_F),
  U_J_SFT = MT(MOD_RSFT, KC_J),
  U_K_CTL = MT(MOD_RCTL, KC_K),
  U_L_ALT = MT(MOD_LALT, KC_L),
  U_SCLN_GUI = MT(MOD_RGUI, KC_SCLN),
  U_SPC_NAV = LT(_NAV, KC_SPC),
  U_ENT_SYM = LT(_SYM, KC_ENT),
  U_ESC_NUM = LT(_NUM, KC_ESC),
  U_BSPC_FUN = KC_BSPC,
  U_PSCR_MEDIA = KC_PSCR,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_miryoku(
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    U_A_GUI, U_S_ALT, U_D_CTL, U_F_SFT, KC_G,        KC_H,    U_J_SFT, U_K_CTL, U_L_ALT, U_SCLN_GUI,
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
    KC_NO,   KC_NO,   U_ESC_NUM, U_SPC_NAV, KC_NO,    KC_NO,   U_BSPC_FUN, U_ENT_SYM, KC_NO, U_PSCR_MEDIA
  ),
  
  [_NAV] = LAYOUT_miryoku(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,       KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_INS,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_CAPS,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
  ),
  
  [_SYM] = LAYOUT_miryoku(
    KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,     KC_LPRN, KC_RPRN, KC_MINS, KC_PLUS, KC_EQL,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_LBRC, KC_RBRC, KC_UNDS, KC_PIPE, KC_GRV,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_LCBR, KC_RCBR, KC_BSLS, KC_QUOT, KC_TILD,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
  ),
  
  [_NUM] = LAYOUT_miryoku(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_F11,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_F12,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
  ),
  
  [_FUN] = LAYOUT_miryoku(
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
  ),
  
  [_MEDIA] = LAYOUT_miryoku(
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
  )
};
