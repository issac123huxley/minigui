/*
 *   This file is part of MiniGUI, a mature cross-platform windowing 
 *   and Graphics User Interface (GUI) support system for embedded systems
 *   and smart IoT devices.
 * 
 *   Copyright (C) 2002~2018, Beijing FMSoft Technologies Co., Ltd.
 *   Copyright (C) 1998~2002, WEI Yongming
 * 
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 * 
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 * 
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 *   Or,
 * 
 *   As this program is a library, any link to this program must follow
 *   GNU General Public License version 3 (GPLv3). If you cannot accept
 *   GPLv3, you need to be licensed from FMSoft.
 * 
 *   If you have got a commercial license of this program, please use it
 *   under the terms and conditions of the commercial license.
 * 
 *   For more information about the commercial license, please refer to
 *   <http://www.minigui.com/blog/minigui-licensing-policy/>.
 */

#include "common.h"

#ifdef _MGINCORE_RES

//data of "excalmatory.ico"

unsigned char _mgir_ico_excalmatory_data[]={
	0x00,0x00,0x01,0x00,0x02,0x00,0x20,0x20,	0x00,0x00,0x01,0x00,0x08,0x00,0xA8,0x08,
	0x00,0x00,0x26,0x00,0x00,0x00,0x10,0x10,	0x00,0x00,0x01,0x00,0x08,0x00,0x68,0x05,
	0x00,0x00,0xCE,0x08,0x00,0x00,0x28,0x00,	0x00,0x00,0x20,0x00,0x00,0x00,0x40,0x00,
	0x00,0x00,0x01,0x00,0x08,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0xF7,0xF6,0xF7,0x00,0xF0,0xEF,	0xF0,0x00,0x5A,0x2E,0x40,0x00,0x94,0x77,
	0x83,0x00,0x39,0x04,0x19,0x00,0x40,0x0C,	0x20,0x00,0x50,0x21,0x33,0x00,0x50,0x22,
	0x34,0x00,0x66,0x3D,0x4D,0x00,0x69,0x41,	0x51,0x00,0x76,0x51,0x5F,0x00,0x85,0x62,
	0x6D,0x00,0x88,0x66,0x70,0x00,0x4D,0x19,	0x24,0x00,0x62,0x2E,0x2F,0x00,0xC3,0xAF,
	0xAF,0x00,0x74,0x41,0x3F,0x00,0x6D,0x38,	0x34,0x00,0x9B,0x75,0x71,0x00,0x53,0x0F,
	0x00,0x00,0x86,0x55,0x4A,0x00,0xB2,0x98,	0x92,0x00,0x77,0x1C,0x00,0x00,0x7A,0x43,
	0x32,0x00,0x8C,0x60,0x53,0x00,0xAE,0x8B,	0x80,0x00,0x7E,0x22,0x00,0x00,0x99,0x6E,
	0x5F,0x00,0xAE,0x8B,0x7F,0x00,0xC3,0xB5,	0xB0,0x00,0x93,0x2B,0x00,0x00,0x91,0x2A,
	0x00,0x00,0x86,0x26,0x00,0x00,0x5D,0x24,	0x0E,0x00,0x95,0x64,0x50,0x00,0x95,0x2E,
	0x00,0x00,0x88,0x29,0x00,0x00,0x86,0x2A,	0x00,0x00,0x85,0x2A,0x00,0x00,0xBB,0x99,
	0x89,0x00,0xB3,0x92,0x83,0x00,0xB4,0x96,	0x89,0x00,0xE4,0xDD,0xDA,0x00,0x9C,0x34,
	0x00,0x00,0x9A,0x33,0x00,0x00,0xAA,0x45,	0x14,0x00,0x87,0x3A,0x14,0x00,0x99,0x45,
	0x1A,0x00,0xC5,0x61,0x2F,0x00,0xA2,0x5A,	0x35,0x00,0x8E,0x50,0x31,0x00,0xA9,0x63,
	0x3F,0x00,0x80,0x50,0x37,0x00,0xB1,0x8E,	0x7D,0x00,0xF9,0xF7,0xF6,0x00,0xE9,0xE7,
	0xE6,0x00,0xBB,0x58,0x23,0x00,0xA1,0x56,	0x2E,0x00,0xA0,0x58,0x31,0x00,0xD1,0x7B,
	0x4C,0x00,0xCF,0x82,0x56,0x00,0xA3,0x7B,	0x65,0x00,0xCF,0xBC,0xB1,0x00,0xE7,0x98,
	0x6A,0x00,0xAD,0x86,0x6E,0x00,0xDC,0xCF,	0xC7,0x00,0xB2,0x80,0x5F,0x00,0xC0,0x91,
	0x70,0x00,0xC4,0x99,0x7B,0x00,0xC4,0x9C,	0x81,0x00,0xC9,0xA2,0x88,0x00,0xBC,0xA7,
	0x99,0x00,0xE2,0xD5,0xCC,0x00,0xFE,0xFB,	0xF9,0x00,0xE2,0xC3,0xAB,0x00,0xFB,0xEC,
	0xE1,0x00,0xFF,0xF4,0xEC,0x00,0xDC,0xD4,	0xCE,0x00,0xF2,0xEE,0xEB,0x00,0xB1,0x88,
	0x68,0x00,0xD0,0xA1,0x7C,0x00,0xCD,0xAA,	0x8D,0x00,0xD3,0xB4,0x9A,0x00,0xCA,0xAF,
	0x99,0x00,0xC9,0xB6,0xA6,0x00,0xDA,0xC6,	0xB6,0x00,0xFF,0xF3,0xE9,0x00,0xF6,0xEC,
	0xE4,0x00,0xC2,0x8F,0x63,0x00,0xB8,0x96,	0x78,0x00,0xBE,0x9C,0x7D,0x00,0xB6,0x97,
	0x7B,0x00,0xD4,0xBB,0xA5,0x00,0xFF,0xE3,	0xC9,0x00,0xFF,0xE7,0xD1,0x00,0xF1,0xDB,
	0xC7,0x00,0xF8,0xE3,0xD0,0x00,0xEA,0xDB,	0xCD,0x00,0xFF,0xF1,0xE4,0x00,0xEC,0xDF,
	0xD3,0x00,0xED,0xE4,0xDC,0x00,0xE3,0xDC,	0xD6,0x00,0xCB,0x9F,0x72,0x00,0xBB,0x93,
	0x6C,0x00,0xDB,0xAF,0x83,0x00,0xE1,0xB4,	0x88,0x00,0xBA,0x96,0x73,0x00,0xBA,0x99,
	0x77,0x00,0xDA,0xB3,0x8C,0x00,0xCD,0xA9,	0x84,0x00,0xEB,0xC3,0x9B,0x00,0xC4,0xA3,
	0x82,0x00,0xBA,0x9A,0x7B,0x00,0xDB,0xB6,	0x92,0x00,0xDD,0xBA,0x96,0x00,0xD0,0xAF,
	0x8D,0x00,0xB6,0x99,0x7C,0x00,0xB8,0x9B,	0x7E,0x00,0xFC,0xD4,0xAE,0x00,0xEE,0xC9,
	0xA4,0x00,0xEA,0xC6,0xA2,0x00,0xE0,0xBD,	0x9B,0x00,0xD3,0xB3,0x93,0x00,0xC4,0xA7,
	0x8A,0x00,0xF9,0xD5,0xB1,0x00,0xE6,0xC5,	0xA3,0x00,0xC7,0xAA,0x8D,0x00,0xC7,0xAB,
	0x8F,0x00,0xFF,0xDB,0xB8,0x00,0xF2,0xCF,	0xAE,0x00,0xE8,0xC7,0xA7,0x00,0xBB,0xA1,
	0x87,0x00,0xFF,0xDD,0xBA,0x00,0xFF,0xDE,	0xBD,0x00,0xF9,0xD8,0xB8,0x00,0xF8,0xD8,
	0xB9,0x00,0xD4,0xB9,0x9E,0x00,0xB7,0x9F,	0x88,0x00,0xCF,0xB5,0x9B,0x00,0xF0,0xD2,
	0xB4,0x00,0xDD,0xC2,0xA7,0x00,0xFA,0xDC,	0xBE,0x00,0xF8,0xDA,0xBC,0x00,0xC3,0xAB,
	0x94,0x00,0xFF,0xE1,0xC3,0x00,0xFF,0xE1,	0xC4,0x00,0xFF,0xE3,0xC7,0x00,0xF8,0xDC,
	0xC1,0x00,0xFB,0xE0,0xC5,0x00,0xFF,0xE4,	0xC9,0x00,0xE9,0xD0,0xB8,0x00,0xFF,0xE5,
	0xCB,0x00,0xFF,0xE6,0xCD,0x00,0xF8,0xDF,	0xC7,0x00,0xEF,0xD7,0xC0,0x00,0xC1,0xAE,
	0x9B,0x00,0xFF,0xE8,0xD1,0x00,0xFF,0xE9,	0xD4,0x00,0xFF,0xEA,0xD5,0x00,0xFF,0xEB,
	0xD7,0x00,0xF1,0xDE,0xCB,0x00,0xE4,0xD2,	0xC0,0x00,0xFF,0xEB,0xD8,0x00,0xF9,0xE6,
	0xD3,0x00,0xFF,0xED,0xDB,0x00,0xD0,0xC1,	0xB2,0x00,0xFF,0xED,0xDC,0x00,0xFF,0xEE,
	0xDD,0x00,0xFF,0xEF,0xDF,0x00,0xD6,0xCA,	0xBE,0x00,0xFF,0xF2,0xE5,0x00,0xD1,0xC6,
	0xBB,0x00,0xEE,0xE2,0xD6,0x00,0xFF,0xF3,	0xE7,0x00,0xFF,0xF5,0xEB,0x00,0xF2,0xE9,
	0xE0,0x00,0xF9,0xF1,0xE9,0x00,0xF6,0xEE,	0xE6,0x00,0xFF,0xF8,0xF1,0x00,0xDD,0xD7,
	0xD1,0x00,0xFF,0xF9,0xF3,0x00,0xEE,0xE8,	0xE2,0x00,0xFF,0xFA,0xF5,0x00,0xF0,0xEB,
	0xE6,0x00,0xFC,0xF8,0xF4,0x00,0xFA,0xF7,	0xF4,0x00,0xE7,0xE4,0xE1,0x00,0xED,0xEB,
	0xE9,0x00,0xFA,0xF9,0xF8,0x00,0xBE,0x9F,	0x7F,0x00,0xC9,0xAA,0x89,0x00,0xFB,0xD8,
	0xB3,0x00,0xB6,0x9D,0x82,0x00,0xE6,0xC8,	0xA9,0x00,0xFF,0xE0,0xBF,0x00,0xFF,0xE0,
	0xC0,0x00,0xFF,0xE2,0xC4,0x00,0xFF,0xE6,	0xCB,0x00,0xE4,0xCD,0xB5,0x00,0xFF,0xE7,
	0xCE,0x00,0xF9,0xE2,0xCA,0x00,0xDD,0xC9,	0xB3,0x00,0xFF,0xE9,0xD2,0x00,0xF5,0xE2,
	0xCE,0x00,0xFF,0xEC,0xD8,0x00,0xFF,0xF0,	0xE0,0x00,0xF2,0xE4,0xD5,0x00,0xFF,0xF1,
	0xE2,0x00,0xF6,0xEA,0xDD,0x00,0xFF,0xF6,	0xEC,0x00,0xFF,0xF7,0xEE,0x00,0xFF,0xE1,
	0xBC,0x00,0xFF,0xEB,0xD3,0x00,0xF8,0xEA,	0xD9,0x00,0xCF,0xC4,0xB7,0x00,0xFF,0xF2,
	0xE3,0x00,0xFF,0xF4,0xE7,0x00,0xFF,0xF5,	0xE9,0x00,0xFB,0xF4,0xEC,0x00,0xF7,0xF0,
	0xE8,0x00,0xF6,0xF1,0xEB,0x00,0xFF,0xE3,	0xBF,0x00,0xFF,0xE9,0xCB,0x00,0xFF,0xED,
	0xD5,0x00,0xFF,0xF0,0xDC,0x00,0xF8,0xF5,	0xF1,0x00,0xFF,0xE4,0xBF,0x00,0xFF,0xEF,
	0xD9,0x00,0xFC,0xF0,0xDF,0x00,0xFF,0xF7,	0xEB,0x00,0xFF,0xF8,0xEE,0x00,0xFF,0xF4,
	0xE0,0x00,0xFF,0xF7,0xE9,0x00,0xFD,0xF6,	0xEA,0x00,0xFF,0xFA,0xF1,0x00,0xFF,0xFC,
	0xF7,0x00,0xFF,0xFB,0xF3,0x00,0xFE,0xFC,	0xF8,0x00,0xF5,0xF4,0xF2,0x00,0xED,0xEC,
	0xEA,0x00,0xFF,0xF1,0xD3,0x00,0xFE,0xFD,	0xFA,0x00,0xE3,0xE2,0xDF,0x00,0xFF,0xFA,
	0xE9,0x00,0xFF,0xFD,0xF3,0x00,0xFF,0xFE,	0xF9,0x00,0xFF,0xFF,0xFB,0x00,0xFF,0xFF,
	0xFD,0x00,0xFC,0xFC,0xFB,0x00,0xF2,0xF2,	0xF1,0x00,0xEE,0xF0,0xF1,0x00,0xFF,0xFF,
	0xFF,0x00,0xEE,0xEE,0xEE,0x00,0xEC,0xEC,	0xEC,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0xFF,0x08,0x05,0xFF,0xFF,0xFF,0xFF,0xFF,	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0x59,0x18,0x05,0xFF,0xFF,0xFF,0xFF,0xFF,	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x67,
	0x69,0x18,0x05,0xFF,0xFF,0xFF,0xFF,0xFF,	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x68,0x6D,
	0x6A,0x18,0x05,0xFF,0xFF,0xFF,0xFF,0xFF,	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,	0xFF,0xFF,0xFF,0xFF,0xFF,0x52,0x6E,0x6F,
	0x6A,0x15,0x05,0xFF,0xFF,0xFF,0xFF,0xFF,	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,	0xFF,0x04,0x04,0x0C,0x13,0x5B,0x74,0x6F,
	0x6D,0x15,0x03,0x05,0xFF,0xFF,0xFF,0xFF,	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x19,0x0C,	0x11,0x19,0x1C,0x3E,0x5A,0x70,0x72,0x6F,
	0x6D,0x50,0x12,0x0E,0x05,0x08,0xFF,0xFF,	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0xFF,0xFF,0xFF,0xFF,0x16,0x19,0x19,0x41,	0x75,0x71,0x71,0x5B,0x70,0x74,0x6F,0x78,
	0x73,0xBF,0x6C,0x68,0x15,0x0F,0x06,0x0B,	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0xFF,0xFF,0xFF,0x16,0x3E,0x76,0x84,0x7C,	0x80,0x74,0x72,0x73,0x7A,0x78,0x77,0x77,
	0x78,0x73,0x74,0x7C,0xBE,0x6B,0x23,0x0E,	0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0xFF,0xFF,0x1D,0x5C,0x84,0x80,0x53,0x8D,	0x83,0x82,0xC3,0xC3,0xDE,0xDE,0xE3,0xD4,
	0x85,0xC0,0x79,0x7A,0x7B,0xBF,0xBE,0x50,	0x0F,0x06,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0xFF,0x28,0xC1,0x90,0x8B,0x8D,0x8C,0x87,	0xC3,0x82,0x32,0x3C,0x3D,0x3D,0x3D,0x40,
	0x40,0x3D,0xC0,0x7D,0x78,0x7A,0x7B,0x7C,	0x6B,0x11,0x06,0xFF,0xFF,0xFF,0xFF,0xFF,
	0x8A,0x8A,0x90,0x5D,0xC7,0x8E,0x91,0x91,	0x91,0x87,0x43,0x30,0x2E,0x31,0x31,0x2E,
	0x3A,0x51,0x81,0x85,0x81,0x7D,0x7E,0x7B,	0x7C,0x6B,0x0F,0x08,0xFF,0xFF,0xFF,0x8A,
	0x8A,0x9C,0x5D,0x97,0x95,0x93,0xC5,0xC5,	0x92,0x91,0xF1,0x44,0x25,0x24,0x20,0x2F,
	0x82,0xDF,0x86,0x85,0x85,0x85,0xC0,0x83,	0x53,0x80,0x50,0x0E,0x08,0xFF,0xFF,0x54,
	0x9C,0x5D,0x97,0xC9,0xC6,0x96,0x96,0x96,	0x93,0x93,0xDF,0x45,0x26,0x2D,0x20,0x3A,
	0x88,0xC5,0xC4,0xC3,0x86,0x86,0x86,0x87,	0xC2,0x89,0x7F,0x23,0x08,0xFF,0x48,0x48,
	0x5D,0xC7,0xC9,0x5F,0x99,0x99,0x98,0x98,	0x96,0x96,0xD5,0x45,0x27,0x2D,0x20,0x3A,
	0x8F,0x96,0x91,0x91,0xC4,0xC4,0xC4,0xC4,	0x88,0x4B,0x89,0x70,0x06,0x08,0x48,0x55,
	0x56,0x60,0x9D,0x9D,0x9D,0x9D,0x9D,0xC8,	0x99,0x99,0xE0,0x45,0x27,0x2D,0x20,0x3B,
	0x94,0x99,0x93,0x93,0x93,0xC5,0x92,0xC5,	0x91,0x8C,0x8D,0x8B,0x15,0x0A,0x55,0xA6,
	0xA2,0xA4,0xA0,0x9F,0x9F,0x9E,0x9E,0xCB,	0x9D,0x9D,0xE4,0x45,0x27,0x2D,0x20,0x3B,
	0x94,0xC8,0x98,0x96,0x96,0x5E,0x5E,0x93,	0x96,0x94,0xC7,0x5D,0x41,0x09,0x3F,0xAC,
	0x62,0xA5,0xA5,0xA5,0xCD,0xA0,0xA0,0x9F,	0x9F,0x9E,0xE1,0x46,0x27,0x2D,0x20,0x3B,
	0x9A,0xD5,0x99,0x99,0xC6,0x98,0x98,0x98,	0x98,0x5E,0x97,0x8D,0x36,0x09,0xD7,0xAA,
	0x64,0xA9,0xA8,0xA8,0xA7,0xA7,0xA5,0xA5,	0xCD,0xA3,0xE8,0x46,0x27,0x2D,0x20,0x3B,
	0x9A,0xA0,0x5F,0x5F,0xC8,0xC8,0xC8,0x99,	0xC8,0xC8,0x9B,0xCA,0x2A,0x09,0xAC,0xAA,
	0xAD,0xD8,0xD0,0xCE,0xA9,0xA9,0xA8,0xA8,	0xA7,0xA8,0xF4,0x47,0x25,0x2D,0x20,0x32,
	0xC9,0xE4,0x9F,0x9E,0x9E,0xCB,0xCB,0x9D,	0x9D,0xD5,0x9B,0xCA,0x2A,0x09,0xAC,0x42,
	0xAD,0xD9,0xAE,0xAB,0x63,0xD0,0xD0,0xCE,	0xCE,0xD0,0xCC,0x34,0x20,0x2C,0x1F,0x32,
	0x61,0xE1,0xCD,0xA0,0xA0,0xA0,0x9F,0x9E,	0x9F,0xE4,0x60,0xCA,0x2A,0x0A,0xAA,0x4E,
	0x65,0xD2,0xAF,0xAE,0xAE,0xAE,0xAB,0x63,	0xE6,0x53,0x2F,0x1B,0x21,0x21,0x17,0x33,
	0xA4,0xD0,0xA7,0xA5,0xA5,0xCD,0xA3,0xA0,	0xE1,0xE8,0xA1,0xA2,0x29,0x04,0xAC,0xB4,
	0x65,0xDB,0xED,0x4D,0xAF,0x57,0x57,0x57,	0xE6,0x56,0x3E,0x3E,0x3E,0x1C,0x35,0x3E,
	0xD6,0xAB,0xCE,0xA9,0xA9,0xA8,0xA7,0xA5,	0xF4,0xE5,0xA1,0xA2,0x1C,0xFF,0xAC,0x4E,
	0x2B,0xB2,0xF6,0xB5,0xD3,0xD3,0xD2,0xD2,	0x4D,0xD3,0xEB,0xE7,0xEB,0xEB,0xE7,0xAF,
	0xAB,0x63,0x63,0x63,0xD0,0xD0,0xA9,0xE9,	0xF5,0xD6,0x62,0xC7,0x0D,0xFF,0xFF,0x66,
	0x2B,0xB6,0xB9,0xF8,0xB7,0xB3,0xB3,0xB3,	0xE7,0xD3,0xD2,0xED,0x4C,0x60,0x4C,0xE7,
	0x57,0x57,0xAE,0xD9,0xAB,0x63,0xE6,0xF7,	0xEA,0xCF,0x62,0x1A,0xFF,0xFF,0xFF,0xBB,
	0x66,0xBB,0x4F,0xEE,0xFC,0xEC,0xB5,0xB5,	0xB3,0xB3,0xF6,0x5D,0x30,0x3C,0x3C,0x4B,
	0xEC,0xD2,0xAF,0xAF,0xDA,0xEB,0xF8,0xB7,	0xD1,0xAD,0x56,0x10,0xFF,0xFF,0xFF,0xFF,
	0xB0,0xF3,0x38,0xDD,0xF2,0xFC,0xF7,0xEC,	0xB7,0xEC,0xE2,0x33,0x21,0x31,0x39,0x34,
	0xB1,0xED,0xD3,0xB3,0xEC,0xFC,0x4A,0x58,	0x65,0x62,0x48,0xFF,0xFF,0xFF,0xFF,0xFF,
	0xFF,0xB0,0xF3,0x38,0xEF,0xF2,0xFC,0xFC,	0xF8,0xF8,0xDD,0x18,0x17,0x20,0x17,0x33,
	0xB2,0xF7,0xF7,0xFC,0xFC,0xEE,0xDC,0xB6,	0x64,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0xFF,0xFF,0x58,0xBB,0xFE,0xFA,0xBD,0xF8,	0xFC,0xFC,0xFC,0x48,0x22,0x14,0x22,0x55,
	0xFC,0xFC,0xFC,0xF2,0xB9,0xDD,0xB8,0x49,	0x42,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0xFF,0xFF,0xFF,0xBB,0xB6,0xF0,0x02,0xEF,	0xBD,0xF9,0xFC,0xFC,0x66,0x1E,0x66,0xFC,
	0xFC,0xF2,0xBA,0xE2,0x4F,0xB8,0x49,0xFF,	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xDD,0x4F,0xBC,	0xFB,0xFA,0x01,0xF9,0xFC,0xFC,0xFC,0xF9,
	0x37,0xEF,0xFA,0xB8,0x2B,0xDC,0xFF,0xFF,	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xBA,	0xB2,0xB6,0xBC,0xFD,0xFD,0xFD,0xFD,0xFD,
	0xB8,0xB0,0xB1,0xBA,0xFF,0xFF,0xFF,0xFF,	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	0xE7,0xFF,0xFF,0xFF,0xC7,0xFF,0xFF,0xFF,	0x87,0xFF,0xFF,0xFF,0x07,0xFF,0xFF,0xFE,
	0x07,0xFF,0xFF,0xE0,0x03,0xFF,0xFF,0x00,	0x00,0xFF,0xFC,0x00,0x00,0x3F,0xF8,0x00,
	0x00,0x1F,0xF0,0x00,0x00,0x0F,0xE0,0x00,	0x00,0x07,0xC0,0x00,0x00,0x03,0x80,0x00,
	0x00,0x01,0x80,0x00,0x00,0x01,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x01,0x00,0x00,0x00,0x01,0x80,0x00,
	0x00,0x03,0x80,0x00,0x00,0x03,0xC0,0x00,	0x00,0x07,0xE0,0x00,0x00,0x0F,0xF0,0x00,
	0x00,0x1F,0xF8,0x00,0x00,0x7F,0xFE,0x00,	0x00,0xFF,0xFF,0x80,0x03,0xFF,0x28,0x00,
	0x00,0x00,0x10,0x00,0x00,0x00,0x20,0x00,	0x00,0x00,0x01,0x00,0x08,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x62,0x41,0x44,0x00,0x79,0x00,
	0x00,0x00,0x77,0x00,0x00,0x00,0x74,0x00,	0x00,0x00,0x6F,0x00,0x00,0x00,0x65,0x00,
	0x00,0x00,0x5D,0x00,0x00,0x00,0x8E,0x57,	0x4E,0x00,0x8C,0x3C,0x23,0x00,0x9A,0x45,
	0x28,0x00,0x90,0x76,0x6D,0x00,0xC5,0xB5,	0xAF,0x00,0x8F,0x2E,0x06,0x00,0x8C,0x3D,
	0x1E,0x00,0xC0,0x70,0x4F,0x00,0x68,0x44,	0x36,0x00,0x85,0x69,0x5E,0x00,0x89,0x6F,
	0x65,0x00,0xA6,0x58,0x36,0x00,0xA5,0x57,	0x36,0x00,0xA4,0x58,0x37,0x00,0x88,0x6A,
	0x5C,0x00,0x86,0x6A,0x5C,0x00,0x97,0x7E,	0x72,0x00,0x55,0x28,0x0E,0x00,0x5B,0x2D,
	0x14,0x00,0x5E,0x2F,0x15,0x00,0x93,0x75,	0x65,0x00,0xB3,0x93,0x82,0x00,0xBA,0xA5,
	0x9A,0x00,0xC2,0xAE,0xA3,0x00,0xBA,0xA7,	0x9D,0x00,0xD7,0xCE,0xC9,0x00,0xDD,0x8D,
	0x5C,0x00,0xE9,0x95,0x63,0x00,0xB4,0x81,	0x62,0x00,0x8A,0x64,0x4C,0x00,0x8F,0x6F,
	0x5B,0x00,0xD8,0xCB,0xC3,0x00,0x73,0x47,	0x29,0x00,0x94,0x63,0x41,0x00,0xF9,0xC8,
	0xA6,0x00,0xAF,0x97,0x87,0x00,0x00,0x00,	0x00,0x00,0x96,0x6B,0x4B,0x00,0xDF,0xA6,
	0x7B,0x00,0xAB,0x78,0x4D,0x00,0xD1,0xBD,	0xAD,0x00,0xC9,0xB6,0xA7,0x00,0xCF,0xC2,
	0xB7,0x00,0xF1,0xEB,0xE6,0x00,0xAF,0x87,	0x64,0x00,0xAD,0x8A,0x6B,0x00,0xCD,0xAF,
	0x94,0x00,0xF8,0xD6,0xB7,0x00,0xE2,0xCA,	0xB4,0x00,0xFF,0xF2,0xE6,0x00,0xE8,0xDE,
	0xD5,0x00,0xCE,0x9F,0x6F,0x00,0xAD,0x89,	0x64,0x00,0xD7,0xB6,0x94,0x00,0xCF,0xB2,
	0x95,0x00,0xC5,0xB2,0xA0,0x00,0xEA,0xE3,	0xDC,0x00,0xEC,0xE7,0xE2,0x00,0xF8,0xF7,
	0xF6,0x00,0xCA,0xAA,0x87,0x00,0xD2,0xB6,	0x99,0x00,0xF5,0xD6,0xB3,0x00,0xF5,0xD7,
	0xB7,0x00,0xE4,0xCA,0xAF,0x00,0xFF,0xE5,	0xCA,0x00,0xD6,0xC1,0xAA,0x00,0xFF,0xE7,
	0xCE,0x00,0xFF,0xE8,0xCF,0x00,0xEE,0xD8,	0xC1,0x00,0xEC,0xD7,0xC0,0x00,0xF2,0xDE,
	0xC9,0x00,0xFF,0xEB,0xD6,0x00,0xCF,0xBF,	0xAE,0x00,0xF8,0xE7,0xD5,0x00,0xFF,0xEE,
	0xDC,0x00,0xFF,0xEF,0xDE,0x00,0xFD,0xEF,	0xE0,0x00,0xDF,0xD4,0xC8,0x00,0xD0,0xC7,
	0xBD,0x00,0xFF,0xF6,0xEC,0x00,0xD8,0xB8,	0x93,0x00,0xFF,0xDC,0xB3,0x00,0xDA,0xBD,
	0x9B,0x00,0xF4,0xD6,0xB1,0x00,0xE7,0xCA,	0xA8,0x00,0xFF,0xE5,0xC6,0x00,0xED,0xD5,
	0xB8,0x00,0xFC,0xE3,0xC5,0x00,0xCB,0xB8,	0xA2,0x00,0xFF,0xE9,0xD0,0x00,0xFF,0xEC,
	0xD6,0x00,0xFF,0xEE,0xD9,0x00,0xE6,0xD9,	0xC9,0x00,0xFF,0xE7,0xC9,0x00,0xFF,0xEA,
	0xCF,0x00,0xFF,0xEB,0xD1,0x00,0xFF,0xEC,	0xD2,0x00,0xFF,0xED,0xD5,0x00,0xFF,0xF0,
	0xDC,0x00,0xFF,0xF0,0xDD,0x00,0xFF,0xF5,	0xE8,0x00,0xEF,0xE6,0xDA,0x00,0xFB,0xF8,
	0xF4,0x00,0xF6,0xF3,0xEF,0x00,0xFD,0xE4,	0xBF,0x00,0xFF,0xE7,0xC3,0x00,0xFD,0xF5,
	0xE9,0x00,0xFF,0xE9,0xC7,0x00,0xFF,0xEA,	0xC9,0x00,0xFF,0xEB,0xCC,0x00,0xE8,0xDB,
	0xC7,0x00,0xFF,0xF4,0xE3,0x00,0xF7,0xE5,	0xC4,0x00,0xFF,0xEE,0xCF,0x00,0xFF,0xF0,
	0xD7,0x00,0xF7,0xF4,0xEF,0x00,0xFF,0xED,	0xCB,0x00,0xFF,0xEF,0xD1,0x00,0xFF,0xF2,
	0xD9,0x00,0xFF,0xF4,0xDF,0x00,0xFF,0xF8,	0xEB,0x00,0xFF,0xFB,0xF3,0x00,0xFF,0xFA,
	0xEF,0x00,0xFF,0xFA,0xEB,0x00,0xFF,0xFA,	0xE5,0x00,0xFF,0xF8,0xD1,0x00,0xFF,0xF7,
	0xC4,0x00,0xFF,0xFD,0xEF,0x00,0xFF,0xFE,	0xEE,0x00,0xFF,0xFF,0xE2,0x00,0xFF,0xFF,
	0xED,0x00,0xFF,0xFF,0xF0,0x00,0xFF,0xFF,	0xF1,0x00,0xFF,0xFF,0xF3,0x00,0xFF,0xFF,
	0xF8,0x00,0xFF,0xFF,0xF9,0x00,0xFF,0xFF,	0xFA,0x00,0xFF,0xFF,0xFC,0x00,0xFF,0xFF,
	0xFE,0x00,0xE4,0xE5,0xE5,0x00,0xF2,0xF4,	0xF5,0x00,0xED,0xED,0xEF,0x00,0xFF,0xFF,
	0xFF,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x2C,0x2C,	0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x11,0x26,
	0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,	0x2C,0x2C,0x2C,0x2C,0x2C,0x2D,0x3B,0x2F,
	0x11,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,	0x2C,0x2C,0x2C,0x2C,0x2D,0x43,0x86,0x29,
	0x11,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,	0x2C,0x2C,0x1C,0x25,0x5C,0x59,0x59,0x34,
	0x19,0x10,0x11,0x2C,0x2C,0x2C,0x2C,0x2C,	0x20,0x20,0x44,0x5C,0x70,0x73,0x85,0x45,
	0x58,0x3C,0x1B,0x11,0x2C,0x2C,0x2C,0x31,	0x76,0x5E,0x75,0x37,0x0F,0x23,0x22,0x2E,
	0x71,0x5B,0x3D,0x28,0x12,0x2C,0x60,0x76,	0x4C,0x7D,0x79,0x89,0x24,0x02,0x0D,0x78,
	0x7C,0x71,0x46,0x5A,0x1A,0x2C,0x3F,0x76,	0x7A,0x68,0x4A,0x8A,0x3E,0x05,0x15,0x8B,
	0x65,0x5D,0x74,0x5F,0x35,0x0B,0x50,0x51,	0x7F,0x62,0x62,0x8D,0x36,0x04,0x14,0x8C,
	0x4B,0x48,0x66,0x67,0x47,0x16,0x32,0x54,	0x77,0x53,0x6A,0x96,0x49,0x03,0x13,0x8E,
	0x69,0x61,0x68,0x7E,0x4D,0x17,0x56,0x72,	0x80,0x39,0x87,0x6D,0x0E,0x06,0x09,0x92,
	0x6B,0x4F,0x63,0x84,0x4E,0x18,0x55,0x7B,	0x8F,0x57,0x8F,0x64,0x1D,0x1E,0x1F,0x8E,
	0x77,0x52,0x83,0x91,0x38,0x18,0x2C,0x93,	0x96,0x90,0x81,0x96,0x90,0x2A,0x88,0x96,
	0x6C,0x82,0x96,0x96,0x2B,0x2C,0x2C,0x41,	0x95,0x96,0x96,0x96,0x08,0x07,0x0A,0x96,
	0x96,0x96,0x96,0x30,0x2C,0x2C,0x2C,0x2C,	0x33,0x94,0x96,0x96,0x21,0x01,0x0C,0x96,
	0x96,0x92,0x3A,0x2C,0x2C,0x2C,0x2C,0x2C,	0x2C,0x2C,0x40,0x6F,0x96,0x96,0x96,0x6E,
	0x27,0x2C,0x2C,0x2C,0x2C,0x2C,0xFF,0x3F,	0xFF,0xFF,0xFE,0x1F,0x3E,0x76,0xFC,0x1F,
	0x80,0x74,0xF0,0x07,0x7A,0x78,0xC0,0x03,	0x78,0x73,0x80,0x01,0xBE,0x6B,0x00,0x01,
	0x07,0xFF,0x00,0x00,0xFF,0xFF,0x00,0x00,	0xFF,0xFF,0x00,0x00,0x84,0x80,0x00,0x00,
	0x83,0x82,0x00,0x00,0xDE,0xDE,0x80,0x01,	0x85,0xC0,0x80,0x03,0x7B,0xBF,0xC0,0x07,
	0x0F,0x06,0xF0,0x1F,0xFF,0xFF
};
#endif //_MGINCORE_RES

