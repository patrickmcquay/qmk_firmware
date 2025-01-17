// Copyright 2021 Patrick McQuay (@Patrick McQuay)
// SPDX-License-Identifier: GPL-2.0-or-later
// this is cribbed basically entirely from Victor Lucachis void ergo keyboard.

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    L00, L01, L02, L03, L04, L05,           R00, R01, R02, R03, R04, R05, \
    L10, L11, L12, L13, L14, L15,           R10, R11, R12, R13, R14, R15, \
    L20, L21, L22, L23, L24, L25,           R20, R21, R22, R23, R24, R25, \
    L30, L31, L32, L33, L34, L35,           R30, R31, R32, R33, R34, R35, \
    L40, L41, L42, L43, L44, L45, L46, R40, R41, R42, R43, R44, R45, R46 \
) \
{ \
    { L00, L01, L02, L03, L04, L05, KC_NO }, \
    { L10, L11, L12, L13, L14, L15, KC_NO }, \
    { L20, L21, L22, L23, L24, L25, KC_NO }, \
    { L30, L31, L32, L33, L34, L35, KC_NO }, \
    { L40, L41, L42, L43, L44, L45, L46 }, \
    { KC_NO, R00, R01, R02, R03, R04, R05 }, \
    { KC_NO, R10, R11, R12, R13, R14, R15 }, \
    { KC_NO, R20, R21, R22, R23, R24, R25 }, \
    { KC_NO, R30, R31, R32, R33, R34, R35 }, \
    {   R40, R41, R42, R43, R44, R45, R46 } \
}
