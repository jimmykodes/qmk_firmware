#include QMK_KEYBOARD_H
#define ARROWS MO(_ARROWS)
#define SYMBOLS OSL(_SYMBOLS)
#define SHORTCUTS OSL(_SHORTCUTS)
#define NAV OSL(_NAV)
#define UBU_BASE DF(_UBU_BASE)
#define MAC_BASE DF(_BASE)
#define GAME_BASE DF(_GAME_BASE)
#define EMOJI C(G(KC_SPC))
#define LOCK C(G(KC_Q))
#define FKEYS LT(_FKEYS, KC_3)
#define MEDIA LT(_MEDIA, KC_2)
#define NUMS LT(_NUMS, KC_1)

enum preonic_layers {
    _BASE,
    _UBU_BASE,
    _GAME_BASE,
    _SYMBOLS,
    _FKEYS,
    _ARROWS,
    _NAV,
    _SHORTCUTS,
    _MEDIA,
    _NUMS
};

enum custom_keycodes {
    FT_ARR = SAFE_RANGE,
    CLN_EQ,
    TO_CHAN,
};

// Tap Dance declarations
enum {
    TD_JJ_ESC,
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
        [TD_JJ_ESC] = ACTION_TAP_DANCE_DOUBLE(KC_J, KC_ESC),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT_ortho_5x12(
  KC_ESC,  NUMS,    MEDIA, FKEYS, KC_4,    KC_5,       KC_6,   KC_7,   KC_8,      KC_9,    KC_0,    KC_BSPC,
  KC_TAB,  KC_Q,    KC_W,  KC_E,  KC_R,    KC_T,       KC_Y,   KC_U,   KC_I,      KC_O,    KC_P,    SHORTCUTS,
  ARROWS,  KC_A,    KC_S,  KC_D,  KC_F,    KC_G,       KC_H,   TD(TD_JJ_ESC), KC_K,      KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT, KC_Z,    KC_X,  KC_C,  KC_V,    KC_B,       KC_N,   KC_M,   KC_COMM,   KC_DOT,  KC_SLSH, SYMBOLS,
  KC_LCTL, KC_LALT, EMOJI, NAV,   KC_LGUI, S(KC_LGUI), KC_ENT, KC_SPC, A(KC_ENT), OSM(KC_HYPR),     KC_CAPS, LOCK
),
[_GAME_BASE] = LAYOUT_ortho_5x12(
  KC_ESC,  NUMS,    MEDIA, FKEYS,  KC_4,    KC_5,       KC_6,   KC_7,   KC_8,      KC_9,    KC_0,    KC_BSPC,
  KC_TAB,  KC_Q,    KC_W,  KC_E,   KC_R,    KC_T,       KC_Y,   KC_U,   KC_I,      KC_O,    KC_P,    SHORTCUTS,
  ARROWS,  KC_A,    KC_S,  KC_D,   KC_F,    KC_G,       KC_H,   TD(TD_JJ_ESC), KC_K,      KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT, KC_Z,    KC_X,  KC_C,   KC_V,    KC_B,       KC_N,   KC_M,   KC_COMM,   KC_DOT,  KC_SLSH, SYMBOLS,
  KC_LCTL, KC_LALT, EMOJI, KC_SPC, KC_LGUI, S(KC_LGUI), KC_ENT, KC_SPC, A(KC_ENT), OSM(KC_HYPR),     KC_CAPS, LOCK
),
[_UBU_BASE] = LAYOUT_ortho_5x12(
  KC_ESC,  NUMS,    MEDIA,   FKEYS, KC_4,    KC_5,       KC_6,   KC_7,   KC_8,      KC_9,   KC_0,    KC_BSPC,
  KC_TAB,  KC_Q,    KC_W,    KC_E,  KC_R,    KC_T,       KC_Y,   KC_U,   KC_I,      KC_O,   KC_P,    SHORTCUTS,
  ARROWS,  KC_A,    KC_S,    KC_D,  KC_F,    KC_G,       KC_H,   TD(TD_JJ_ESC), KC_K,      KC_L,   KC_SCLN, KC_QUOT,
  KC_LSFT, KC_Z,    KC_X,    KC_C,  KC_V,    KC_B,       KC_N,   KC_M,   KC_COMM,   KC_DOT, KC_SLSH, SYMBOLS,
  KC_LGUI, KC_LALT, _______, NAV,   KC_LCTL, S(KC_LCTL), KC_ENT, KC_SPC, A(KC_ENT), OSM(KC_HYPR),    KC_CAPS, C(G(KC_Q))
),
[_FKEYS] = LAYOUT_ortho_5x12(
    _______, _______, _______, _______, _______, _______, _______, KC_F10,  KC_F11,  KC_F12, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_F7,   KC_F8,   KC_F9, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_F4,   KC_F5,   KC_F6, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_F1,   KC_F2,   KC_F3, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),
[_SYMBOLS] = LAYOUT_ortho_5x12(
    _______, KC_EXLM, KC_AT,    KC_HASH, KC_DLR,  KC_PERC, KC_CIRC,  KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
    _______, _______, KC_PLUS,  KC_LCBR, KC_RCBR, FT_ARR,  CLN_EQ,   KC_EQL,  KC_AMPR, _______, _______, _______,
    _______, KC_UNDS, KC_MINUS, KC_LPRN, KC_RPRN, KC_GRV,  KC_TILDE, KC_DLR,  KC_PIPE, KC_BSLS, _______, _______,
    _______, _______, _______,  KC_LBRC, KC_RBRC, _______, _______,  _______, TO_CHAN, _______, _______, _______,
    _______, _______, _______,  _______, _______, _______, _______,  _______, _______, _______, _______, _______
),
[_ARROWS] = LAYOUT_ortho_5x12(
    _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______,  _______,
    _______, _______, _______, _______, _______, _______, _______, _______,        KC_UP,   _______, _______,  _______,
    _______, _______, _______, _______, _______, _______, KC_RALT, KC_LEFT,        KC_DOWN, KC_RGHT, C(KC_G),  _______,
    _______, _______, _______, _______, _______, _______, _______, C(KC_A),        _______, C(KC_E), _______,  _______,
    _______, _______, _______, _______, _______, _______, _______, LSFT_T(KC_SPC), _______, _______, _______,  _______
),
[_NAV] = LAYOUT_ortho_5x12(
    _______, _______, _______, _______, _______, _______, _______,       _______,    _______,    _______,    _______,       _______,
    _______, _______, _______, _______, _______, _______, _______,       _______,    G(KC_U),    _______,    _______,       _______,
    _______, _______, _______, _______, _______, _______, G(S(KC_LBRC)), G(KC_LBRC), G(A(KC_B)), G(KC_RBRC), G(S(KC_RBRC)), _______,
    _______, _______, _______, _______, _______, _______, _______,       C(KC_M),    _______,    _______,    _______,       _______,
    _______, _______, _______, _______, _______, _______, _______,       _______,    _______,    _______,    _______,       _______
),
[_SHORTCUTS] = LAYOUT_ortho_5x12(
    _______, _______, _______,    _______, _______,    _______,    _______, _______,    _______,    _______,  _______,  _______,
    _______, _______, _______,    _______, C(KC_T),    HYPR(KC_T), _______, _______,    G(A(KC_I)), _______,  _______,  _______,
    _______, _______, G(A(KC_T)), _______, G(A(KC_L)), _______,    _______, S(C(KC_J)), _______,    _______,  _______,  _______,
    _______, RGB_TOG, RGB_MOD,    RGB_HUI, RGB_SAI,    RGB_VAI,    RGB_SPI, _______,    _______,    _______,  _______,  _______,
    _______, _______, RGB_RMOD,   RGB_HUD, RGB_SAD,    RGB_VAD,    RGB_SPD, _______,    GAME_BASE,  UBU_BASE, MAC_BASE, RESET
),
[_MEDIA] = LAYOUT_ortho_5x12(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, KC_VOLU, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, KC_VOLD, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),
[_NUMS] = LAYOUT_ortho_5x12(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_P7,   KC_P8,   KC_P9,   _______, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_P4,   KC_P5,   KC_P6,   _______, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_P1,   KC_P2,   KC_P3,   _______, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_P0,   _______, KC_PDOT, _______, _______
),

/*
[_NEW] = LAYOUT_ortho_5x12(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, KC_F,    _______, _______, KC_J,    _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),
 */
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
    case TO_CHAN:
        if (record->event.pressed) {
            SEND_STRING("<-");
        }
        break;
    return true;
};
