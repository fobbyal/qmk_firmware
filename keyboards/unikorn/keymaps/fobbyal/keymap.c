/* Copyright 2019 MechMerlin
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
 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

const uint16_t FBA_CTL = LCTL_T(KC_ESC);
const uint16_t FBA_SPC = LT(2,KC_SPC);

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_60_tsangan_hhkb(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
    FBA_CTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(1),
    KC_LCTL, KC_LALT, KC_LGUI,                            FBA_SPC,                            KC_RALT, KC_RGUI, MO(3)
  ),

  [1] = LAYOUT_60_tsangan_hhkb(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    RESET,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,                                     KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [2] = LAYOUT_60_tsangan_hhkb(
    KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL, KC_DEL,
    KC_TRNS,   KC_HOME, KC_TRNS, KC_END,  KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_PGDN, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_SPC,  KC_SPC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,                                     KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [3] = LAYOUT_60_tsangan_hhkb(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    RESET,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,                                     KC_TRNS, KC_TRNS, KC_TRNS
  )

};



/* #define LAYOUT_all( \ */
/*   k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, k0D, k0E, \ */
/*   k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, k1D,      \ */
/*   k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, k2C, k2D,      \ */
/*   k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B, k3C, k3D,      \ */
/*   k40, k41, k42, k44, k45, k47, k48, k49, k4A, k4B, k4D                           \ */
/* ){ \ */
/*   { k00, k01, k02, k03,   k04, k05, k06,   k07, k08, k09, k0A,   k0B, k0C,   k0D, k0E   }, \ */
/*   { k10, k11, k12, k13,   k14, k15, k16,   k17, k18, k19, k1A,   k1B, k1C,   k1D, KC_NO }, \ */
/*   { k20, k21, k22, k23,   k24, k25, k26,   k27, k28, k29, k2A,   k2B, k2C,   k2D, KC_NO }, \ */
/*   { k30, k31, k32, k33,   k34, k35, k36,   k37, k38, k39, k3A,   k3B, k3C,   k3D, KC_NO }, \ */
/*   { k40, k41, k42, KC_NO, k44, k45, KC_NO, k47, k48, k49, k4A,   k4B, KC_NO, k4D, KC_NO }, \ */
/* } */

/* const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { */
/*   [0] = LAYOUT_all( */
/* //  k00,     k01,     k02,     k03,     k04,     k05,     k06,     k07,    k08,     k09,     k0A,     k0B,      k0C,     k0D,     k0E, */
/*     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC, KC_BSPC, */
/* //  k10,     k11,     k12,     k13,     k14,     k15,     k16,     k17,    k18,     k19,     k1A,     k1B,      k1C,     k1D, */      
/*     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_BSLS, */
/* //  k20,     k21,     k22,     k23,     k24,     k25,     k26,     k27,    k28,     k29,     k2A,     k2B,      k2C,     k2D, */      
/*     FBA_CTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,  KC_TRNS, KC_ENT, */
/* //  k30,     k31,     k32,     k33,     k34,     k35,     k36,     k37,    k38,     k39,     k3A,     k3B,      k3C,     k3D, */      
/*     KC_LSFT, KC_TRNS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, MO(1), */
/* //  k40,     k41,     k42,              k44,     k45,              k47,    k48,     k49,     k4A      k4B,               k4D */                           
/*     KC_CAPS, KC_LALT, KC_LGUI,          KC_NO,   FBA_SPC,          KC_NO,  KC_RALT, KC_LGUI, MO(3),    KC_TRNS,           KC_TRNS */
/*   ), */
/*   [1] = LAYOUT_all( */
/* //  k00,     k01,     k02,     k03,     k04,     k05,     k06,     k07,    k08,     k09,     k0A,     k0B,      k0C,     k0D,     k0E, */
/*     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, */
/* //  k10,     k11,     k12,     k13,     k14,     k15,     k16,     k17,    k18,     k19,     k1A,     k1B,      k1C,     k1D, */      
/*     RESET  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, */ 
/* //  k20,     k21,     k22,     k23,     k24,     k25,     k26,     k27,    k28,     k29,     k2A,     k2B,      k2C,     k2D, */      
/*     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, */ 
/* //  k30,     k31,     k32,     k33,     k34,     k35,     k36,     k37,    k38,     k39,     k3A,     k3B,      k3C,     k3D, */      
/*     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, */ 
/* //  k40,     k41,     k42,              k44,     k45,              k47,    k48,     k49,     k4A,     k4B,               k4D */                           
/*     KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS */ 
/*   ), */
/*   [2] = LAYOUT_all( */
/* //  k00,     k01,     k02,     k03,     k04,     k05,     k06,     k07,    k08,     k09,     k0A,     k0B,      k0C,     k0D,     k0E, */
/*     KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,  KC_F8,   KC_F9,   KC_F10,  KC_F11,   KC_F12,  KC_DEL,  KC_DEL, */
/* //  k10,     k11,     k12,     k13,     k14,     k15,     k16,     k17,    k18,     k19,     k1A,     k1B,      k1C,     k1D, */      
/*     KC_TRNS, KC_HOME, KC_TRNS, KC_END,  KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, */ 
/* //  k20,     k21,     k22,     k23,     k24,     k25,     k26,     k27,    k28,     k29,     k2A,     k2B,      k2C,     k2D, */      
/*     KC_TRNS, KC_TRNS, KC_TRNS, KC_PGDN, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN,KC_UP,   KC_RIGHT,KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, */ 
/* //  k30,     k31,     k32,     k33,     k34,     k35,     k36,     k37,    k38,     k39,     k3A,     k3B,      k3C,     k3D, */      
/*     KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_SPC,  KC_SPC, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, */ 
/* //  k40,     k41,     k42,              k44,     k45,              k47,    k48,     k49,     k4A,     k4B,               k4D */                           
/*     KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS */ 
/*   ), */
/*   [3] = LAYOUT_all( */
/* //  k00,     k01,     k02,     k03,     k04,     k05,     k06,     k07,    k08,     k09,     k0A,     k0B,      k0C,     k0D,     k0E, */
/*     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, */
/* //  k10,     k11,     k12,     k13,     k14,     k15,     k16,     k17,    k18,     k19,     k1A,     k1B,      k1C,     k1D, */      
/*     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, */ 
/* //  k20,     k21,     k22,     k23,     k24,     k25,     k26,     k27,    k28,     k29,     k2A,     k2B,      k2C,     k2D, */      
/*     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, */ 
/* //  k30,     k31,     k32,     k33,     k34,     k35,     k36,     k37,    k38,     k39,     k3A,     k3B,      k3C,     k3D, */      
/*     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, */ 
/* //  k40,     k41,     k42,              k44,     k45,              k47,    k48,     k49,     k4A,     k4B,               k4D */                           
/*     KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS */ 
/*   ) */
/* }; */


/* const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { */

/*   [0] = LAYOUT_60_ansi( */
/*     KC_GRV,  KC_1,    KC_2,    KC_3,  KC_4,  KC_5,  KC_6,   KC_7,  KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_BSPC, */
/*     KC_TAB,  KC_Q,    KC_W,    KC_E,  KC_R,  KC_T,  KC_Y,   KC_U,  KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, */
/*     FBA_CTL, KC_A,    KC_S,    KC_D,  KC_F,  KC_G,  KC_H,   KC_J,  KC_K,    KC_L,   KC_SCLN, KC_QUOT,          KC_ENT, */
/*     KC_LSFT, KC_Z,    KC_X,    KC_C,  KC_V,  KC_B,  KC_N,   KC_M,  KC_COMM, KC_DOT, KC_SLSH,          KC_RSFT, */
/*     KC_CAPS, KC_LALT, KC_LGUI,                      FBA_SPC,                         KC_RALT, MO(1), MO(1),   KC_RCTL */
/*   ), */

/*   [1] = LAYOUT_60_ansi( */
/*     KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL, */
/*     RESET,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, */
/*     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, */
/*     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, */
/*     KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS */
/*   ), */
/*   [2] = LAYOUT_60_ansi( */
/*     KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL, */
/*     RESET,   KC_HOME, KC_TRNS, KC_END,  KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, */
/*     KC_TRNS, KC_TRNS, KC_TRNS, KC_PGDN, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,KC_TRNS, KC_TRNS, KC_TRNS, */
/*     KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_SPC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, */
/*     KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS */
/*   ) */
/* }; */
