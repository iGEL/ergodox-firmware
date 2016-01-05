/* ----------------------------------------------------------------------------
 * Copyright (c) 2014 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (see "doc/licenses/MIT.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */

/**                                                                 description
 * A Layout for [Workman](http://www.workmanlayout.com/blog/).
 *
 * Implements the "layout" section of '.../firmware/keyboard.h'
 *
 * This layout assumes that the computer the keyboard is connected to uses the
 * Apple US International layout, it doesn't require any additional
 * configuration. With the exception of the German umlauts and sz aswell as the
 * Euro sign, everything should also work with the standard US QWERTY layout.
 *
 */


#include "./fragments/includes.part.h"
#include "./fragments/macros.part.h"
#include "./fragments/types.part.h"
#include "./fragments/variables.part.h"


// ----------------------------------------------------------------------------
// keys
// ----------------------------------------------------------------------------

#include "./fragments/keys.part.h"


// ----------------------------------------------------------------------------
// LED control
// ----------------------------------------------------------------------------

#include "./fragments/led-control.part.h"


// ----------------------------------------------------------------------------
// matrix control
// ----------------------------------------------------------------------------

#include "./fragments/matrix-control.part.h"

KEYS__ALT_GR_SHIFT_SEQ( AE, KEYBOARD__u_U, KEYBOARD__a_A);
KEYS__ALT_GR_SHIFT_SEQ( OE, KEYBOARD__u_U, KEYBOARD__o_O);
KEYS__ALT_GR_SHIFT_SEQ( UE, KEYBOARD__u_U, KEYBOARD__u_U);
KEYS__ALT_GR_SEQ( ae, KEYBOARD__u_U, KEYBOARD__a_A);
KEYS__ALT_GR_SEQ( oe, KEYBOARD__u_U, KEYBOARD__o_O);
KEYS__ALT_GR_SEQ( ue, KEYBOARD__u_U, KEYBOARD__u_U);

KEYS__ALT_GR( sz, KEYBOARD__s_S);
KEYS__ALT_GR(eur, KEYBOARD__2_At);

// ----------------------------------------------------------------------------
// layout
// ----------------------------------------------------------------------------

static layout_t layout PROGMEM = {
// ............................................................................

    MATRIX_LAYER(  // layer 0 : default, workman
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
     esc,        1,        2,        3,        4,        5,   grave,
     tab,        q,        d,        r,        w,        b,   brktL,
   ctrlL,        a,        s,        h,        t,        g,
  shiftL,        z,        x,        m,        c,        v,   equal,
    guiL,       ae,       oe,       ue,       sz,
                                                                 del,      ins,
                                                       nop,      nop,     altL,
                                                        bs,     guiL, lpupo2l2,
// right hand ..... ......... ......... ......... ......... ......... .........
            lpu1l1,        6,        7,        8,        9,        0,   lpu3l3,
             brktR,        j,        f,        u,        p,    quote,  bkslash,
                           y,        n,        e,        o,        i,    ctrlR,
              dash,        k,        l,    comma,   period,    slash,   shiftR,
                                arrowL,   arrowD,   arrowU,   arrowR,     guiR,
    home,      end,
    altR,      nop,      nop,
lpupo2l2,    enter,    space  ),

// ............................................................................

    MATRIX_LAYER(  // layer 1 : qwerty
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
     esc,        1,        2,        3,        4,        5,   grave,
     tab,        q,        w,        e,        r,        t,   brktL,
   ctrlL,        a,        s,        d,        f,        g,
  shiftL,        z,        x,        c,        v,        b,   equal,
    guiL,    pageU,    pageD,   arrowL,   arrowR,
                                                                 del,      ins,
                                                       nop,      nop,     altL,
                                                        bs,     guiL, lpupo2l2,
// right hand ..... ......... ......... ......... ......... ......... .........
            lpo1l1,        6,        7,        8,        9,        0,  bkslash,
             brktR,        y,        u,        i,        o,        p,    quote,
                           h,        j,        k,        l,  semicol,    ctrlR,
              dash,        n,        m,    comma,   period,    slash,   shiftR,
                                arrowL,   arrowD,   arrowU,   arrowR,     guiR,
    home,      end,
    altR,      nop,      nop,
lpupo2l2,    enter,    space  ),

// ............................................................................

    MATRIX_LAYER(  // layer 2 : symbols and function keys
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
      AE,       F1,       F2,       F3,       F4,       F5,      F11,
      OE,  percent,    tilde,    grave,      amp,   transp,   transp,
      UE,     plus,     dash,    equal,  undersc, asterisk,
  transp,   exclam,   dollar,    pound,       at,    caret,   transp,
       1,        2,        3,        4,        5,
                                                               pageU,    pageD,
                                                    transp,   transp,      esc,
                                                    transp,    colon,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
               F12,       F6,       F7,       F8,       F9,      F10,   transp,
            transp,   transp,   parenL,   parenR,  bkslash,     pipe,  volumeU,
    /* home row for VIM */ h,        j,        k,        l,  semicol,  volumeD,
            transp,      eur,    brktL,    brktR,   braceL,   braceR,     mute,
                                     6,        7,        8,        9,        0,
  transp,   transp,
  transp,   transp,   transp,
  transp,   transp,   transp  ),

// ............................................................................

    MATRIX_LAYER(  // layer 3: Keyboard
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
   btldr,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,
                                                                 nop,      nop,
                                                       nop,      nop,      nop,
                                                       nop,      nop,      nop,
// right hand ..... ......... ......... ......... ......... ......... .........
               nop,      nop,      nop,      nop,      nop,      nop,   lpo3l3,
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
                         nop,      nop,      nop,      nop,      nop,      nop,
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
                                   nop,      nop,      nop,      nop,      nop,
     nop,      nop,
     nop,      nop,      nop,
     nop,      nop,      nop  ),

// ............................................................................
};
