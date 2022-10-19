#include QMK_KEYBOARD_H

// Stuff for combo

#include "arbitrary_keycode/include.h"
#define CUSTOM_SAFE_RANGE SAFE_RANGE
#include "combo/include.h"



// Combo

// --english combo

#define CB_A CMB_001
#define CB_B CMB_002
#define CB_C CMB_003
#define CB_D CMB_004
#define CB_E CMB_005
#define CB_F CMB_006
#define CB_G CMB_007
#define CB_H CMB_008
#define CB_I CMB_009
#define CB_J CMB_010
#define CB_K CMB_011
#define CB_L CMB_012
#define CB_M CMB_013
#define CB_N CMB_014
#define CB_O CMB_015
#define CB_P CMB_016
#define CB_Q CMB_017
#define CB_R CMB_018
#define CB_S CMB_019
#define CB_T CMB_020
#define CB_U CMB_021
#define CB_V CMB_022
#define CB_W CMB_023
#define CB_X CMB_024
#define CB_Y CMB_025
#define CB_Z CMB_026


// --russian combo

#define CR_A    CMB_027    // а
#define CR_B    CMB_028    // б
#define CR_V    CMB_029    // в
#define CR_G    CMB_030    // г
#define CR_D    CMB_031    // д
#define C_JE    CMB_032    // е
#define C_JO    CMB_033    // ё
#define C_ZH    CMB_034    // ж
#define CR_Z    CMB_035    // з
#define CR_I    CMB_036    // и
#define CR_J    CMB_037    // й
#define CR_K    CMB_038    // к
#define CR_L    CMB_039    // л
#define CR_M    CMB_040    // м
#define CR_N    CMB_041    // н
#define CR_O    CMB_042    // о
#define CR_P    CMB_043    // п
#define CR_R    CMB_044    // р
#define CR_S    CMB_045    // с
#define CR_T    CMB_046    // т
#define CR_U    CMB_047    // у
#define CR_F    CMB_048    // ф
#define CR_H    CMB_049    // х
#define C_TS    CMB_050    // ц
#define C_CH    CMB_051    // ч
#define C_SH    CMB_052    // ш
#define C_SC    CMB_053    // щ
#define C_HD    CMB_054    // ъ
#define CR_Y    CMB_055    // ы
#define C_ST    CMB_056    // ь
#define CR_E    CMB_057    // э
#define C_JU    CMB_058    // ю
#define C_JA    CMB_059    // я

// --char combo

#define C_01    CMB_060    // u
#define C_02    CMB_061    // u
#define C_03    CMB_062    // u
#define C_04    CMB_063    // u
#define C_05    CMB_064    // u
#define C_06    CMB_065    // u
#define C_07    CMB_066    // u
#define C_08    CMB_067    // u
#define C_09    CMB_068    // u
#define C_10    CMB_090    // u
#define C_11    CMB_069    // u
#define C_12    CMB_070    // u
#define C_13    CMB_071    // u
#define C_14    CMB_072    // u
#define C_15    CMB_073    // u
#define C_16    CMB_074    // u
#define C_17    CMB_075    // u
#define C_18    CMB_076    // u
#define C_19    CMB_077    // u
#define C_20    CMB_078    // u
#define C_21    CMB_079    // u
#define C_22    CMB_080    // u
#define C_23    CMB_081    // u
#define C_24    CMB_082    // u
#define C_25    CMB_083    // u
#define C_26    CMB_084    // u
#define C_27    CMB_085    // u
#define C_28    CMB_086    // u
#define C_29    CMB_087    // u
#define C_30    CMB_088    // u
#define C_31    CMB_089    // u
#define C_32    CMB_091    // u
#define C_33    CMB_092    // u

// combo for numb layer
#define C_0L    CMB_093    // 
#define C_1L    CMB_094    // 
#define C_4L    CMB_093    // 
#define C_5L    CMB_094    // 
// HotKeys


#define HC_W C(KC_W)
#define HC_Z C(KC_Z)
#define HC_Y C(KC_Y)
#define HC_X C(KC_X)
#define HC_A C(KC_A)

//for terminal hotkeys
#define CL_A C(KC_A)
#define CL_E C(KC_E)
#define AL_F A(KC_F)
#define AL_B A(KC_B)

// for telegram
#define CLup C(KC_UP)
#define CLdn C(KC_DOWN)

#define CS_T LCTL(S(KC_TAB)) //переключение между вкладками редакторовe
#define CT_T LCTL(KC_TAB) // передвижение по вкладскам браузера

#define CS_t LCTL(S(KC_T)) // восстановление окна в браузере 

#define CT_C LCTL(KC_C)
#define CT_V LCTL(KC_V)
 

#define CL_0 LCTL(KC_0)
#define CL_1 LCTL(KC_1)
#define CL_2 LCTL(KC_2)
#define CL_3 LCTL(KC_3)
#define CL_4 LCTL(KC_4)
#define CL_5 LCTL(KC_5)
#define CL_6 LCTL(KC_6)
#define CL_7 LCTL(KC_7)
#define CL_8 LCTL(KC_8)
#define CL_9 LCTL(KC_9)

#define WN_D LGUI(KC_D) //свернуть все окна / восстановить все окна
#define WN_0 LGUI(KC_0)
#define WN_1 LGUI(KC_1)
#define WN_2 LGUI(KC_2)
#define WN_3 LGUI(KC_3)
#define WN_4 LGUI(KC_4)
#define WN_5 LGUI(KC_5)
#define WN_6 LGUI(KC_6)
#define WN_7 LGUI(KC_7)
#define WN_8 LGUI(KC_8)
#define WN_9 LGUI(KC_9)

#define C_UP LCTL(KC_UP)
#define C_DN LCTL(KC_DOWN)
#define H_RT C(S(KC_T))
#define C_BS C(KC_BACKSPACE)

#define A_RT A(KC_RIGHT)
#define A_LT A(KC_LEFT)



// Basic define
// chars

#define EXCL S(KC_1) 
#define APOS LSFT(KC_2) // '
#define NUMB S(KC_3) // №
#define SEMI S(KC_4) // ;
#define QOTE LSFT(KC_5) // "
#define COLN S(KC_6) // :
#define QSTN S(KC_7) // ?
#define ASTK S(KC_8) // *
#define LCOM S(KC_9) // (
#define RCOM S(KC_0) // )

#define PRGR RALT(KC_GRAVE) // §
#define RUBL RALT(KC_1) // ₽ 
#define ATTT RALT(KC_2) // @
#define HASH RALT(KC_3) // #
#define DOLR RALT(KC_4) // $
#define PRCT RALT(KC_5) // %
#define CRET RALT(KC_6) // ^
#define AMPR RALT(KC_7) // &
#define TILD RALT(KC_8) // ~
#define RLQT RALT(KC_9) // «
#define RRQT RALT(KC_0) // »
#define LCBR RALT(KC_LEFT_BRACKET) // {
#define RCBR RALT(KC_RIGHT_BRACKET) // }
#define PIPE RALT(KC_BACKSLASH) // |
#define LSBR RALT(KC_SEMICOLON) // [
#define RSBR RALT(KC_QUOTE) // ]
#define LESS RALT(KC_COMMA) // <
#define GRET RALT(KC_DOT) // >
#define GRAV RALT(KC_SLASH) // `


#define SLSH KC_BACKSLASH // /
#define DOTT KC_SLASH // .
#define MINS KC_MINUS // -
#define UNDR KC_UNDERSCORE // _
#define PLUS KC_PLUS // + 
#define EQUL KC_EQUAL // =

#define BSLH S(KC_BACKSLASH) // 
#define COMA S(KC_SLASH) // ,



#define XXXX KC_NO
#define RSET RESET

#define K_F1 KC_F1
#define K_F2 KC_F2
#define K_F3 KC_F3
#define K_F4 KC_F4
#define K_F5 KC_F5
#define K_F6 KC_F6
#define K_F7 KC_F7
#define K_F8 KC_F8
#define K_F9 KC_F9
#define KF10 KC_F10
#define KF11 KC_F11	
#define KF12 KC_F12




#define K_SP KC_SPC
#define K_BC KC_BSPC
#define K_TB KC_TAB
#define K_EN KC_ENTER
#define K_LA KC_LEFT_ALT
#define K_LS KC_LEFT_SHIFT
#define K_ES KC_ESCAPE
#define K_LC KC_LEFT_CTRL
#define K_SP KC_SPC
#define K_BC KC_BSPC
#define K_TB KC_TAB
#define K_EN KC_ENTER
#define K_LA KC_LEFT_ALT
#define K_LS KC_LEFT_SHIFT


#define K_MS KC_MINS
#define K_EQ  KC_EQL
#define K_PL  KC_PPLS
#define K_SL  KC_SLSH
#define K_PT  KC_PAST


#define  K_HS  KC_HASH
#define  K_AT  KC_AT
#define  K_PI  KC_PIPE
#define  K_TD  KC_TILDE
#define  K_AM  KC_AMPERSAND
#define  K_CI  KC_CIRCUMFLEX
#define  K_GV  KC_GRAVE
#define  K_BH  KC_BACKSLASH	
 
#define K_LT  KC_LEFT
#define K_RT  KC_RGHT
#define K_DN  KC_DOWN
#define K_UP  KC_UP


// Russian alphabet define 

#define RU_A    KC_F    // а
#define RU_B    KC_COMM // б
#define RU_V    KC_D    // в
#define RU_G    KC_U    // г
#define RU_D    KC_L    // д
#define R_JE    KC_T    // е
#define R_JO    KC_GRV  // ё
#define R_ZH    KC_SCLN // ж
#define RU_Z    KC_P    // з
#define RU_I    KC_B    // и
#define RU_J    KC_Q    // й
#define RU_K    KC_R    // к
#define RU_L    KC_K    // л
#define RU_M    KC_V    // м
#define RU_N    KC_Y    // н
#define RU_O    KC_J    // о
#define RU_P    KC_G    // п
#define RU_R    KC_H    // р
#define RU_S    KC_C    // с
#define RU_T    KC_N    // т
#define RU_U    KC_E    // у
#define RU_F    KC_A    // ф
#define RU_H    KC_LBRC // х
#define R_TS    KC_W    // ц
#define R_CH    KC_X    // ч
#define R_SH    KC_I    // ш
#define R_SC    KC_O    // щ
#define R_HD    KC_RBRC // ъ
#define RU_Y    KC_S    // ы
#define R_ST    KC_M    // ь
#define RU_E    KC_QUOT // э
#define R_JU   KC_DOT  // ю
#define R_JA   KC_Z    // я



// Hotkey ahk

#define _A_0  A(C(G(S(KC_0))))
#define _A_1  A(C(G(S(KC_1))))
#define _A_2  A(C(G(S(KC_2))))	
#define _A_3  A(C(G(S(KC_3))))	
#define _A_4  A(C(G(S(KC_4))))	
#define _A_5  A(C(G(S(KC_5))))
#define _A_6  A(C(G(S(KC_6))))
#define _A_7  A(C(G(S(KC_7))))
#define _A_8  A(C(G(S(KC_8))))
#define _A_9  A(C(G(S(KC_9))))
 
#define _B_A  A(C(S(KC_A))) // rus dot
#define _B_B  A(C(S(KC_B))) // rus comma
#define _B_C  A(C(S(KC_C))) // rus quote
#define _B_D  A(C(S(KC_D))) // rus semicolon
#define _B_E  A(C(S(KC_E))) // rus colon
#define _B_F  A(C(S(KC_F))) // rus question
#define _B_G  A(C(S(KC_G))) 
#define _B_H  A(C(S(KC_H))) 
#define _B_I  A(C(S(KC_I))) 
#define _B_J  A(C(S(KC_J))) 
#define _B_K  A(C(S(KC_K))) 
#define _B_L  A(C(S(KC_L))) 
#define _B_M  A(C(S(KC_M))) 
#define _B_N  A(C(S(KC_N))) 
#define _B_O  A(C(S(KC_O))) 
#define _B_P  A(C(S(KC_P))) 
#define _B_Q  A(C(S(KC_Q))) 
#define _B_R  A(C(S(KC_R))) 
#define _B_S  A(C(S(KC_S))) 
#define _B_T  A(C(S(KC_T))) 
#define _B_U  A(C(S(KC_U))) 
#define _B_V  A(C(S(KC_V))) 
#define _B_W  A(C(S(KC_W))) 
#define _B_X  A(C(S(KC_X))) 
#define _B_Y  A(C(S(KC_Y))) 
#define _B_Z  A(C(S(KC_Z))) 
#define _B_0  A(C(S(KC_0)))
#define _B_1  A(C(S(KC_1)))
#define _B_2  A(C(S(KC_2)))
#define _B_3  A(C(S(KC_3)))
#define _B_4  A(C(S(KC_4)))
#define _B_5  A(C(S(KC_5)))
#define _B_6  A(C(S(KC_6)))
#define _B_7  A(C(S(KC_7)))
#define _B_8  A(C(S(KC_8)))
#define _B_9  A(C(S(KC_9)))

#define _C_A  A(C(G(KC_A))) 
#define _C_B  A(C(G(KC_B))) 
#define _C_C  A(C(G(KC_C))) 
#define _C_D  A(C(G(KC_D))) 
#define _C_E  A(C(G(KC_E))) //9
#define _C_F  A(C(G(KC_F))) //10
#define _C_G  A(C(G(KC_G))) //11
#define _C_H  A(C(G(KC_H))) 
#define _C_I  A(C(G(KC_I))) 
#define _C_J  A(C(G(KC_J))) 



// not used hotkeys

#define _C_K  A(C(G(KC_K))) 
#define _C_L  A(C(G(KC_L))) 
#define _C_M  A(C(G(KC_M))) 
#define _C_N  A(C(G(KC_N))) 
#define _C_O  A(C(G(KC_O))) 
#define _C_P  A(C(G(KC_P))) 
#define _C_Q  A(C(G(KC_Q))) 
#define _C_R  A(C(G(KC_R))) 
#define _C_S  A(C(G(KC_S))) 
#define _C_T  A(C(G(KC_T))) 
#define _C_U  A(C(G(KC_U))) 
#define _C_V  A(C(G(KC_V))) 
#define _C_W  A(C(G(KC_W))) 
#define _C_X  A(C(G(KC_X))) 
#define _C_Y  A(C(G(KC_Y))) 
#define _C_Z  A(C(G(KC_Z))) 
#define _C_0  A(C(G(KC_0)))
#define _C_1  A(C(G(KC_1)))
#define _C_2  A(C(G(KC_2)))
#define _C_3  A(C(G(KC_3)))
#define _C_4  A(C(G(KC_4)))
#define _C_5  A(C(G(KC_5)))
#define _C_6  A(C(G(KC_6)))
#define _C_7  A(C(G(KC_7)))
#define _C_8  A(C(G(KC_8)))
#define _C_9  A(C(G(KC_9)))



#define QK_BOOTLOADER

//define layers 

#define _ENGLISH 0
#define _RUSSIAN  1
#define _RAISE 2
#define _LOWER 3
#define _WIN 4
#define _FS 5
#define _SUB 6
#define _MANAGER 7
#define _WIN2 8
#define _CTRLS 9


// custom keycodes

enum custom_keycodes {
  ENGL = CUSTOM_SAFE_RANGE,
  RUSS,
  B_RS,
  LNGC,
  T_LW,
  E_FS,
  WIN1_C,
  WIN1_JU,
  CTRL,
  EEEE,
  RU_DOT,
  MANAGER,
  CTRLS,
  PAST,
  COPY,

};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


[_ENGLISH] = LAYOUT(
	     CB_C,   CB_Z,  CB_X,  CB_F,   CB_L,   CB_J,   C_24,     C_28,   CB_Q,    CB_K,    CB_M,    CB_P,   CB_G,   CB_V, 
	     C_01,   CB_I,  CB_O,  CB_A,   CB_H,   C_32,   C_25,     C_29,   C_33,    CB_E,    CB_T,    CB_N,   CB_S,   C_14,
	             C_02,  CB_W,  CB_Y,   CB_R,   C_07,   C_26,     C_30,   C_09,    CB_U,    CB_D,    CB_B,   C_13, 
	                    C_03,  C_04,   C_05,   C_06,   C_27,     C_31,   C_08,    C_10,    C_11,    C_12
),
 
[_RUSSIAN] = LAYOUT(
	     C_JU,   CR_H,  C_SH,  C_JA,   CR_U,   C_TS,   C_24,     C_28,   C_CH,    CR_N,    CR_P,    CR_D,    CR_G,   CR_B, 
	     C_15,   CR_I,  CR_A,  C_JE,   CR_O,   CR_J,   C_25,     C_29,   CR_F,    CR_R,    CR_T,    CR_K,    CR_S,   C_23,
	             CR_E,  C_SC,  CR_Y,   C_ST,   C_18,   C_26,     C_30,   C_20,    CR_L,    CR_M,    CR_V,    CR_Z, 
	                    C_16,  C_17,   C_HD,   C_19,   C_27,     C_31,   C_21,    C_JO,    C_ZH,    C_22
),


[_RAISE] =   LAYOUT(
              LESS,  EXCL,  COLN,  SEMI,   UNDR,   TILD,   C_24,     C_28,    CRET,    LCOM,    RCOM,    LSBR,   RSBR,  GRET,
              RLQT,  SLSH,  EQUL,  MINS,   PLUS,   ASTK,   C_25,     C_29,    QSTN,    DOTT,    COMA,    QOTE,   APOS,  RRQT,
	             NUMB,  AMPR,  DOLR,   LCBR,   ATTT,   C_26,     C_30,    HASH,    RCBR,    PRCT,    BSLH,   RUBL, 
	                    KC_0,  KC_0,   PRGR,   KC_0,   C_27,     C_31,    KC_0,    GRAV,    PIPE,    KC_0
),

[_LOWER] =   LAYOUT(
	     C_BS,   A_LT,  A_RT,  HC_W,   _B_J,   _B_G,   C_24,     C_28,   ASTK,    KC_7,    KC_8,    KC_9,   PLUS,   EQUL, 
	     CS_t,   K_LT,  K_RT,  K_DN,   K_UP,   _B_H,   C_25,     C_29,   SLSH,    C_0L,    C_1L,    KC_2,   KC_3,   KC_0,
	             COPY,  PAST,  CS_T,   CT_T,   _B_I,   C_26,     C_30,   UNDR,    C_4L,    C_5L,    KC_6,   MINS, 
	                    H_RT,  HC_X,   HC_A,   KC_0,   C_27,     C_31,   KC_0,    KC_0,    KC_0,    KC_0
),

[_WIN] =   LAYOUT(
	     KC_0,   KC_0,  WN_9,  WN_8,   WN_7,   WN_D,   K_TB,     K_BC,   KC_Q,    KC_K,    KC_M,    KC_P,   KC_G,   KC_V, 
	     KC_0,   KC_0,  WN_3,  WN_2,   WN_1,   WN_0,   K_LS,     K_SP,   KC_V,    KC_E,    KC_T,    KC_N,   RUSS,   KC_V,
	             KC_0,  WN_6,  WN_5,   WN_4,   KC_0,   KC_J,     K_LA,   KC_0,    KC_U,    KC_D,    KC_B,   KC_0, 
	                    KC_0,  KC_0,   KC_0,   KC_0,   KC_G,     K_EN,   KC_0,    KC_0,    KC_0,    KC_0
),

[_FS] =   LAYOUT(
            XXXX,   AL_B,  AL_F,  CL_A,   CL_E,   XXXX,   XXXX,      XXXX,   CLup,    K_F7,    K_F8,    K_F9,   KF12,   XXXX, 
	    XXXX,   XXXX,  XXXX,  XXXX,   XXXX,   XXXX,   XXXX,      XXXX,   CLdn,    K_F1,    K_F2,    K_F3,   KF11,   XXXX,
	            XXXX,  XXXX,  XXXX,   XXXX,   XXXX,   XXXX,      XXXX,   XXXX,    K_F4,    K_F5,    K_F6,   KF10, 
	                   XXXX,  XXXX,   XXXX,   XXXX,   XXXX,      XXXX,   XXXX,    XXXX,    XXXX,    XXXX
),

[_SUB] =   LAYOUT(
	     KC_Z,   KC_C,  KC_X,  KC_F,   KC_L,   KC_J,   K_TB,     K_BC,   KC_Q,    KC_K,    KC_M,    KC_P,   KC_G,   KC_V, 
             KC_0,   KC_I,  KC_O,  KC_A,   KC_H,   KC_W,   K_LS,     K_SP,   KC_V,    KC_E,    KC_T,    KC_N,   KC_0,   KC_0,
	             KC_W,  KC_W,  KC_Y,   KC_R,   KC_0,   KC_J,     K_LA,   KC_0,    KC_U,    KC_D,    KC_B,   KC_0, 
	                    KC_0,  KC_0,   KC_0,   KC_0,   KC_G,     K_EN,   KC_0,    KC_0,    KC_0,    KC_0
),

[_MANAGER] = LAYOUT(
	     KC_0,   _B_T,  _B_U,  _B_V,   _B_W,   _B_5,   K_TB,     K_BC,   _C_I,    _B_6,    _B_7,    _B_8,   _B_9,   GRAV, 
	     KC_0,   _B_X,  _B_Y,  _B_Z,   _B_0,   KC_0,   K_LS,     K_SP,   _C_J,    _C_A,    _C_B,    _C_C,   _C_D,   KC_0,
	             _B_1,  _B_2,  _B_3,   _B_4,   KC_0,   KC_J,     K_LA,   KC_0,    _C_E,    _C_F,    _C_G,   _C_H, 
	                    KC_0,  KC_0,   KC_0,   KC_0,   KC_0,     K_EN,   KC_0,    KC_0,    KC_0,    KC_0
),

[_WIN2] =   LAYOUT(
	     KC_0,   KC_C,  _A_9,  _A_8,   _A_7,   _A_0,   K_TB,     K_BC,   KC_Q,    KC_K,    KC_M,    KC_P,   KC_G,   KC_V, 
	     KC_0,   KC_I,  _A_3,  _A_2,   _A_1,   KC_0,   K_LS,     K_SP,   KC_V,    KC_E,    KC_T,    KC_N,   KC_0,   KC_0,
	             KC_W,  _A_6,  _A_5,   _A_4,   KC_0,   KC_J,     K_LA,   KC_0,    KC_U,    KC_D,    KC_B,   KC_0, 
	                    KC_0,  KC_0,   KC_0,   KC_0,   KC_G,     K_EN,   KC_0,    KC_0,    KC_0,    KC_0
),

[_CTRLS] =   LAYOUT(
	     XXXX,   XXXX,  XXXX,  XXXX,   XXXX,   XXXX,   XXXX,     XXXX,   XXXX,    KC_7,    CL_8,    CL_9,   XXXX,   XXXX, 
	     XXXX,   XXXX,  XXXX,  C_DN,   C_UP,   XXXX,   XXXX,     XXXX,   XXXX,    CL_0,    CL_1,    CL_2,   CL_3,   XXXX,
	             XXXX,  XXXX,  XXXX,   XXXX,   XXXX,   XXXX,     XXXX,   XXXX,    CL_4,    CL_5,    CL_6,   XXXX, 
	                    XXXX,  XXXX,   XXXX,   XXXX,   XXXX,     XXXX,   XXXX,    KC_0,    KC_0,    KC_0
)
};


// basic vars


bool russian_on_my_pc = 0;
bool lang_changed = 0;

uint16_t current_layer = _ENGLISH;

static uint16_t my_hash_timer;

bool bnumlock = false;
bool numlock_changed = false;

void led_set_kb(uint8_t usb_led) {
    if (usb_led & (1<<USB_LED_NUM_LOCK)) {
        bnumlock = true;
    } else {
        bnumlock = false;
    }
}


// Combo 

const ComboWithKeycode combos[] PROGMEM = {

// English

// --left part

  CHORD(WIN1_C,         CB_C),
  CHORD(HASH,         C_01),
  CHORD(KC_LEFT_ANGLE_BRACKET, CB_C, C_01),   // {

  CHORD(KC_Z,         CB_Z),
  CHORD(KC_I,         CB_I),
  CHORD(KC_EXCLAIM, CB_C, CB_W),   // !

  CHORD(UNDR,         C_02),
  CHORD(KC_KP_SLASH, CB_I, C_02),  // /

  CHORD(KC_X,         CB_X),
  CHORD(KC_O,         CB_O),
  CHORD(KC_COLON, CB_X, CB_O),    // :

  CHORD(KC_W,         CB_W),
  CHORD(KC_EQUAL, CB_O, CB_W),    // =

  CHORD(LSBR,         C_03),
  CHORD(KC_O, CB_W, C_03),        // del 0

  CHORD(KC_F,         CB_F),
  CHORD(KC_A,         CB_A),
  CHORD(KC_SEMICOLON, CB_F, CB_A), // ;

  CHORD(KC_Y,         CB_Y),
  CHORD(KC_MINUS, CB_A, CB_Y),    // -

  CHORD(LCBR,         C_04),
  CHORD(KC_DOLLAR, CB_Y, C_04),  // $

  CHORD(KC_L,         CB_L),
  CHORD(KC_H,         CB_H),
  CHORD(KC_UNDERSCORE, CB_H, CB_L), // _

  CHORD(KC_R,         CB_R),
  CHORD(KC_PLUS, CB_H, CB_R),  // +

  CHORD(RCBR,         C_05),
  CHORD(S(KC_LEFT_BRACKET), CB_R, C_05),  // {

  CHORD(KC_J,         CB_J),
  CHORD(COLN,         C_32),
  CHORD(KC_0, CB_J, C_32),  // this is 0

  CHORD(COMA,         C_07),
  CHORD(KC_ASTERISK, C_32, C_07),   // *

  CHORD(KC_0,         C_06),
  CHORD(KC_0, C_06, C_07),   // del 0


// --right part

  CHORD(KC_Q,         CB_Q),
  CHORD(SEMI,         C_33),
  CHORD(KC_1, C_33, CB_Q),     // 1

  CHORD(DOTT,         C_09),
  CHORD(KC_QUESTION, C_33, C_09),    //  ?

  CHORD(KC_0,         C_08),
  CHORD(KC_0, C_08, C_09),    //  del 0

  CHORD(KC_K,         CB_K),
  CHORD(KC_E,         CB_E),
  CHORD(KC_LEFT_PAREN, CB_E, CB_K),  // (

  CHORD(KC_U,         CB_U),
  CHORD(DOTT, CB_E, CB_U),     //  .
  
  CHORD(LCOM,         C_10),
  CHORD(KC_RIGHT_CURLY_BRACE, CB_U, C_10),    // }

  CHORD(KC_M,         CB_M),
  CHORD(KC_T,         CB_T),
  CHORD(KC_RIGHT_PAREN, CB_T, CB_M),      // )

  CHORD(KC_D,         CB_D),
  CHORD(COMA, CB_T, CB_D),       //,

  CHORD(RCOM,         C_11),
  CHORD(KC_PERCENT, CB_D, C_11),    //  %

  CHORD(KC_P,         CB_P),
  CHORD(KC_N,         CB_N),
  CHORD(KC_LEFT_BRACKET, CB_P, CB_N),   // [

  CHORD(KC_B,         CB_B),
  CHORD(KC_DOUBLE_QUOTE, CB_N, CB_B),   // "

  CHORD(QSTN,         C_12),
  CHORD(KC_0, CB_B, C_12),        //	del 0

  CHORD(KC_V,         CB_G),
  CHORD(KC_S,         CB_S),
  CHORD(KC_0, CB_G, CB_S),   // ]

  CHORD(QOTE,         C_13),
  CHORD(KC_QUOTE, CB_S, C_13),     // '

  CHORD(KC_G,         CB_V),
  CHORD(PIPE,         C_14),
  CHORD(KC_RIGHT_ANGLE_BRACKET, CB_V, C_14),


// Thumbs
 
// --left
  CHORD(T_LW,          C_24),
  CHORD(KC_LSFT,          C_25),
  CHORD(CTRL,          C_26),
  CHORD(ENGL,          C_27),

  CHORD(KC_LEFT_GUI,  C_24, C_25),
  CHORD(KC_DELETE,    C_25, C_26),
  CHORD(KC_1,        C_26, C_27),  // not used

// --right 
  CHORD(B_RS,          C_28),
  CHORD(K_SP,          C_29),
  CHORD(E_FS,          C_30),
  CHORD(RUSS,          C_31),   
  
  CHORD(KC_BACKSPACE, C_28, C_29),
  CHORD(KC_ENTER, C_29, C_30),
  CHORD(KC_LEFT_ALT, C_30, C_31),      

 




// Russian

// --left part

  CHORD(WIN1_JU,          C_JU),
  CHORD(HASH,          C_15),
  CHORD(KC_0, C_JU, C_15),

  CHORD(R_JU,         CR_H),
  CHORD(RU_I,         CR_I),
  CHORD(KC_EXCLAIM, CR_H, CR_I),   // !

  CHORD(RU_E,         CR_E),
  CHORD(KC_KP_SLASH, CR_I, CR_E),  // /

  CHORD(R_SH,         C_SH),
  CHORD(RU_A,         CR_A),
  CHORD(S(KC_6), C_SH, CR_A),    // : _B_E

  CHORD(R_SC,         C_SC),
  CHORD(KC_EQUAL, CR_A, C_SC),    // =  _B_L

  CHORD(LSBR,         C_16),
  CHORD(KC_0, C_SC, C_16),        // del 0

  CHORD(R_JA,         C_JA),
  CHORD(R_JE,         C_JE),
  CHORD(S(KC_4), C_JE, C_JA), // ;  _B_D

  CHORD(RU_Y,         CR_Y),
  CHORD(KC_MINUS, C_JE, CR_Y),    // -

  CHORD(LCBR,         C_17),
  CHORD(KC_0, CR_Y, C_17),  // $   _B_M

  CHORD(RU_U,         CR_U),
  CHORD(RU_O,         CR_O),
  CHORD(KC_UNDERSCORE, CR_U, CR_O), // _

  CHORD(R_ST,         C_ST),
  CHORD(KC_PLUS, CR_O, C_ST),  // +

  CHORD(R_HD,         C_HD),
  CHORD(KC_0, C_ST, C_HD),  // {   _B_N

  CHORD(R_TS,         C_TS),
  CHORD(RU_J,         CR_J),
  CHORD(KC_0, C_TS, CR_J),  // this is 0

  CHORD(COMA,         C_18),
  CHORD(KC_ASTERISK, CR_J, C_18),   // *

  CHORD(KC_0,         C_19),
  CHORD(KC_0, C_18, C_19),   // del 0




// --right part


  CHORD(R_CH,         C_CH),
  CHORD(RU_F,         CR_F),
  CHORD(KC_1, C_CH, CR_F),     // 1

  CHORD(DOTT,         C_20),
  CHORD(S(KC_7), CR_F, C_20),    //  ?  _B_F

  CHORD(KC_0,         C_21),
  CHORD(KC_0, C_20, C_21),    //  del 0

  CHORD(RU_N,         CR_N),
  CHORD(RU_R,         CR_R),
  CHORD(KC_LEFT_PAREN, CR_N, CR_R),  // (

  CHORD(RU_L,         CR_L),
  CHORD(DOTT, CR_R, CR_L),     //  .  _B_A
  
  CHORD(R_JO,         C_JO),
  CHORD(KC_0, CR_L, C_JO),    // }  _B_O

  CHORD(RU_P,         CR_P),
  CHORD(RU_T,         CR_T),
  CHORD(KC_RIGHT_PAREN, CR_P, CR_T),      // )

  CHORD(RU_M,         CR_M),
  CHORD(COMA, CR_T, CR_M),       //,  _B_B

  CHORD(R_ZH,         C_ZH),
  CHORD(KC_PERCENT, CR_M, C_ZH),    //  %

  CHORD(RU_D,         CR_D),
  CHORD(RU_K,         CR_K),
  CHORD(KC_0, CR_D, CR_K),   // [  _B_P

  CHORD(RU_V,         CR_V),
  CHORD(KC_0, CR_K, CR_V),   // "  _B_C

  CHORD(QSTN,         C_22),
  CHORD(KC_0, CR_V, C_22),        //	del 0

  CHORD(RU_G,         CR_G),
  CHORD(RU_S,         CR_S),
  CHORD(KC_0, CR_G, CR_S),   // ]  _B_Q

  CHORD(RU_Z,         CR_Z),
  CHORD(KC_0, CR_S, CR_Z),     // '  _B_R

  CHORD(RU_B,         CR_B),
  CHORD(PIPE,         C_23),
  CHORD(KC_0, CR_B, C_23),  


// --- for number layer

  CHORD(KC_0,         C_0L),
  CHORD(KC_4,         C_4L),
  CHORD(DOTT, C_0L, C_4L), 

  CHORD(KC_1,         C_1L),
  CHORD(KC_5,         C_5L),
  CHORD(COMA, C_1L, C_5L), 

 };
const uint8_t combos_size = sizeof(combos)/sizeof(ComboWithKeycode);

void user_timer(void) {
  combo_user_timer();
}

void matrix_scan_user(void) {
  user_timer();
}


void combo_max_count_error(void) {
  // ...
}

void combo_max_size_error(void) {
  // ...
}



// basic functions 


void change_lang_eng(void){
    register_code(KC_RCTL);
    unregister_code(KC_RCTL);
}

void change_lang_rus(void){
    register_code(KC_RSFT);
    unregister_code(KC_RSFT);
}



// main function 

bool process_record_user(uint16_t keycode, keyrecord_t *record) { 

    if (!combo_process_record(keycode, record)) return false;

    switch (keycode) {


        case RUSS:
            if (record->event.pressed) {
                change_lang_rus();
                layer_off(_ENGLISH);
                layer_on(_RUSSIAN);
                russian_on_my_pc = 1;
                current_layer =	 _RUSSIAN;
            }
            return false;



        case ENGL:
            if (record->event.pressed) {
                change_lang_eng();
                layer_off(_RUSSIAN);
                layer_on(_ENGLISH);
                russian_on_my_pc = 0;
                current_layer = _ENGLISH;
            }
            return false;


        case B_RS: 
             if(record->event.pressed) { 
                 layer_on(_RAISE);
             } else {
                 layer_off(_RAISE);
             }
        return false; 

        case COPY: 
             if(record->event.pressed) { 
                 if(bnumlock) { 
                     tap_code16(C(S(KC_C)));
                 }else{
                     tap_code16(C(KC_C));
             }
             } else {
             }
        return false; 


        case PAST: 
             if(record->event.pressed) { 
                 if(bnumlock) { 
                     tap_code16(C(S(KC_V)));
                 }else{
                     tap_code16(C(KC_V));
             }
             } else {
             }
        return false; 


        case T_LW: 
             if(record->event.pressed) { 
                 my_hash_timer = timer_read();
                 layer_on(_LOWER);
                 if (russian_on_my_pc == 1){
                      change_lang_eng();
                      lang_changed = 1;
                 }
             } else {
                   layer_off(_LOWER);
                   if (current_layer == _ENGLISH){
                       lang_changed = 0;
                   }
                   if (lang_changed) { 
                       lang_changed = 0; 
                       change_lang_rus();    
                   } 
               if (timer_elapsed(my_hash_timer) < TAPPING_TERM) {
                     tap_code(KC_TAB); 
          }
        }
        return false; 

       



        case WIN1_C: 
             if(record->event.pressed) { 
                 my_hash_timer = timer_read();
                 layer_on(_WIN);
                 if (russian_on_my_pc == 1){
                      change_lang_eng();
                      lang_changed = 1;
                 }
             } else {
                   layer_off(_WIN);
                   if (current_layer == _ENGLISH){
                       lang_changed = 0;
                   }
                   if (lang_changed) { 
                       lang_changed = 0; 
                       change_lang_rus();    
                   } 
               if (timer_elapsed(my_hash_timer) < 500) {
                     tap_code(KC_C); 
          }
        }
        return false; 


        case WIN1_JU: 
             if(record->event.pressed) { 
                 my_hash_timer = timer_read();
                 layer_on(_WIN);
                 if (russian_on_my_pc == 1){
                      change_lang_eng();
                      lang_changed = 1;
                 }
             } else {
                   layer_off(_WIN);
                   if (current_layer == _ENGLISH){
                       lang_changed = 0;
                   }
                   if (lang_changed) { 
                       lang_changed = 0; 
                       change_lang_rus();    
                   } 
               if (timer_elapsed(my_hash_timer) < 500) {
                     tap_code(RU_H); 
          }
        }
        return false;



        case E_FS: 
             if(record->event.pressed) { 
                 my_hash_timer = timer_read();
                 layer_on(_FS);
                 if (russian_on_my_pc == 1){
                      change_lang_eng();
                      lang_changed = 1;
                 }
             } else {
                   layer_off(_FS);
                   if (lang_changed) { 
                       lang_changed = 0; 
                       change_lang_rus();    
                   } 
               if (timer_elapsed(my_hash_timer) < TAPPING_TERM) {
                     tap_code(KC_ESCAPE); 
          }
        }
        return false; 



        case CTRL: 
             if(record->event.pressed) { 
                 
                 if (russian_on_my_pc == 1){
                      change_lang_eng();
                      lang_changed = 1;
                      default_layer_set(0);
                      layer_on(_SUB);
                 }
                 register_code(KC_LEFT_CTRL); 

             } else {
                  unregister_code(KC_LEFT_CTRL);

                   if (lang_changed) { 
                       lang_changed = 0; 
                       change_lang_rus();
                       layer_off(_SUB);    
                   }
        }
        return false; 


 
        case CTRLS: 
             if(record->event.pressed) { 
                 
                 if (russian_on_my_pc == 1){
                      change_lang_eng();
                      lang_changed = 1;
                      default_layer_set(0);
                 }
                      layer_on(_CTRLS);
                 register_code(KC_LEFT_CTRL); 
             } else {
                  unregister_code(KC_LEFT_CTRL);

                   if (lang_changed) { 
                       lang_changed = 0; 
                       change_lang_rus();   
                   } 
                   layer_off(_CTRLS);
        }
        return false; 

        case MANAGER: 
             if(record->event.pressed) { 
                 
                 if (russian_on_my_pc == 1){
                      change_lang_eng();
                      lang_changed = 1;
                      default_layer_set(0);
                      layer_on(_MANAGER);
                 }
 
             } else {


                   if (lang_changed) { 
                       lang_changed = 0; 
                       change_lang_rus();
                       layer_off(_MANAGER);    
                   } 

        }
        return false; 



    }
    return true;
}




