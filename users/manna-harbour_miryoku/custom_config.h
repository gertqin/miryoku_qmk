// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

// #define TAPPING_TERM 200
// #define TAPPING_TERM_PER_KEY
// uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//         case LGUI_T(KC_A):
//         case LGUI_T(KC_O):
//             return TAPPING_TERM + 20;
//         default:
//             return TAPPING_TERM;
//     }
// }

#define PERMISSIVE_HOLD

// #define PERMISSIVE_HOLD_PER_KEY
// bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//         case LALT_T(KC_R):
//         case LALT_T(KC_I):
//         case LSFT_T(KC_T):
//         case LSFT_T(KC_N):
//             return true;
//         default:
//             // Do not select the hold action when another key is tapped.
//             return false;
//     }
// }

#define BILATERAL_COMBINATIONS
