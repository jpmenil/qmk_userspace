#include QMK_KEYBOARD_H

#include "config.h"
#include "secrets.h"

#define LT_2 LT(2, KC_BSPC)
#define LT_3 LT(3, KC_TAB)

#define A_MT LSFT_T(KC_A)
//#define A_MT LGUI_T(KC_A)
#define S_MT LALT_T(KC_S)
#define D_MT LCTL_T(KC_D)
#define F_MT LGUI_T(KC_F)
//#define F_MT LSFT_T(KC_F)

#define J_MT RGUI_T(KC_J)
//#define J_MT RSFT_T(KC_J)
#define K_MT LCTL_T(KC_K)
#define L_MT LALT_T(KC_L)
#define SCLN_MT RSFT_T(KC_SCLN)
//#define SCLN_MT LGUI_T(KC_SCLN)

#define R_MT LALT_T(KC_R)
#define S2_MT LCTL_T(KC_S)
#define T_MT LGUI_T(KC_T)

#define N_MT LGUI_T(KC_N)
#define E_MT LCTL_T(KC_E)
#define I_MT LALT_T(KC_I)
#define O_MT RSFT_T(KC_O)

// Worspace navigation
#define WM(x) LGUI(KC_##x)
#define WM1 LT(0, KC_1)
#define WM2 LT(0, KC_2)

#define SLSH_COPY LGUI_T(KC_SLSH)
#define DOT_PASTE LGUI_T(KC_DOT)


// #define MACRO_TIMER 1

enum custom_keycodes {
  B_BACK = SAFE_RANGE,
  B_FWD,
  E_BOB,
  E_CLOSE,
  E_EOB,
  E_IDT,
  E_QR,
  E_RS,
  E_SAVE,
  E_UNDO,
  KC_SEC1,
  KC_SEC2,
  KC_SEC3,
  KC_SEC4,
  KC_SEC5,
  M_BLOCK,
  S_NEXT,
  S_PREV,
  WZ_DOWN,
  WZ_LEFT,
  WZ_RGHT,
  WZ_SLCT,
  WZ_SPLH,
  WZ_SPLV,
  WZ_UP,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,     KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   ,
        A_MT   , S_MT   , D_MT   , F_MT   , KC_G   ,     KC_H   , J_MT   , K_MT   , L_MT   , SCLN_MT,
        KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,     KC_N   , KC_M   , KC_COMM, DOT_PASTE, SLSH_COPY,
                          MO(5)  , LT_3   , KC_SPC ,     KC_ENT , LT_2
    ),
    /*╭────────┬────────┬────────┬────────┬────────╮   ╭────────┬────────┬────────┬────────┬────────╮
      │  Q     │  W     │  E     │  R     │  T     │   │  Y     │  U     │  I     │  O     │  P     │
      ├────────┼────────┼────────┼────────┼────────┤   ├────────┼────────┼────────┼────────┼────────┤
      │  A/SFT │  S/ALT │  D/CTL │  F/CMD │  G     │   │  H     │  J/CMD │  K/CTL │  L/ALT │ ; :/SFT│
      ├────────┼────────┼────────┼────────┼────────┤   ├────────┼────────┼────────┼────────┼────────┤
      │  Z     │  X     │  C     │  V     │  B     │   │  N     │  M     │ , <    │ . >    │ / ?    │
      ╰────────┴────────┼────────┼────────┼────────┤   ├────────┼────────┼────────┴────────┴────────╯
                        │  L5    │  L3/TAB│  SPC   │   │  ENT   │ L2/BSPC│
                        ╰────────┴────────┴────────╯   ╰────────┴────────╯*/

    [1] = LAYOUT(
        KC_Q   , KC_W   , KC_F   , KC_P   , KC_B   ,     KC_J   , KC_L   , KC_U   , KC_Y   , KC_SCLN,
        A_MT   , R_MT   , S2_MT  , T_MT   , KC_G   ,     KC_M   , N_MT   , E_MT   , I_MT   , O_MT   ,
        KC_Z   , KC_X   , KC_C   , KC_D   , KC_V   ,     KC_K   , KC_H   , KC_COMM, KC_DOT , KC_SLSH,
                          _______, LT_3   , KC_SPC ,     KC_ENT , LT_2
    ),
    /*╭────────┬────────┬────────┬────────┬────────╮   ╭────────┬────────┬────────┬────────┬────────╮
      │  Q     │  W     │  F     │  P     │  B     │   │  J     │  L     │  U     │  Y     │  ;     │
      ├────────┼────────┼────────┼────────┼────────┤   ├────────┼────────┼────────┼────────┼────────┤
      │  A/SFT │  R/ALT │  S/CTL │  T/CMD │  G     │   │  M     │  N/CMD │  E/CTL │  I/ALT │ O/SFT  │
      ├────────┼────────┼────────┼────────┼────────┤   ├────────┼────────┼────────┼────────┼────────┤
      │  Z     │  X     │  C     │  D     │  V     │   │  K     │  H     │ , <    │ . >    │ / ?    │
      ╰────────┴────────┼────────┼────────┼────────┤   ├────────┼────────┼────────┴────────┴────────╯
                        │  L5    │  L3    │  SPC   │   │  ENT   │ L2/BSPC│
                        ╰────────┴────────┴────────╯   ╰────────┴────────╯*/

    [2] = LAYOUT(
        KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC,     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
        KC_LABK, KC_RABK, KC_QUOT, KC_DQUO, KC_SCLN,     KC_MINS, KC_EQL , KC_LCBR, KC_RCBR, KC_PIPE,
        KC_BSLS, KC_SLSH, KC_COLN, KC_QUES, KC_TILD,     KC_UNDS, KC_PLUS, KC_LBRC, KC_RBRC, KC_GRV,
                          _______, MO(4)  , KC_ESC ,     _______, _______
    ),
    /*╭────────┬────────┬────────┬────────┬────────╮   ╭────────┬────────┬────────┬────────┬────────╮
      │  !     │  @     │  #     │  $     │  %     │   │  ^     │  &     │  *     │  (     │  )     │
      ├────────┼────────┼────────┼────────┼────────┤   ├────────┼────────┼────────┼────────┼────────┤
      │  <     │  >     │  '     │  "     │  ;     │   │  -     │  =     │  {     │  }     │  |     │
      ├────────┼────────┼────────┼────────┼────────┤   ├────────┼────────┼────────┼────────┼────────┤
      │  \     │  /     │  :     │  ?     │  ~     │   │  _     │  +     │  [     │  ]     │  `     │
      ╰────────┴────────┼────────┼────────┼────────┤   ├────────┼────────┼────────┴────────┴────────╯
                        │        │  L4    │  SPC   │   │  ENT   │ L2/BSPC│
                        ╰────────┴────────┴────────╯   ╰────────┴────────╯*/

    [3] = LAYOUT(
        KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,     KC_6   , KC_7   , KC_8   , KC_9   , KC_0   ,
        WM1    , WM2    , WM(3)  , WM(4)  , WM(5)  ,     KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_QUOT,
        WM(6)  , WM(7)  , WM(8)  , WM(9)  , WM(0)  ,     KC_HOME, KC_PGUP, KC_PGDN, KC_DOT , KC_BSLS,
                          _______, _______, _______,     _______, MO(4)
    ),
    /*╭────────┬────────┬────────┬────────┬────────╮   ╭────────┬────────┬────────┬────────┬────────╮
      │  1     │  2     │  3     │  4     │  5     │   │  6     │  7     │  8     │  9     │  0     │
      ├────────┼────────┼────────┼────────┼────────┤   ├────────┼────────┼────────┼────────┼────────┤
      │  WM1   │  WM1   │  WM3   │  WM4   │  WM5   │   │  LEFT  │  DOWN  │ UP     │  RIGHT │  '     │
      ├────────┼────────┼────────┼────────┼────────┤   ├────────┼────────┼────────┼────────┼────────┤
      │  WM6   │  WM7   │  WM8   │  WM9   │  WM0   │   │  HOME  │  PG UP │ PG DN  │  .     │ /      │
      ╰────────┴────────┼────────┼────────┼────────┤   ├────────┼────────┼────────┴────────┴────────╯
                        │        │        │        │   │        │ L4     │
                        ╰────────┴────────┴────────╯   ╰────────┴────────╯*/

    [4] = LAYOUT(
        DF(0)  , KC_SEC5, S_PREV , S_NEXT , KC_SEC3,     KC_SEC4, KC_END , DT_UP  , DT_DOWN, DF(1)  ,
        E_CLOSE, E_SAVE , E_UNDO , E_IDT  , KC_SEC1,     WZ_LEFT, WZ_DOWN, WZ_UP  , WZ_RGHT, M_BLOCK,
        E_RS   , _______, E_BOB  , E_EOB  , KC_SEC2,     WZ_SPLH, WZ_SLCT, B_BACK , B_FWD  , WZ_SPLV,
                          _______, _______, _______,     _______, _______
    ),
    /*╭────────┬────────┬────────┬────────┬────────╮   ╭────────┬────────┬────────┬────────┬────────╮
      │  DF0   │        │        │        │        │   │        │  END   │  DT UP │  DT DN │  DF 1  │
      ├────────┼────────┼────────┼────────┼────────┤   ├────────┼────────┼────────┼────────┼────────┤
      │ E CLOSE│ E SAVE │ E UNDO │ E IDT  │        │   │ WZ LEFT│ WZ DWN │  WZ UP │ WZ RGHT│ M BLOCK│
      ├────────┼────────┼────────┼────────┼────────┤   ├────────┼────────┼────────┼────────┼────────┤
      │ E RS   │        │ E BOB  │ E EOB  │        │   │ WZ SPLH│ WZ SLCT│ B BACK │ B FWD  │ WZ SPLV│
      ╰────────┴────────┼────────┼────────┼────────┤   ├────────┼────────┼────────┴────────┴────────╯
                        │        │        │        │   │        │        │
                        ╰────────┴────────┴────────╯   ╰────────┴────────╯*/

    [5] = LAYOUT(
        DB_TOGG, EE_CLR , _______, _______, _______,     _______, _______, _______, _______, _______,
        LUMBERJ, DRGSCRL, MS_BTN1, MS_BTN2, _______,     _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______,
                          _______, _______, _______,     _______, _______
    ),
    /*╭────────┬────────┬────────┬────────┬────────╮   ╭────────┬────────┬────────┬────────┬────────╮
      │        │        │        │        │        │   │        │        │        │        │        │
      ├────────┼────────┼────────┼────────┼────────┤   ├────────┼────────┼────────┼────────┼────────┤
      │        │ DRGSCRL│ M BTN1 │ M BTN2 │        │   │        │        │        │        │        │
      ├────────┼────────┼────────┼────────┼────────┤   ├────────┼────────┼────────┼────────┼────────┤
      │        │        │        │        │        │   │        │        │        │        │        │
      ╰────────┴────────┼────────┼────────┼────────┤   ├────────┼────────┼────────┴────────┴────────╯
                        │        │        │        │   │        │        │
                        ╰────────┴────────┴────────╯   ╰────────┴────────╯*/

};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT(
        'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L',  '*', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R',
                  'L', '*', 'L',  'R', '*'
    );

// clang-format on

// Helper for implementing tap vs. long-press keys. Given a tap-hold
// key event, replaces the hold function with `long_press_keycode`.
static bool process_tap_or_long_press_key(keyrecord_t* record,
                                          uint16_t long_press_keycode) {
  if (record->tap.count == 0) {  // Key is being held.
    if (record->event.pressed) {
      tap_code16(long_press_keycode);
    }
    return false;  // Skip default handling.
  }
  return true;  // Continue default handling.
}

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  if (record->event.pressed) {
    switch (keycode) {
      case B_BACK:
        SEND_STRING(SS_LGUI(SS_TAP(X_LEFT)));
        return false;
      case B_FWD:
        SEND_STRING(SS_LGUI(SS_TAP(X_RIGHT)));
        return false;
      case SLSH_COPY:  // Comma on tap, Ctrl+C on long press.
        return process_tap_or_long_press_key(record, G(KC_C));
      case DOT_PASTE:  // Dot on tap, Ctrl+V on long press.
        return process_tap_or_long_press_key(record, G(KC_V));
      case E_BOB:
        SEND_STRING(SS_TAP(X_ESC) "<");
        return false;
      case E_CLOSE:
        SEND_STRING(SS_LCTL("x") "#");
        return false;
      case E_EOB:
        SEND_STRING(SS_TAP(X_ESC) ">");
        return false;
      case E_IDT:
        SEND_STRING(SS_LCTL("x") SS_TAP(X_TAB));
        return false;
      case E_RS:
        SEND_STRING(SS_RALT("%"));
        return false;
      case E_SAVE:
        SEND_STRING(SS_LCTL("xs"));
        return false;
      case E_UNDO:
        SEND_STRING(SS_LCTL("x") "u");
        return false;
      case KC_SEC1:
        SEND_STRING(SEC1);
        return false;
      case KC_SEC2:
        SEND_STRING(SEC2);
        return false;
      case KC_SEC3:
        SEND_STRING(SEC3);
        return false;
      case KC_SEC4:
        SEND_STRING(SEC4);
        return false;
      case KC_SEC5:
        SEND_STRING(SEC5);
        return false;
      case M_BLOCK:
        SEND_STRING("```");
        return false;
      case S_NEXT:
        SEND_STRING(SS_LGUI(SS_LSFT(SS_TAP(X_RBRC))));
        return false;
      case S_PREV:
        SEND_STRING(SS_LGUI(SS_LSFT(SS_TAP(X_LBRC))));
        return false;
      case WZ_DOWN:
        SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_DOWN))));
        return false;
      case WZ_LEFT:
        SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_LEFT))));
        return false;
      case WZ_RGHT:
        SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_RIGHT))));
        return false;
      case WZ_SLCT:
        SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_X))));
        return false;
      case WZ_SPLH:
        SEND_STRING(SS_LCTL(SS_LSFT(SS_LALT(SS_TAP(X_QUOTE)))));
        return false;
      case WZ_SPLV:
        SEND_STRING(SS_LCTL(SS_LSFT(SS_LALT(SS_TAP(X_5)))));
        return false;
      case WZ_UP:
        SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_UP))));
        return false;
    }
  }

  switch (keycode) {
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

#ifdef TAPPING_TERM_PER_KEY
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t* record) {
  switch (keycode) {
    //case A_MT:
    //case HRM_COMM:
    // case A_MT:
    // case SCLN_MT:
    //   return TAPPING_TERM + 25;
    // case LT_2:
    // case LT_3:
    //   return TAPPING_TERM - 100;
    default:
      return TAPPING_TERM;
  }
}
#endif  // TAPPING_TERM_PER_KEY

#ifdef FLOW_TAP_TERM
uint16_t get_flow_tap_term(uint16_t keycode, keyrecord_t* record,
                           uint16_t prev_keycode) {
  if (is_flow_tap_key(keycode) && is_flow_tap_key(prev_keycode)) {
    switch (keycode) {
      // case A_MT:
      // case SCLN_MT:
      //   return FLOW_TAP_TERM + 70;
      default:
        return FLOW_TAP_TERM;
    }
  }
  return 0;
}
#endif  // FLOW_TAP_TERM

#ifdef CHORDAL_HOLD
bool get_chordal_hold(uint16_t tap_hold_keycode, keyrecord_t* tap_hold_record,
                      uint16_t other_keycode, keyrecord_t* other_record) {
  // Exceptionally allow some one-handed chords for hotkeys, mouse usage and on
  // thumb
  switch (tap_hold_keycode) {
    // case LT_2:
    // case LT_3:
    // // case SCLN_MT:
    //   return true;
    // case L_MT:
    //   switch (other_keycode) {
    //     case KC_H:
    //     case KC_L:
    //       return true;
    //   }
    //   break;
  }

  return get_chordal_hold_default(tap_hold_record, other_record);
}
#endif  // CHORDAL_HOLD
