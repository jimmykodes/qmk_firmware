#include QMK_KEYBOARD_H

#define RGB MO(_RGB)

enum layers {
    _KEYPAD,
    _RGB
};


const uint16_t PROGMEM
keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_KEYPAD]=
LAYOUT_ortho_4x4(
        KC_P7, KC_P8, KC_P9, KC_BSPC,
        KC_P4, KC_P5, KC_P6, RGB,
        KC_P1, KC_P2, KC_P3, KC_NO,
        KC_P0, KC_PENT, KC_PDOT, RESET
),
[_RGB]=
LAYOUT_ortho_4x4(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        RGB_HUI, RGB_SAI, RGB_VAI, _______,
        RGB_HUD, RGB_SAD, RGB_VAD, _______,
        RGB_TOG, RGB_MOD, RGB_RMOD, _______
)
};
