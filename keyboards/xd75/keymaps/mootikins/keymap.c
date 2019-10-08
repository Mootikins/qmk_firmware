/* Copyright 2017 Wunder
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "xd75.h"

// Layer shorthand
#define QWE 0
#define FNC 1
#define NUM 2
#define _______ KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWE
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | ESC    | 1      | 2      | 3      | 4      | 5      | VOL-   | MUTE   | VOL+   | 6      | 7      | 8      | 9      | 0      | -      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | TAB    | Q      | W      | E      | R      | T      | PREV   | PLAY   | NEXT   | Y      | U      | I      | O      | P      | =      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * | LCTRL  | A      | S      | D      | F      | G      | HOME   | DEL    | PG UP  | H      | J      | K      | L      | ;      | '      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * | LSHIFT | Z      | X      | C      | V      | B      | END    | UP     | PG DN  | N      | M      | ,      | .      | /      | \      |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * | FUNC   | LGUI   | LALT   | LEFT   | RIGHT  | BACKSP | NUMPAD | LGUI   | ENTER  | SPACE  | DOWN   | UP     | [      | ]      | `      |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [QWE] = { /* QWERTY */
  { KC_ESC,   KC_1,    KC_2,    KC_3,     KC_4,    KC_5,    KC_VOLD, KC_MUTE, KC_VOLU, KC_6,    KC_7,    KC_8,     KC_9,    KC_0,    KC_MINS  },
  { KC_TAB,   KC_Q,    KC_W,    KC_E,     KC_R,    KC_T,    KC_MPRV, KC_MPLY, KC_MNXT, KC_Y,    KC_U,    KC_I,     KC_O,    KC_P,    KC_EQUAL },
  { KC_LCTL,  KC_A,    KC_S,    KC_D,     KC_F,    KC_G,    KC_HOME, KC_DEL,  KC_PGUP, KC_H,    KC_J,    KC_K,     KC_L,    KC_SCLN, KC_QUOTE },
  { KC_LSFT,  KC_Z,    KC_X,    KC_C,     KC_V,    KC_B,    KC_END,  KC_UP,   KC_PGDN, KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH, KC_BSLASH},
  { TT(FNC),  KC_LGUI, KC_LALT, KC_LEFT,  KC_RGHT, KC_BSPC, TT(NUM), KC_LGUI, KC_ENT,  KC_SPC,  KC_DOWN, KC_UP,    KC_LBRC, KC_RBRC, KC_GRAVE },
 },
/* FUNCTION
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        | F1     | F2     | F3     | F4     | F5     |        |        |        | F6     | F7     | F8     | F9     | F10    | F11    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        | F12    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        | LEFT   | DOWN   | UP     | RIGHT  |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | QWERTY |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */
 
 [FNC] = { /* FUNCTION */
   { _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______, _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11 },
   { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
   { _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______},
   { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
   { TT(FNC), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______},
},
/* NUM & MOUSE
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        |        |        |        |        |        | HUE+   | SAT+   | VALUE+ |        | TAB    | /      | *      | -      |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | RGT MS | MS U   | LFT MS | WHL U  |        | HUE-   | SAT-   | VALUE- |        | 7      | 8      | 9      | +      |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | ACCL 2 | MS L   | MS D   | MS R   | WHL D  |        | ANIM-  | RGBTOG | ANIM+  |        | 4      | 5      | 6      | BACKSP |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | SHIFT  | MS B4  | MID MS | MS B5  |        |        |        | RESET  |        |        | 1      | 2      | 3      | =      |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | ACCL 0 |        |        |        |        | BACKSP | QWERTY |        |        | 0      | 0      | ENTER  | .      | =      |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */                                                                                 

 [NUM] = { /* NUM */                                                                
   { _______, _______, _______, _______, _______, _______, RGB_HUI, RGB_SAI, RGB_VAI, _______, KC_TAB,  KC_PSLS, KC_PAST, KC_PMNS, _______},
   { _______, KC_BTN2, KC_MS_U, KC_BTN1, KC_WH_U, _______, RGB_HUD, RGB_SAD, RGB_VAD, _______, KC_7,    KC_8,    KC_9,    KC_PPLS, _______},
   { KC_ACL2, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, _______, RGB_RMOD,RGB_TOG, RGB_MOD, _______, KC_4,    KC_5,    KC_6,    KC_BSPC, _______},
   { KC_LSFT, KC_BTN4, KC_BTN3, KC_BTN5, _______, _______, _______, RESET,   _______, _______, KC_1,    KC_2,    KC_3,    KC_PEQL, _______},
   { KC_ACL0, _______, _______, _______, _______, KC_BSPC, TT(NUM), _______, _______, KC_0,    KC_0,    KC_PENT, KC_DOT,  KC_PEQL, _______},
 }
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};
