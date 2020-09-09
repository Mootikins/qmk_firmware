/* Good on you for modifying your layout! if you don't have
 * time to read the QMK docs, a list of keycodes can be found at
 *
 * https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md
 *
 * There's also a template for adding new layers at the bottom of this file!
 */

#include "keycode.h"
#include QMK_KEYBOARD_H

#define BASE 0  // default layer
#define NUMB 1  // numbers/motion
#define EXT 2   // extra stuff

// Blank template at the bottom

enum customKeycodes { URL = 1 };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,-------------------------------------------.                                   ,-------------------------------------------.
 * |  TAB   |   Q  |   W  |   E  |   R  |   T  |                                   |   Y  |   U  |   I  |   O  |   P  |  - _   |
 * |--------+------+------+------+------+------|------.                     .------|------+------+------+------+------+--------|
 * |  CTRL  |   A  |   S  |  D   |   F  |   G  |  (   |                     |   )  |   H  |   J  |   K  |   L  | ;  : |  ' "   |
 * |--------+------+------+------+------+------+------|                     |------+------+------+------+------+------+--------|
 * |  SHIFT |   Z  |   X  |   C  |   V  |   B  |  )   | ,-------. ,-------. |   ]  |   N  |   M  | ,  < | . >  | /  ? |  = +   |
 * `--------------------------------------------------' |  ESC  | |  DEL  | `--------------------------------------------------'
 *                        .------.   ,-------.   ,------|-------| |-------|------.   ,-------.   ,------.
 *                        | LALT |   | SUPER |   |      |       | |       |      |   |  `/~  |   |  \ |  |
 *                        '------'   `-------'   | BSPC | NUMB  | | ENTER | SPCE |   `-------'   `------'
 *                                               |      |       | |  EXT  |      |
 *                                               `--------------' `--------------'
 *
 */
[BASE] = LAYOUT_gergo(
    KC_TAB,  KC_Q, KC_W, KC_E, KC_R,    KC_T,                                                     KC_Y,     KC_U,     KC_I,    KC_O,   KC_P,    KC_MINS,
    KC_LCTL, KC_A, KC_S, KC_D, KC_F,    KC_G,    KC_LPRN,                                KC_LBRC, KC_H,     KC_J,     KC_K,    KC_L,   KC_SCLN, KC_QUOTE,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V,    KC_B,    KC_RPRN, KC_ESC,                KC_DEL, KC_RBRC, KC_N,     KC_M,     KC_COMM, KC_DOT, KC_SLSH, KC_EQL,
                               KC_LALT, KC_LGUI, KC_BSPC, MO(NUMB),      LT(EXT,KC_ENT), KC_SPC,  KC_GRAVE, KC_BSLASH
    ),
/* Keymap 1: Pad/Function layer
 *
 * ,-------------------------------------------.                                   ,-------------------------------------------.
 * |        |  F9  |  F10 |  F11 |  F12 |      |                                   |      |  7   |  8   |  9   |      |        |
 * |--------+------+------+------+------+------|------.                     .------|------+------+------+------+------+--------|
 * |        |  F5  |  F6  |  F7  |  F8  |      |      |                     |   *  |   +  |  4   |  5   |  6   |  ,   |        |
 * |--------+------+------+------+------+------+------|                     |------+------+------+------+------+------+--------|
 * |        |  F1  |  F2  |  F3  |  F4  |      |      | ,-------. ,-------. |   /  |   -  |  1   |  2   |  3   |  .   |        |
 * `--------------------------------------------------' |       | |       | `--------------------------------------------------'
 *                        .------.   ,-------.   ,------|-------| |-------|------.   ,-------.   ,------.
 *                        |      |   |       |   |      |       | |       |      |   |   0   |   |      |
 *                        '------'   `-------'   |      |       | |       |      |   `-------'   `------'
 *                                               |      |       | |       |      |
 *                                               `--------------' `--------------'
 *
 */
[NUMB] = LAYOUT_gergo(
    XXXXXXX, KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX,                                         XXXXXXX, KC_7,    KC_8,    KC_9, XXXXXXX, XXXXXXX,
    _______, KC_F5,   KC_F6,   KC_F7,   KC_F8,   XXXXXXX, XXXXXXX,                       KC_PAST, KC_PPLS, KC_4,    KC_5,    KC_6, KC_COMM, XXXXXXX,
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, KC_PSLS, KC_PMNS, KC_1,    KC_2,    KC_3, KC_DOT,  XXXXXXX,
                                        _______, _______, _______, _______,     _______, _______, KC_0,   XXXXXXX
    ),
/* Keymap 2: Extra Stuff
 *
 * ,-------------------------------------------.                                   ,-------------------------------------------.
 * |        | RMB  | MS U | LMB  | MSWU |      |                                   |      | PREV | NEXT | PLPU |      |        |
 * |--------+------+------+------+------+------|------.                     .------|------+------+------+------+------+--------|
 * |        | MS L | MS D | MS R | MSWD |      |      |                     |      | LEFT | DOWN |  UP  | RGHT |      |        |
 * |--------+------+------+------+------+------+------|                     |------+------+------+------+------+------+--------|
 * |        | MS 4 | MS 3 | MS 5 |      |      |      | ,-------. ,-------. |      |      | VOLD | VOLU | MUTE |      |        |
 * `--------------------------------------------------' |       | |       | `--------------------------------------------------'
 *                        ,------.   ,------.    ,------|-------| |-------|------.    ,------.   ,------.
 *                        |      |   |      |    |      |       | |       |      |    |      |   |      |
 *                        `------'   `------'    |      |       | |       |      |    `------'   `------'
 *                                               |      |       | |       |      |
 *                                               `--------------' `--------------'
 *
 */
[EXT] = LAYOUT_gergo(
    _______, KC_BTN2, KC_MS_U, KC_BTN1, KC_WH_U, XXXXXXX,                                            XXXXXXX, KC_MPRV, KC_MNXT, KC_MPLY, XXXXXXX, XXXXXXX,
    _______, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, XXXXXXX, XXXXXXX,                          XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, XXXXXXX,
    _______, KC_BTN4, KC_BTN3, KC_BTN5, _______, XXXXXXX, XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLD, KC_VOLU, KC_MUTE, XXXXXXX, XXXXXXX,
                                        _______, _______, _______, _______,        _______, _______, _______, _______
    )
};

/* Keymap template
 *
 * ,-------------------------------------------.                                   ,-------------------------------------------.
 * |        |      |      |      |      |      |                                   |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|------.                     .------|------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |                     |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+------+------|                     |------+------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      | ,-------. ,-------. |      |      |      |      |      |      |        |
 * `--------------------------------------------------' |       | |       | `--------------------------------------------------'
 *                        ,------.   ,------.    ,------|-------| |-------|------.    ,------.   ,------.
 *                        |      |   |      |    |      |       | |       |      |    |      |   |      |
 *                        `------'   `------'    |      |       | |       |      |    `------'   `------'
 *                                               |      |       | |       |      |
 *                                               `--------------' `--------------'
 *
[EXT] = LAYOUT_gergo(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    )
 */
