#include QMK_KEYBOARD_H

#define SYMBOLS OSL(_SYMBOLS)
#define EMOJI C(G(KC_SPC))
#define LOCK C(G(KC_Q))

#define ARROWS LT(_ARROWS, KC_TAB)
#define NUMS LT(_NUMS, KC_Q)
#define MEDIA LT(_MEDIA, KC_W)
#define SYSTEM LT(_SYSTEM, KC_ESC)
#define NUMROW LT(_NUMROW, KC_ENT)

enum preonic_layers {
    _BASE,
    _SYMBOLS,
    _ARROWS,
    _NUMS,
    _NUMROW,
    _MEDIA,
    _SYSTEM,
};

enum custom_keycodes {
    FT_ARR = SAFE_RANGE,
    CLN_EQ,
    L_ARR,
    R_ARR,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT_ortho_5x12(
//  < ESC >, <  1  >, <  2  >, <  3  >, <  4  >, <  5  >,  /*  |  */  <  6  >, <  7  >, <  8  >,       <  9  >, <  0  >, < BKSP >
    _______, _______, _______, _______, _______, _______,  /*  |  */  _______, _______, _______,       _______, _______, _______,
    SYSTEM,  NUMS,    MEDIA,   KC_E,    KC_R,    KC_T,     /*  |  */  KC_Y,    KC_U,    KC_I,          KC_O,    KC_P,    KC_BSPC,
    ARROWS,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     /*  |  */  KC_H,    KC_J,    KC_K,          KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     /*  |  */  KC_N,    KC_M,    KC_COMM,       KC_DOT,  KC_SLSH, SYMBOLS,
    _______, _______, KC_LALT, KC_LCTL, KC_LGUI, S(KC_LGUI),  /*  |  */  NUMROW,  KC_SPC,  OSM(MOD_HYPR), _______, _______, _______
),
[_SYMBOLS] = LAYOUT_ortho_5x12(
//  < ESC >, <  1  >, <  2  >,  <  3  >, <  4  >, <  5  >,  /*  |  */  <  6  >,  <  7  >, <  8  >, <  9  >, <  0  >, < BKSP >
    _______, _______, _______, _______, _______, _______,   /*  |  */  _______, _______, _______,  _______, _______, _______,
    EMOJI,   KC_PERC, KC_PLUS,  KC_LCBR, KC_RCBR, FT_ARR,   /*  |  */  CLN_EQ,   KC_EQL,  KC_AMPR, KC_0,    _______, _______,
    _______, KC_UNDS, KC_MINUS, KC_LPRN, KC_RPRN, KC_GRV,   /*  |  */  KC_TILDE, KC_DLR,  KC_PIPE, KC_BSLS, _______, _______,
    _______, KC_EXLM, KC_AT,    KC_LBRC, KC_RBRC, KC_HASH,  /*  |  */  KC_CIRC,  KC_ASTR, L_ARR,   R_ARR,   _______, _______,
    _______, _______, _______,  _______, _______, _______,  /*  |  */  _______,  _______, _______, _______, _______, _______
),
[_ARROWS] = LAYOUT_ortho_5x12(
//  < ESC >, <  1  >, <  2  >, <  3  >, <  4  >, <  5  >,  /*  |  */  <  6  >,       <  7  >,        <  8  >,    <  9  >,       <  0  >, < BKSP >
    _______, _______, _______, _______, _______, _______,  /*  |  */  _______,       _______,        _______,    _______,       _______, _______,
    _______, _______, _______, _______, _______, _______,  /*  |  */  G(S(KC_LBRC)), G(KC_LBRC),     G(KC_RBRC), G(S(KC_RBRC)), _______, _______,
    _______, _______, _______, _______, _______, _______,  /*  |  */  KC_LEFT,       KC_DOWN,        KC_UP,      KC_RGHT,       _______, _______,
    _______, _______, _______, _______, _______, _______,  /*  |  */  C(KC_A),       _______,        _______,    C(KC_E),       _______, _______,
    _______, _______, _______, _______, _______, _______,  /*  |  */  _______,       LSFT_T(KC_SPC), _______,    _______,       _______, _______
),
[_NUMS] = LAYOUT_ortho_5x12(
//  < ESC >, <  1  >, <  2  >, <  3  >, <  4  >, <  5  >,  /*  |  */  <  6  >, <  7  >, <  8  >, <  9  >, <  0  >, < BKSP >
    _______, _______, _______, _______, _______, _______,  /*  |  */  _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,  /*  |  */  KC_NUM,  KC_P7,   KC_P8,   KC_P9,   _______, _______,
    _______, _______, _______, _______, _______, _______,  /*  |  */  _______, KC_P4,   KC_P5,   KC_P6,   _______, _______,
    _______, _______, _______, _______, _______, _______,  /*  |  */  _______, KC_P1,   KC_P2,   KC_P3,   _______, _______,
    _______, _______, _______, _______, _______, _______,  /*  |  */  _______, KC_P0,   _______, KC_PDOT, _______, _______
),
[_NUMROW] = LAYOUT_ortho_5x12(
//  < ESC >, <  1  >, <  2  >, <  3  >, <  4  >, <  5  >,  /*  |  */  <  6  >, <  7  >, <  8  >, <  9  >, <  0  >, < BKSP >
    _______, _______, _______, _______, _______, _______,  /*  |  */  _______, _______, _______, _______, _______, _______,
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     /*  |  */  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
    _______, _______, _______, _______, _______, _______,  /*  |  */  _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,  /*  |  */  _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,  /*  |  */  _______, _______, _______, _______, _______, _______
),
[_MEDIA] = LAYOUT_ortho_5x12(
//  < ESC >, <  1  >, <  2  >, <  3  >, <  4  >, <  5  >,  /*  |  */  <  6  >, <  7  >, <  8  >, <  9  >, <  0  >, < BKSP >
    _______, _______, _______, _______, _______, _______,  /*  |  */  _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,  /*  |  */  _______, _______, KC_VOLU, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,  /*  |  */  _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______,
    _______, _______, _______, _______, _______, _______,  /*  |  */  _______, _______, KC_VOLD, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,  /*  |  */  _______, _______, _______, _______, _______, _______
),
[_SYSTEM] = LAYOUT_ortho_5x12(
//  < ESC >, <  1  >, <  2  >,  <  3  >, <  4  >, <  5  >,  /*  |  */  <  6  >, <  7  >, <  8  >, <  9  >, <  0  >, < BKSP >
    _______, _______, _______,  _______, _______, _______,  /*  |  */  _______, _______, _______, _______, _______, _______,
    _______, LOCK,    _______,  _______, _______, _______,  /*  |  */  _______, _______, _______, _______, _______, _______,
    _______, _______, _______,  _______, _______, _______,  /*  |  */  _______, _______, _______, _______, _______, _______,
    _______, RGB_TOG, RGB_MOD,  RGB_HUI, RGB_SAI, RGB_VAI,  /*  |  */  RGB_SPI, _______, _______, _______, _______, _______,
    _______, _______, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD,  /*  |  */  RGB_SPD, _______, _______, RESET,   _______, _______
),
// [_NEW] = LAYOUT_ortho_5x12(
// //  < ESC >, <  1  >, <  2  >, <  3  >, <  4  >, <  5  >,  /*  |  */  <  6  >, <  7  >, <  8  >, <  9  >, <  0  >, < BKSP >
//     _______, _______, _______, _______, _______, _______,  /*  |  */  _______, _______, _______, _______, _______, _______,
//     _______, _______, _______, _______, _______, _______,  /*  |  */  _______, _______, _______, _______, _______, _______,
//     _______, _______, _______, _______, KC_F,    _______,  /*  |  */  _______, KC_J,    _______, _______, _______, _______,
//     _______, _______, _______, _______, _______, _______,  /*  |  */  _______, _______, _______, _______, _______, _______,
//     _______, _______, _______, _______, _______, _______,  /*  |  */  _______, _______, _______, _______, _______, _______
// ),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case CLN_EQ:
        if (record->event.pressed) {
            SEND_STRING(":=");
        }
        break;
    case FT_ARR:
        if (record->event.pressed) {
            SEND_STRING("=>");
        }
        break;
    case L_ARR:
        if (record->event.pressed) {
            SEND_STRING("<-");
        }
        break;
    case R_ARR:
        if (record->event.pressed) {
            SEND_STRING("->");
        }
        break;
    }
    return true;
};
