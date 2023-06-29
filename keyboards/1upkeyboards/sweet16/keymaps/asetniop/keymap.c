#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _A,
    _S,
    _E,
    _T,
    _N,
    _I,
    _O,
    _R,
    _ENTR,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE]=LAYOUT_ortho_4x4(
        KC_ESC,         KC_TAB,       KC_LSFT,      KC_BSPC,
        LT(_A, KC_A),   LT(_S, KC_S), LT(_E, KC_E), LT(_T, KC_T),
        LT(_N, KC_N),   LT(_I, KC_I), LT(_O, KC_O), LT(_R, KC_R),
        LGUI_T(KC_SPC), KC_ENT,       XXXXXXX,        XXXXXXX
    ),
    [_A]=LAYOUT_ortho_4x4(
        KC_NO,   KC_EXLM, KC_AT, KC_HASH,
        KC_TRNS, KC_H,    KC_P,    KC_C,
        KC_NO,   KC_V,    KC_COMM, KC_DOT,
        _______, _______, XXXXXXX, XXXXXXX
    ),
    [_S]=LAYOUT_ortho_4x4(
        KC_DLR,  KC_NO,   KC_PERC, KC_CIRC,
        KC_J,    KC_TRNS, KC_K,    KC_L,
        KC_X,    KC_NO,   KC_Y,    KC_Z,
        _______, KC_NO,   XXXXXXX, XXXXXXX
    ),
    [_E]=LAYOUT_ortho_4x4(
        KC_AMPR, KC_ASTR, KC_NO,   _______,
        KC_B,    KC_D,    KC_TRNS, KC_F,
        KC_Q,    KC_U,    KC_NO,   KC_M,
        _______, _______, XXXXXXX, XXXXXXX
    ),
    [_T]=LAYOUT_ortho_4x4(
        KC_LCBR, KC_RCBR, KC_PLUS, KC_NO,
        KC_LPRN, KC_RPRN, KC_EQL, KC_TRNS,
        KC_LBRC, KC_RBRC, KC_MINUS, KC_NO,
        _______, _______, XXXXXXX, XXXXXXX
    ),
    [_N]=LAYOUT_ortho_4x4(
        KC_NO,   _______, _______, _______,
        KC_NO,   KC_UNDS, KC_TILDE, KC_GRV,
        KC_TRNS, KC_BSLS, KC_PIPE, KC_SLSH,
        _______, _______, XXXXXXX, XXXXXXX
    ),
    [_I]=LAYOUT_ortho_4x4(
        _______, KC_NO,   _______, _______,
        KC_G,    KC_NO,   KC_W, _______,
        KC_SCLN, KC_TRNS, KC_QUOT, _______,
        _______, KC_NO,   XXXXXXX, XXXXXXX
    ),
    [_O]=LAYOUT_ortho_4x4(
        _______, _______, KC_NO,   _______,
        _______, _______, KC_NO,   _______,
        _______, _______, KC_TRNS, _______,
        _______, _______, XXXXXXX, XXXXXXX
    ),
    [_R]=LAYOUT_ortho_4x4(
        KC_7, KC_8,    KC_9,    KC_NO,
        KC_4, KC_5,    KC_6,    KC_NO,
        KC_1, KC_2,    KC_3,    KC_TRNS,
        KC_0, _______, XXXXXXX, XXXXXXX
    ),
    [_ENTR]=LAYOUT_ortho_4x4(

        _______, _______, _______, _______,
        KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,
        _______, _______, _______, _______,
        _______, KC_TRNS, XXXXXXX, XXXXXXX
    )
};
