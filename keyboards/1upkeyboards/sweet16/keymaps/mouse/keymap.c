#include QMK_KEYBOARD_H

#define FUNCS MO(_FUNCS)
#define SCROLL MO(_SCROLL)

enum layers {
    _MOUSE,
    _FUNCS,
    _SCROLL
};


const uint16_t PROGMEM
keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_MOUSE]=
LAYOUT_ortho_4x4(
        KC_ESC,  _______, KC_MS_U, FUNCS,
        _______, KC_MS_L, KC_MS_D, KC_MS_R,
        _______, KC_BTN4, KC_BTN3, KC_BTN5,
        KC_BTN1, KC_BTN2, SCROLL,  _______
),
[_FUNCS]=
LAYOUT_ortho_4x4(
        KC_ACL0, KC_ACL1, KC_ACL2, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______,
        RGB_TOG, RGB_MOD, _______, RESET
),
[_SCROLL]=
LAYOUT_ortho_4x4(
        _______, _______, KC_WH_U, _______,
        _______, KC_WH_L, KC_WH_D, KC_WH_R,
        _______, _______, _______, _______,
        _______, _______, _______, _______
)
};
