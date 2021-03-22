#include QMK_KEYBOARD_H
#define RGB MO(_RGB)

enum layers {
 _BASE,
 _RGB
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE]=LAYOUT_ortho_4x4(
  KC_ESC,    KC_Q,  KC_W,  KC_E,
  KC_F3,     KC_A,  KC_S,  KC_D,
  KC_LSHIFT, KC_NO, KC_NO, KC_NO,
  KC_NO,     KC_NO, RGB,   KC_SPC
),
[_RGB]=LAYOUT_ortho_4x4(
  XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,
  RGB_TOG, RGB_MOD, _______, RESET
)
};
