#pragma once

#ifdef VIA_ENABLE
/* VIA configuration. */
#define DYNAMIC_KEYMAP_LAYER_COUNT 4

#ifdef VIAL_ENABLE
/** Vial configuration. */
#define VIAL_KEYBOARD_UID \
  { 0x5B, 0x76, 0x3F, 0xFF, 0xA8, 0x70, 0x33, 0xC8 }
#define VIAL_UNLOCK_COMBO_ROWS \
  { 0, 5 }
#define VIAL_UNLOCK_COMBO_COLS \
  { 0, 0 }
#endif  // VIAL_ENABLE

/* Disable action features. */
#define NO_ACTION_MACRO     // Disable old-style macro handling.
#define NO_ACTION_FUNCTION  // Disable old-style function handling.
#endif                      // VIA_ENABLE
