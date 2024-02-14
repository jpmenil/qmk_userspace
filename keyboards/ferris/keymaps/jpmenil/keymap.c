#include QMK_KEYBOARD_H

#include "config.h"

//#define LT_1 LT(1, KC_BSPC)
//#define LT_2 LT(2, KC_TAB)

#define LT_2 LT(2, KC_BSPC)
#define LT_3 LT(3, KC_TAB)

#define A_MT LSFT_T(KC_A)
#define S_MT LALT_T(KC_S)
#define D_MT LCTL_T(KC_D)
#define F_MT LGUI_T(KC_F)

#define J_MT LGUI_T(KC_J)
#define K_MT LCTL_T(KC_K)
#define L_MT LALT_T(KC_L)
#define SCLN_MT RSFT_T(KC_SCLN)

#define R_MT LALT_T(KC_R)
#define S2_MT LCTL_T(KC_S)
#define T_MT LGUI_T(KC_T)

#define N_MT LGUI_T(KC_N)
#define E_MT LCTL_T(KC_E)
#define I_MT LALT_T(KC_I)
#define O_MT RSFT_T(KC_O)

// Worspace navigation
#define WM(x) LGUI(KC_ ## x)
#define WM1 LT(0, KC_1)
#define WM2 LT(0, KC_2)

enum custom_keycodes {
  E_BOB = SAFE_RANGE,
  E_CLOSE,
  E_EOB,
  E_IDT,
  E_QR,
  E_RS,
  E_SAVE,
  E_UNDO,
  M_BLOCK,
  W_BACK,
  W_FWD,
  WZ_DOWN,
  WZ_LEFT,
  WZ_RIGHT,
  WZ_SLCT,
  WZ_SPLIH,
  WZ_SPLIV,
  WZ_UP,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_2(
    //┌────────┬────────┬────────┬────────┬────────┐                         ┌────────┬────────┬────────┬────────┬────────┐
        KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                           KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   ,
    //├────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┤
        A_MT   , S_MT   , D_MT   , F_MT   , KC_G   ,                           KC_H   , J_MT   , K_MT   , L_MT   , SCLN_MT,
    //├────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┤
        KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                           KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH,
    //└────────┴────────┴────────┴────┬───┴────┬───┼────────┐       ┌────────┼───┬────┴───┬────┴────────┴────────┴────────┘
                                        LT_3   ,     KC_SPC ,         KC_ENT ,     LT_2
    //                                └────────┘   └────────┘       └────────┘   └────────┘
    ),

    [1] = LAYOUT_split_3x5_2(
    //┌────────┬────────┬────────┬────────┬────────┐                         ┌────────┬────────┬────────┬────────┬────────┐
        KC_Q   , KC_W   , KC_F   , KC_P   , KC_B   ,                           KC_J   , KC_L   , KC_U   , KC_Y   , KC_SCLN,
    //├────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┤
        A_MT   , R_MT   , S2_MT  , T_MT   , KC_G   ,                           KC_M   , N_MT   , E_MT   , I_MT   , O_MT   ,
    //├────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┤
        KC_Z   , KC_X   , KC_C  ,  KC_D   , KC_V   ,                           KC_K   , KC_H   , KC_COMM, KC_DOT , KC_SLSH,
    //└────────┴────────┴────────┴────┬───┴────┬───┼────────┐       ┌────────┼───┬────┴───┬────┴────────┴────────┴────────┘
                                        LT_3   ,     KC_SPC ,         KC_ENT ,     LT_2
    //                                └────────┘   └────────┘       └────────┘   └────────┘
    ),

    [2] = LAYOUT_split_3x5_2(
    //┌────────┬────────┬────────┬────────┬────────┐                         ┌────────┬────────┬────────┬────────┬────────┐
       KC_EXLM , KC_AT  , KC_HASH, KC_DLR , KC_PERC,                           KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
    //├────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┤
        A_MT   , S_MT   , D_MT   , F_MT   ,_______ ,                           KC_MINS, KC_EQL , KC_LCBR, KC_RCBR, KC_PIPE,
    //├────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┤
       _______ ,_______ ,_______ ,_______ ,_______ ,                           KC_UNDS, KC_PLUS, KC_LBRC, KC_RBRC, KC_GRV ,
    //└────────┴────────┴────────┴────┬───┴────┬───┼────────┐       ┌────────┼───┬────┴───┬────┴────────┴────────┴────────┘
                                        MO(4)  ,     QK_GESC,        _______ ,    _______
    //                                └────────┘   └────────┘       └────────┘   └────────┘
    ),

    [3] = LAYOUT_split_3x5_2(
    //┌────────┬────────┬────────┬────────┬────────┐                         ┌────────┬────────┬────────┬────────┬────────┐
        KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                           KC_6   , KC_7   , KC_8   , KC_9   , KC_0   ,
    //├────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┤
        WM1    , WM2    , WM(3)  , WM(4)  , WM(5)  ,                           KC_LEFT, KC_DOWN, KC_UP  ,KC_RIGHT, KC_QUOT,
    //├────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┤
        WM(6)  , WM(7)  , WM(8)  , WM(9)  , WM(0)  ,                           KC_HOME, KC_PGUP, KC_PGDN, KC_END , KC_BSLS,
    //└────────┴────────┴────────┴────┬───┴────┬───┼────────┐       ┌────────┼───┬────┴───┬────┴────────┴────────┴────────┘
                                       _______ ,    _______ ,        _______ ,     MO(4)
    //                                └────────┘   └────────┘       └────────┘   └────────┘
    ),

    [4] = LAYOUT_split_3x5_2(
    //┌────────┬────────┬────────┬────────┬────────┐                         ┌────────┬────────┬────────┬────────┬────────┐
        DF(0)  ,_______ ,_______ ,_______ ,_______ ,                          _______ ,_______ ,  DT_UP , DT_DOWN, DF(1)  ,
    //├────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┤
       E_CLOSE , E_SAVE , E_UNDO , E_IDT  ,_______ ,                           WZ_LEFT, WZ_DOWN, WZ_UP  ,WZ_RIGHT, M_BLOCK,
    //├────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┤
        E_RS   ,_______ , E_BOB  , E_EOB  ,_______ ,                          WZ_SPLIH, WZ_SLCT, W_BACK , W_FWD  ,WZ_SPLIV,
    //└────────┴────────┴────────┴────┬───┴────┬───┼────────┐       ┌────────┼───┬────┴───┬────┴────────┴────────┴────────┘
                                       _______ ,    _______ ,        _______ ,    _______
    //                                └────────┘   └────────┘       └────────┘   └────────┘
    ),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case E_CLOSE:
            if (!record->event.pressed) return true;
            SEND_STRING(SS_LCTL("x")"#");
            return false;
        case E_BOB:
            if (!record->event.pressed) return true;
            SEND_STRING(SS_TAP(X_ESC) "<");
            return false;
        case E_EOB:
            if (!record->event.pressed) return true;
            SEND_STRING(SS_TAP(X_ESC) ">");
            return false;
        case E_IDT:
            if (!record->event.pressed) return true;
            SEND_STRING(SS_LCTL("x")SS_TAP(X_TAB));
            return false;
        case E_RS:
            if (!record->event.pressed) return true;
            SEND_STRING(SS_RALT("%"));
            return false;
        case E_SAVE:
            if (!record->event.pressed) return true;
            SEND_STRING(SS_LCTL("xs"));
            return false;
        case E_UNDO:
            if (!record->event.pressed) return true;
            SEND_STRING(SS_LCTL("x")"u");
            return false;
        case M_BLOCK:
            if (!record->event.pressed) return true;
            SEND_STRING("```");
            return false;
        case W_BACK:
            if (!record->event.pressed) return true;
            SEND_STRING(SS_LGUI(SS_TAP(X_LEFT)));
            return false;
        case W_FWD:
            if (!record->event.pressed) return true;
            SEND_STRING(SS_LGUI(SS_TAP(X_RIGHT)));
            return false;
        case WZ_DOWN:
            if (!record->event.pressed) return true;
            SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_DOWN))));
            return false;
        case WZ_LEFT:
            if (!record->event.pressed) return true;
            SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_LEFT))));
            return false;
        case WZ_RIGHT:
            if (!record->event.pressed) return true;
            SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_RIGHT))));
            return false;
        case WZ_SLCT:
            if (!record->event.pressed) return true;
            SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_X))));
            return false;
        case WZ_SPLIH:
            if (!record->event.pressed) return true;
            SEND_STRING(SS_LCTL(SS_LSFT(SS_LALT(SS_TAP(X_QUOTE)))));
            return false;
        case WZ_SPLIV:
            if (!record->event.pressed) return true;
            SEND_STRING(SS_LCTL(SS_LSFT(SS_LALT(SS_TAP(X_5)))));
            return false;
        case WZ_UP:
            if (!record->event.pressed) return true;
            SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_UP))));
            return false;
        case WM1:
            if (record->tap.count && record->event.pressed) {
                tap_code16(LGUI(KC_1));
            } else {
                if (record->event.pressed) {
                    register_code(KC_LSFT);
                } else {
                    unregister_code(KC_LSFT);
                }
            }
            return false;
        case WM2:
            if (record->tap.count && record->event.pressed) {
                tap_code16(LGUI(KC_2));
            } else {
                if (record->event.pressed) {
                    register_code(KC_LALT);
                } else {
                    unregister_code(KC_LALT);
                }
            }
            return false;
    }
    return true;
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_MINS:
        case SCLN_MT:
            return TAPPING_TERM - 50;
        default:
            return TAPPING_TERM;
    }
}
