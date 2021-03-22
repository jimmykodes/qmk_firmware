#include QMK_KEYBOARD_H

#define RGB MO(_RGB)

enum layers {
    _BASE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(KC_MS_BTN1, KC_MS_BTN2),
};

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_WH_U);
        } else {
            tap_code(KC_WH_D);
        }
    }
}