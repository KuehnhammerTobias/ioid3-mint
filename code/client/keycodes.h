/*
=======================================================================================================================================
Copyright (C) 1999-2010 id Software LLC, a ZeniMax Media company.

This file is part of Spearmint Source Code.

Spearmint Source Code is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as
published by the Free Software Foundation; either version 3 of the License, or (at your option) any later version.

Spearmint Source Code is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with Spearmint Source Code.
If not, see <http://www.gnu.org/licenses/>.

In addition, Spearmint Source Code is also subject to certain additional terms. You should have received a copy of these additional
terms immediately following the terms and conditions of the GNU General Public License. If not, please request a copy in writing from
id Software at the address below.

If you have questions concerning this license or the applicable additional terms, you may contact in writing id Software LLC, c/o
ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.
=======================================================================================================================================
*/

#ifndef __KEYCODES_H__
#define __KEYCODES_H__

// these are the key numbers that should be passed to KeyEvent

// normal keys should be passed as lowercased ascii

typedef enum {
	K_TAB = 9,
	K_ENTER = 13,
	K_ESCAPE = 27,
	K_SPACE = 32,
	K_BACKSPACE = 127,
	K_CAPSLOCK = 128,
	K_POWER,
	K_PAUSE,
	K_UPARROW,
	K_DOWNARROW,
	K_LEFTARROW,
	K_RIGHTARROW,
	K_LEFTALT,
	K_RIGHTALT,
	K_LEFTCTRL,
	K_RIGHTCTRL,
	K_LEFTSHIFT,
	K_RIGHTSHIFT,
	K_LEFTSUPER,
	K_RIGHTSUPER,
	K_LEFTCOMMAND,
	K_RIGHTCOMMAND,
	K_INS,
	K_DEL,
	K_PGDN,
	K_PGUP,
	K_HOME,
	K_END,
	K_F1,
	K_F2,
	K_F3,
	K_F4,
	K_F5,
	K_F6,
	K_F7,
	K_F8,
	K_F9,
	K_F10,
	K_F11,
	K_F12,
	K_F13,
	K_F14,
	K_F15,
	K_KP_HOME,
	K_KP_UPARROW,
	K_KP_PGUP,
	K_KP_LEFTARROW,
	K_KP_5,
	K_KP_RIGHTARROW,
	K_KP_END,
	K_KP_DOWNARROW,
	K_KP_PGDN,
	K_KP_ENTER,
	K_KP_INS,
	K_KP_DEL,
	K_KP_SLASH,
	K_KP_MINUS,
	K_KP_PLUS,
	K_KP_NUMLOCK,
	K_KP_STAR,
	K_KP_EQUALS,
	K_MOUSE1,
	K_MOUSE2,
	K_MOUSE3,
	K_MOUSE4,
	K_MOUSE5,
	K_MWHEELUP,
	K_MWHEELDOWN,
	K_MWHEELLEFT,
	K_MWHEELRIGHT,
	// player 1
	K_FIRST_JOY,
	K_JOY_A = K_FIRST_JOY,
	K_JOY_B,
	K_JOY_X,
	K_JOY_Y,
	K_JOY_BACK,
	K_JOY_GUIDE,
	K_JOY_START,
	K_JOY_DPAD_UP,
	K_JOY_DPAD_RIGHT,
	K_JOY_DPAD_DOWN,
	K_JOY_DPAD_LEFT,
	K_JOY_LEFTSHOULDER,
	K_JOY_RIGHTSHOULDER,
	K_JOY_LEFTTRIGGER,
	K_JOY_RIGHTTRIGGER,
	K_JOY_LEFTSTICK,
	K_JOY_RIGHTSTICK,
	K_JOY_LEFTSTICK_UP,
	K_JOY_LEFTSTICK_RIGHT,
	K_JOY_LEFTSTICK_DOWN,
	K_JOY_LEFTSTICK_LEFT,
	K_JOY_RIGHTSTICK_UP,
	K_JOY_RIGHTSTICK_RIGHT,
	K_JOY_RIGHTSTICK_DOWN,
	K_JOY_RIGHTSTICK_LEFT,
	K_LAST_JOY = K_JOY_RIGHTSTICK_LEFT,
	// player 2
	K_FIRST_2JOY,
	K_2JOY_A = K_FIRST_2JOY,
	K_2JOY_B,
	K_2JOY_X,
	K_2JOY_Y,
	K_2JOY_BACK,
	K_2JOY_GUIDE,
	K_2JOY_START,

	K_2JOY_DPAD_UP,
	K_2JOY_DPAD_RIGHT,
	K_2JOY_DPAD_DOWN,
	K_2JOY_DPAD_LEFT,

	K_2JOY_LEFTSHOULDER,
	K_2JOY_RIGHTSHOULDER,

	K_2JOY_LEFTTRIGGER,
	K_2JOY_RIGHTTRIGGER,

	K_2JOY_LEFTSTICK,
	K_2JOY_RIGHTSTICK,

	K_2JOY_LEFTSTICK_UP,
	K_2JOY_LEFTSTICK_RIGHT,
	K_2JOY_LEFTSTICK_DOWN,
	K_2JOY_LEFTSTICK_LEFT,

	K_2JOY_RIGHTSTICK_UP,
	K_2JOY_RIGHTSTICK_RIGHT,
	K_2JOY_RIGHTSTICK_DOWN,
	K_2JOY_RIGHTSTICK_LEFT,

	K_LAST_2JOY = K_2JOY_RIGHTSTICK_LEFT,

	// player 3
	K_FIRST_3JOY,

	K_3JOY_A = K_FIRST_3JOY,
	K_3JOY_B,
	K_3JOY_X,
	K_3JOY_Y,
	K_3JOY_BACK,
	K_3JOY_GUIDE,
	K_3JOY_START,

	K_3JOY_DPAD_UP,
	K_3JOY_DPAD_RIGHT,
	K_3JOY_DPAD_DOWN,
	K_3JOY_DPAD_LEFT,

	K_3JOY_LEFTSHOULDER,
	K_3JOY_RIGHTSHOULDER,

	K_3JOY_LEFTTRIGGER,
	K_3JOY_RIGHTTRIGGER,

	K_3JOY_LEFTSTICK,
	K_3JOY_RIGHTSTICK,

	K_3JOY_LEFTSTICK_UP,
	K_3JOY_LEFTSTICK_RIGHT,
	K_3JOY_LEFTSTICK_DOWN,
	K_3JOY_LEFTSTICK_LEFT,

	K_3JOY_RIGHTSTICK_UP,
	K_3JOY_RIGHTSTICK_RIGHT,
	K_3JOY_RIGHTSTICK_DOWN,
	K_3JOY_RIGHTSTICK_LEFT,

	K_LAST_3JOY = K_3JOY_RIGHTSTICK_LEFT,

	// player 4
	K_FIRST_4JOY,

	K_4JOY_A = K_FIRST_4JOY,
	K_4JOY_B,
	K_4JOY_X,
	K_4JOY_Y,
	K_4JOY_BACK,
	K_4JOY_GUIDE,
	K_4JOY_START,

	K_4JOY_DPAD_UP,
	K_4JOY_DPAD_RIGHT,
	K_4JOY_DPAD_DOWN,
	K_4JOY_DPAD_LEFT,

	K_4JOY_LEFTSHOULDER,
	K_4JOY_RIGHTSHOULDER,

	K_4JOY_LEFTTRIGGER,
	K_4JOY_RIGHTTRIGGER,

	K_4JOY_LEFTSTICK,
	K_4JOY_RIGHTSTICK,

	K_4JOY_LEFTSTICK_UP,
	K_4JOY_LEFTSTICK_RIGHT,
	K_4JOY_LEFTSTICK_DOWN,
	K_4JOY_LEFTSTICK_LEFT,

	K_4JOY_RIGHTSTICK_UP,
	K_4JOY_RIGHTSTICK_RIGHT,
	K_4JOY_RIGHTSTICK_DOWN,
	K_4JOY_RIGHTSTICK_LEFT,

	K_LAST_4JOY = K_4JOY_RIGHTSTICK_LEFT,

	K_AUX1,
	K_AUX2,
	K_AUX3,
	K_AUX4,
	K_AUX5,
	K_AUX6,
	K_AUX7,
	K_AUX8,
	K_AUX9,
	K_AUX10,
	K_AUX11,
	K_AUX12,
	K_AUX13,
	K_AUX14,
	K_AUX15,
	K_AUX16,
	K_WORLD_0,
	K_WORLD_1,
	K_WORLD_2,
	K_WORLD_3,
	K_WORLD_4,
	K_WORLD_5,
	K_WORLD_6,
	K_WORLD_7,
	K_WORLD_8,
	K_WORLD_9,
	K_WORLD_10,
	K_WORLD_11,
	K_WORLD_12,
	K_WORLD_13,
	K_WORLD_14,
	K_WORLD_15,
	K_WORLD_16,
	K_WORLD_17,
	K_WORLD_18,
	K_WORLD_19,
	K_WORLD_20,
	K_WORLD_21,
	K_WORLD_22,
	K_WORLD_23,
	K_WORLD_24,
	K_WORLD_25,
	K_WORLD_26,
	K_WORLD_27,
	K_WORLD_28,
	K_WORLD_29,
	K_WORLD_30,
	K_WORLD_31,
	K_WORLD_32,
	K_WORLD_33,
	K_WORLD_34,
	K_WORLD_35,
	K_WORLD_36,
	K_WORLD_37,
	K_WORLD_38,
	K_WORLD_39,
	K_WORLD_40,
	K_WORLD_41,
	K_WORLD_42,
	K_WORLD_43,
	K_WORLD_44,
	K_WORLD_45,
	K_WORLD_46,
	K_WORLD_47,
	K_WORLD_48,
	K_WORLD_49,
	K_WORLD_50,
	K_WORLD_51,
	K_WORLD_52,
	K_WORLD_53,
	K_WORLD_54,
	K_WORLD_55,
	K_WORLD_56,
	K_WORLD_57,
	K_WORLD_58,
	K_WORLD_59,
	K_WORLD_60,
	K_WORLD_61,
	K_WORLD_62,
	K_WORLD_63,
	K_WORLD_64,
	K_WORLD_65,
	K_WORLD_66,
	K_WORLD_67,
	K_WORLD_68,
	K_WORLD_69,
	K_WORLD_70,
	K_WORLD_71,
	K_WORLD_72,
	K_WORLD_73,
	K_WORLD_74,
	K_WORLD_75,
	K_WORLD_76,
	K_WORLD_77,
	K_WORLD_78,
	K_WORLD_79,
	K_WORLD_80,
	K_WORLD_81,
	K_WORLD_82,
	K_WORLD_83,
	K_WORLD_84,
	K_WORLD_85,
	K_WORLD_86,
	K_WORLD_87,
	K_WORLD_88,
	K_WORLD_89,
	K_WORLD_90,
	K_WORLD_91,
	K_WORLD_92,
	K_WORLD_93,
	K_WORLD_94,
	K_WORLD_95,
	K_WORLD_96,
	K_WORLD_97,
	K_WORLD_98,
	K_WORLD_99,
	K_WORLD_100,
	K_WORLD_101,
	K_WORLD_102,
	K_WORLD_103,
	K_WORLD_104,
	K_WORLD_105,
	K_WORLD_106,
	K_WORLD_107,
	K_WORLD_108,
	K_WORLD_109,
	K_WORLD_110,
	K_WORLD_111,
	K_WORLD_112,
	K_WORLD_113,
	K_WORLD_114,
	K_WORLD_115,
	K_WORLD_116,
	K_WORLD_117,
	K_WORLD_118,
	K_WORLD_119,
	K_WORLD_120,
	K_WORLD_121,
	K_WORLD_122,
	K_WORLD_123,
	K_WORLD_124,
	K_WORLD_125,
	K_WORLD_126,
	K_WORLD_127,
	K_WORLD_128,
	K_WORLD_129,
	K_WORLD_130,
	K_WORLD_131,
	K_WORLD_132,
	K_WORLD_133,
	K_WORLD_134,
	K_WORLD_135,
	K_WORLD_136,
	K_WORLD_137,
	K_WORLD_138,
	K_WORLD_139,
	K_WORLD_140,
	K_WORLD_141,
	K_WORLD_142,
	K_WORLD_143,
	K_WORLD_144,
	K_WORLD_145,
	K_WORLD_146,
	K_WORLD_147,
	K_WORLD_148,
	K_WORLD_149,
	K_WORLD_150,
	K_WORLD_151,
	K_WORLD_152,
	K_WORLD_153,
	K_WORLD_154,
	K_WORLD_155,
	K_WORLD_156,
	K_WORLD_157,
	K_WORLD_158,
	K_WORLD_159,
	K_WORLD_160,
	K_WORLD_161,
	K_WORLD_162,
	K_WORLD_163,
	K_WORLD_164,
	K_WORLD_165,
	K_WORLD_166,
	K_WORLD_167,
	K_WORLD_168,
	K_WORLD_169,
	K_WORLD_170,
	K_WORLD_171,
	K_WORLD_172,
	K_WORLD_173,
	K_WORLD_174,
	K_WORLD_175,
	K_WORLD_176,
	K_WORLD_177,
	K_WORLD_178,
	K_WORLD_179,
	K_WORLD_180,
	K_WORLD_181,
	K_WORLD_182,
	K_WORLD_183,
	K_WORLD_184,
	K_WORLD_185,
	K_WORLD_186,
	K_WORLD_187,
	K_WORLD_188,
	K_WORLD_189,
	K_WORLD_190,
	K_WORLD_191,
	K_WORLD_192,
	K_WORLD_193,
	K_WORLD_194,
	K_WORLD_195,
	K_WORLD_196,
	K_WORLD_197,
	K_WORLD_198,
	K_WORLD_199,
	K_WORLD_200,
	K_WORLD_201,
	K_WORLD_202,
	K_WORLD_203,
	K_WORLD_204,
	K_WORLD_205,
	K_WORLD_206,
	K_WORLD_207,
	K_WORLD_208,
	K_WORLD_209,
	K_WORLD_210,
	K_WORLD_211,
	K_WORLD_212,
	K_WORLD_213,
	K_WORLD_214,
	K_WORLD_215,
	K_WORLD_216,
	K_WORLD_217,
	K_WORLD_218,
	K_WORLD_219,
	K_WORLD_220,
	K_WORLD_221,
	K_WORLD_222,
	K_WORLD_223,
	K_WORLD_224,
	K_WORLD_225,
	K_WORLD_226,
	K_WORLD_227,
	K_WORLD_228,
	K_WORLD_229,
	K_WORLD_230,
	K_WORLD_231,
	K_WORLD_232,
	K_WORLD_233,
	K_WORLD_234,
	K_WORLD_235,
	K_WORLD_236,
	K_WORLD_237,
	K_WORLD_238,
	K_WORLD_239,
	K_WORLD_240,
	K_WORLD_241,
	K_WORLD_242,
	K_WORLD_243,
	K_WORLD_244,
	K_WORLD_245,
	K_WORLD_246,
	K_WORLD_247,
	K_WORLD_248,
	K_WORLD_249,
	K_WORLD_250,
	K_WORLD_251,
	K_WORLD_252,
	K_WORLD_253,
	K_WORLD_254,
	K_WORLD_255,

	K_COMPOSE,
	K_MODE,
	K_HELP,
	K_PRINT,
	K_SYSREQ,
	K_SCROLLOCK,
	K_BREAK,
	K_MENU,
	K_EURO,
	K_UNDO,
	// pseudo-key that brings the console down
	K_CONSOLE,

	MAX_KEYS
} keyNum_t;
#endif
