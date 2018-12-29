/******************************************************************************
 *
 * Copyright(c) 2009-2014  Realtek Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * The full GNU General Public License is included in this distribution in the
 * file called LICENSE.
 *
 * Contact Information:
 * wlanfae <wlanfae@realtek.com>
 * Realtek Corporation, No. 2, Innovation Road II, Hsinchu Science Park,
 * Hsinchu 300, Taiwan.
 *
 * Created on  2010/ 5/18,  1:41
 *
 * Larry Finger <Larry.Finger@lwfinger.net>
 *
 *****************************************************************************/

#include <linux/kernel.h>
#include "table.h"

u32 RTL8723BEPHY_REG_1TARRAY[] = {
		0x800, 0x80040000,
		0x804, 0x00000003,
		0x808, 0x0000FC00,
		0x80C, 0x0000000A,
		0x810, 0x10001331,
		0x814, 0x020C3D10,
		0x818, 0x02200385,
		0x81C, 0x00000000,
		0x820, 0x01000100,
		0x824, 0x00190204,
		0x828, 0x00000000,
		0x82C, 0x00000000,
		0x830, 0x00000000,
		0x834, 0x00000000,
		0x838, 0x00000000,
		0x83C, 0x00000000,
		0x840, 0x00010000,
		0x844, 0x00000000,
		0x848, 0x00000000,
		0x84C, 0x00000000,
		0x850, 0x00000000,
		0x854, 0x00000000,
		0x858, 0x569A11A9,
		0x85C, 0x01000014,
		0x860, 0x66F60110,
		0x864, 0x061F0649,
		0x868, 0x00000000,
		0x86C, 0x27272700,
		0x870, 0x07000760,
		0x874, 0x25004000,
		0x878, 0x00000808,
		0x87C, 0x00000000,
		0x880, 0xB0000C1C,
		0x884, 0x00000001,
		0x888, 0x00000000,
		0x88C, 0xCCC000C0,
		0x890, 0x00000800,
		0x894, 0xFFFFFFFE,
		0x898, 0x40302010,
		0x89C, 0x00706050,
		0x900, 0x00000000,
		0x904, 0x00000023,
		0x908, 0x00000000,
		0x90C, 0x81121111,
		0x910, 0x00000002,
		0x914, 0x00000201,
		0xA00, 0x00D047C8,
		0xA04, 0x80FF800C,
		0xA08, 0x8C838300,
		0xA0C, 0x2E7F120F,
		0xA10, 0x9500BB78,
		0xA14, 0x1114D028,
		0xA18, 0x00881117,
		0xA1C, 0x89140F00,
		0xA20, 0x1A1B0000,
		0xA24, 0x090E1317,
		0xA28, 0x00000204,
		0xA2C, 0x00D30000,
		0xA70, 0x101FBF00,
		0xA74, 0x00000007,
		0xA78, 0x00000900,
		0xA7C, 0x225B0606,
		0xA80, 0x21806490,
		0xB2C, 0x00000000,
		0xC00, 0x48071D40,
		0xC04, 0x03A05611,
		0xC08, 0x000000E4,
		0xC0C, 0x6C6C6C6C,
		0xC10, 0x08800000,
		0xC14, 0x40000100,
		0xC18, 0x08800000,
		0xC1C, 0x40000100,
		0xC20, 0x00000000,
		0xC24, 0x00000000,
		0xC28, 0x00000000,
		0xC2C, 0x00000000,
		0xC30, 0x69E9AC44,
		0xC34, 0x469652AF,
		0xC38, 0x49795994,
		0xC3C, 0x0A97971C,
		0xC40, 0x1F7C403F,
		0xC44, 0x000100B7,
		0xC48, 0xEC020107,
		0xC4C, 0x007F037F,
		0xC50, 0x69553420,
		0xC54, 0x43BC0094,
		0xC58, 0x00013147,
		0xC5C, 0x00250492,
		0xC60, 0x00000000,
		0xC64, 0x7112848B,
		0xC68, 0x47C00BFF,
		0xC6C, 0x00000036,
		0xC70, 0x2C7F000D,
		0xC74, 0x020610DB,
		0xC78, 0x0000001F,
		0xC7C, 0x00B91612,
		0xC80, 0x390000E4,
		0xC84, 0x21F60000,
		0xC88, 0x40000100,
		0xC8C, 0x20200000,
		0xC90, 0x00020E1A,
		0xC94, 0x00000000,
		0xC98, 0x00020E1A,
		0xC9C, 0x00007F7F,
		0xCA0, 0x00000000,
		0xCA4, 0x000300A0,
		0xCA8, 0x00000000,
		0xCAC, 0x00000000,
		0xCB0, 0x00000000,
		0xCB4, 0x00000000,
		0xCB8, 0x00000000,
		0xCBC, 0x28000000,
		0xCC0, 0x00000000,
		0xCC4, 0x00000000,
		0xCC8, 0x00000000,
		0xCCC, 0x00000000,
		0xCD0, 0x00000000,
		0xCD4, 0x00000000,
		0xCD8, 0x64B22427,
		0xCDC, 0x00766932,
		0xCE0, 0x00222222,
		0xCE4, 0x00000000,
		0xCE8, 0x37644302,
		0xCEC, 0x2F97D40C,
		0xD00, 0x00000740,
		0xD04, 0x40020401,
		0xD08, 0x0000907F,
		0xD0C, 0x20010201,
		0xD10, 0xA0633333,
		0xD14, 0x3333BC53,
		0xD18, 0x7A8F5B6F,
		0xD2C, 0xCC979975,
		0xD30, 0x00000000,
		0xD34, 0x80608000,
		0xD38, 0x00000000,
		0xD3C, 0x00127353,
		0xD40, 0x00000000,
		0xD44, 0x00000000,
		0xD48, 0x00000000,
		0xD4C, 0x00000000,
		0xD50, 0x6437140A,
		0xD54, 0x00000000,
		0xD58, 0x00000282,
		0xD5C, 0x30032064,
		0xD60, 0x4653DE68,
		0xD64, 0x04518A3C,
		0xD68, 0x00002101,
		0xD6C, 0x2A201C16,
		0xD70, 0x1812362E,
		0xD74, 0x322C2220,
		0xD78, 0x000E3C24,
		0xE00, 0x2D2D2D2D,
		0xE04, 0x2D2D2D2D,
		0xE08, 0x0390272D,
		0xE10, 0x2D2D2D2D,
		0xE14, 0x2D2D2D2D,
		0xE18, 0x2D2D2D2D,
		0xE1C, 0x2D2D2D2D,
		0xE28, 0x00000000,
		0xE30, 0x1000DC1F,
		0xE34, 0x10008C1F,
		0xE38, 0x02140102,
		0xE3C, 0x681604C2,
		0xE40, 0x01007C00,
		0xE44, 0x01004800,
		0xE48, 0xFB000000,
		0xE4C, 0x000028D1,
		0xE50, 0x1000DC1F,
		0xE54, 0x10008C1F,
		0xE58, 0x02140102,
		0xE5C, 0x28160D05,
		0xE60, 0x00000008,
		0xE68, 0x001B2556,
		0xE6C, 0x00C00096,
		0xE70, 0x00C00096,
		0xE74, 0x01000056,
		0xE78, 0x01000014,
		0xE7C, 0x01000056,
		0xE80, 0x01000014,
		0xE84, 0x00C00096,
		0xE88, 0x01000056,
		0xE8C, 0x00C00096,
		0xED0, 0x00C00096,
		0xED4, 0x00C00096,
		0xED8, 0x00C00096,
		0xEDC, 0x000000D6,
		0xEE0, 0x000000D6,
		0xEEC, 0x01C00016,
		0xF14, 0x00000003,
		0xF4C, 0x00000000,
		0xF00, 0x00000300,
		0x820, 0x01000100,
		0x800, 0x83040000,

};

u32 RTL8723BEPHY_REG_1TARRAYLEN = ARRAY_SIZE(RTL8723BEPHY_REG_1TARRAY);

u32 RTL8723BEPHY_REG_ARRAY_PG[] = {
	0, 0, 0, 0x00000e08, 0x0000ff00, 0x00003800,
	0, 0, 0, 0x0000086c, 0xffffff00, 0x32343600,
	0, 0, 0, 0x00000e00, 0xffffffff, 0x40424444,
	0, 0, 0, 0x00000e04, 0xffffffff, 0x28323638,
	0, 0, 0, 0x00000e10, 0xffffffff, 0x38404244,
	0, 0, 0, 0x00000e14, 0xffffffff, 0x26303436
};

u32 RTL8723BEPHY_REG_ARRAY_PGLEN = ARRAY_SIZE(RTL8723BEPHY_REG_ARRAY_PG);

u32 RTL8723BE_RADIOA_1TARRAY[] = {
		0x000, 0x00010000,
		0x0B0, 0x000DFFE0,
		0x0FE, 0x00000000,
		0x0FE, 0x00000000,
		0x0FE, 0x00000000,
		0x0B1, 0x00000018,
		0x0FE, 0x00000000,
		0x0FE, 0x00000000,
		0x0FE, 0x00000000,
		0x0B2, 0x00084C00,
		0x0B5, 0x0000D2CC,
		0x0B6, 0x000925AA,
		0x0B7, 0x00000010,
		0x0B8, 0x0000907F,
		0x05C, 0x00000002,
		0x07C, 0x00000002,
		0x07E, 0x00000005,
		0x08B, 0x0006FC00,
		0x0B0, 0x000FF9F0,
		0x01C, 0x000739D2,
		0x01E, 0x00000000,
		0x0DF, 0x00000780,
		0x050, 0x00067435,
	0x80002000,	0x00000000,	0x40000000,	0x00000000,
		0x051, 0x0006F10E,
		0x052, 0x000007D3,
	0x90003000,	0x00000000,	0x40000000,	0x00000000,
		0x051, 0x0006F10E,
		0x052, 0x000007D3,
	0x90004000,	0x00000000,	0x40000000,	0x00000000,
		0x051, 0x0006F10E,
		0x052, 0x000007D3,
	0xA0000000,	0x00000000,
		0x051, 0x0006B04E,
		0x052, 0x000007D2,
	0xB0000000,	0x00000000,
		0x053, 0x00000000,
		0x054, 0x00050400,
		0x055, 0x0004026E,
		0x0DD, 0x0000004C,
		0x070, 0x00067435,
	0x80002000,	0x00000000,	0x40000000,	0x00000000,
		0x071, 0x0006F10E,
		0x072, 0x000007D3,
	0x90003000,	0x00000000,	0x40000000,	0x00000000,
		0x071, 0x0006F10E,
		0x072, 0x000007D3,
	0x90004000,	0x00000000,	0x40000000,	0x00000000,
		0x071, 0x0006F10E,
		0x072, 0x000007D3,
	0xA0000000,	0x00000000,
		0x071, 0x0006B04E,
		0x072, 0x000007D2,
	0xB0000000,	0x00000000,
		0x073, 0x00000000,
		0x074, 0x00050400,
		0x075, 0x0004026E,
		0x0EF, 0x00000100,
		0x034, 0x0000ADD7,
		0x035, 0x00005C00,
		0x034, 0x00009DD4,
		0x035, 0x00005000,
		0x034, 0x00008DD1,
		0x035, 0x00004400,
		0x034, 0x00007DCE,
		0x035, 0x00003800,
		0x034, 0x00006CD1,
		0x035, 0x00004400,
		0x034, 0x00005CCE,
		0x035, 0x00003800,
		0x034, 0x000048CE,
		0x035, 0x00004400,
		0x034, 0x000034CE,
		0x035, 0x00003800,
		0x034, 0x00002451,
		0x035, 0x00004400,
		0x034, 0x0000144E,
		0x035, 0x00003800,
		0x034, 0x00000051,
		0x035, 0x00004400,
		0x0EF, 0x00000000,
		0x0EF, 0x00000100,
		0x0ED, 0x00000010,
		0x044, 0x0000ADD7,
		0x044, 0x00009DD4,
		0x044, 0x00008DD1,
		0x044, 0x00007DCE,
		0x044, 0x00006CC1,
		0x044, 0x00005CCE,
		0x044, 0x000044D1,
		0x044, 0x000034CE,
		0x044, 0x00002451,
		0x044, 0x0000144E,
		0x044, 0x00000051,
		0x0EF, 0x00000000,
		0x0ED, 0x00000000,
		0x07F, 0x00020080,
		0x0EF, 0x00002000,
		0x03B, 0x000380EF,
		0x03B, 0x000302FE,
		0x03B, 0x00028CE6,
		0x03B, 0x000200BC,
		0x03B, 0x000188A5,
		0x03B, 0x00010FBC,
		0x03B, 0x00008F71,
		0x03B, 0x00000900,
		0x0EF, 0x00000000,
		0x0ED, 0x00000001,
		0x040, 0x000380EF,
		0x040, 0x000302FE,
		0x040, 0x00028CE6,
		0x040, 0x000200BC,
		0x040, 0x000188A5,
		0x040, 0x00010FBC,
		0x040, 0x00008F71,
		0x040, 0x00000900,
		0x0ED, 0x00000000,
		0x082, 0x00080000,
		0x083, 0x00008000,
		0x084, 0x00048D80,
		0x085, 0x00068000,
		0x0A2, 0x00080000,
		0x0A3, 0x00008000,
		0x0A4, 0x00048D80,
		0x0A5, 0x00068000,
		0x0ED, 0x00000002,
		0x0EF, 0x00000002,
		0x056, 0x00000032,
		0x076, 0x00000032,
		0x001, 0x00000780,

};

u32 RTL8723BE_RADIOA_1TARRAYLEN = ARRAY_SIZE(RTL8723BE_RADIOA_1TARRAY);

u32 RTL8723BEMAC_1T_ARRAY[] = {
		0x02F, 0x00000030,
		0x035, 0x00000000,
		0x039, 0x00000008,
		0x064, 0x00000000,
		0x067, 0x00000020,
		0x421, 0x0000000F,
		0x428, 0x0000000A,
		0x429, 0x00000010,
		0x430, 0x00000000,
		0x431, 0x00000000,
		0x432, 0x00000000,
		0x433, 0x00000001,
		0x434, 0x00000004,
		0x435, 0x00000005,
		0x436, 0x00000007,
		0x437, 0x00000008,
		0x43C, 0x00000004,
		0x43D, 0x00000005,
		0x43E, 0x00000007,
		0x43F, 0x00000008,
		0x440, 0x0000005D,
		0x441, 0x00000001,
		0x442, 0x00000000,
		0x444, 0x00000010,
		0x445, 0x00000000,
		0x446, 0x00000000,
		0x447, 0x00000000,
		0x448, 0x00000000,
		0x449, 0x000000F0,
		0x44A, 0x0000000F,
		0x44B, 0x0000003E,
		0x44C, 0x00000010,
		0x44D, 0x00000000,
		0x44E, 0x00000000,
		0x44F, 0x00000000,
		0x450, 0x00000000,
		0x451, 0x000000F0,
		0x452, 0x0000000F,
		0x453, 0x00000000,
		0x456, 0x0000005E,
		0x460, 0x00000066,
		0x461, 0x00000066,
		0x4C8, 0x000000FF,
		0x4C9, 0x00000008,
		0x4CC, 0x000000FF,
		0x4CD, 0x000000FF,
		0x4CE, 0x00000001,
		0x500, 0x00000026,
		0x501, 0x000000A2,
		0x502, 0x0000002F,
		0x503, 0x00000000,
		0x504, 0x00000028,
		0x505, 0x000000A3,
		0x506, 0x0000005E,
		0x507, 0x00000000,
		0x508, 0x0000002B,
		0x509, 0x000000A4,
		0x50A, 0x0000005E,
		0x50B, 0x00000000,
		0x50C, 0x0000004F,
		0x50D, 0x000000A4,
		0x50E, 0x00000000,
		0x50F, 0x00000000,
		0x512, 0x0000001C,
		0x514, 0x0000000A,
		0x516, 0x0000000A,
		0x525, 0x0000004F,
		0x550, 0x00000010,
		0x551, 0x00000010,
		0x559, 0x00000002,
		0x55C, 0x00000050,
		0x55D, 0x000000FF,
		0x605, 0x00000030,
		0x608, 0x0000000E,
		0x609, 0x0000002A,
		0x620, 0x000000FF,
		0x621, 0x000000FF,
		0x622, 0x000000FF,
		0x623, 0x000000FF,
		0x624, 0x000000FF,
		0x625, 0x000000FF,
		0x626, 0x000000FF,
		0x627, 0x000000FF,
		0x638, 0x00000050,
		0x63C, 0x0000000A,
		0x63D, 0x0000000A,
		0x63E, 0x0000000E,
		0x63F, 0x0000000E,
		0x640, 0x00000040,
		0x642, 0x00000040,
		0x643, 0x00000000,
		0x652, 0x000000C8,
		0x66E, 0x00000005,
		0x700, 0x00000021,
		0x701, 0x00000043,
		0x702, 0x00000065,
		0x703, 0x00000087,
		0x708, 0x00000021,
		0x709, 0x00000043,
		0x70A, 0x00000065,
		0x70B, 0x00000087,
		0x765, 0x00000018,
		0x76E, 0x00000004,

};

u32 RTL8723BEMAC_1T_ARRAYLEN = ARRAY_SIZE(RTL8723BEMAC_1T_ARRAY);

u32 RTL8723BEAGCTAB_1TARRAY[] = {
		0xC78, 0xFD000001,
		0xC78, 0xFC010001,
		0xC78, 0xFB020001,
		0xC78, 0xFA030001,
		0xC78, 0xF9040001,
		0xC78, 0xF8050001,
		0xC78, 0xF7060001,
		0xC78, 0xF6070001,
		0xC78, 0xF5080001,
		0xC78, 0xF4090001,
		0xC78, 0xF30A0001,
		0xC78, 0xF20B0001,
		0xC78, 0xF10C0001,
		0xC78, 0xF00D0001,
		0xC78, 0xEF0E0001,
		0xC78, 0xEE0F0001,
		0xC78, 0xED100001,
		0xC78, 0xEC110001,
		0xC78, 0xEB120001,
		0xC78, 0xEA130001,
		0xC78, 0xE9140001,
		0xC78, 0xE8150001,
		0xC78, 0xE7160001,
		0xC78, 0xE6170001,
		0xC78, 0xE5180001,
		0xC78, 0xE4190001,
		0xC78, 0xE31A0001,
		0xC78, 0xA51B0001,
		0xC78, 0xA41C0001,
		0xC78, 0xA31D0001,
		0xC78, 0x671E0001,
		0xC78, 0x661F0001,
		0xC78, 0x65200001,
		0xC78, 0x64210001,
		0xC78, 0x63220001,
		0xC78, 0x4A230001,
		0xC78, 0x49240001,
		0xC78, 0x48250001,
		0xC78, 0x47260001,
		0xC78, 0x46270001,
		0xC78, 0x45280001,
		0xC78, 0x44290001,
		0xC78, 0x432A0001,
		0xC78, 0x422B0001,
		0xC78, 0x292C0001,
		0xC78, 0x282D0001,
		0xC78, 0x272E0001,
		0xC78, 0x262F0001,
		0xC78, 0x0A300001,
		0xC78, 0x09310001,
		0xC78, 0x08320001,
		0xC78, 0x07330001,
		0xC78, 0x06340001,
		0xC78, 0x05350001,
		0xC78, 0x04360001,
		0xC78, 0x03370001,
		0xC78, 0x02380001,
		0xC78, 0x01390001,
		0xC78, 0x013A0001,
		0xC78, 0x013B0001,
		0xC78, 0x013C0001,
		0xC78, 0x013D0001,
		0xC78, 0x013E0001,
		0xC78, 0x013F0001,
		0xC78, 0xFC400001,
		0xC78, 0xFB410001,
		0xC78, 0xFA420001,
		0xC78, 0xF9430001,
		0xC78, 0xF8440001,
		0xC78, 0xF7450001,
		0xC78, 0xF6460001,
		0xC78, 0xF5470001,
		0xC78, 0xF4480001,
		0xC78, 0xF3490001,
		0xC78, 0xF24A0001,
		0xC78, 0xF14B0001,
		0xC78, 0xF04C0001,
		0xC78, 0xEF4D0001,
		0xC78, 0xEE4E0001,
		0xC78, 0xED4F0001,
		0xC78, 0xEC500001,
		0xC78, 0xEB510001,
		0xC78, 0xEA520001,
		0xC78, 0xE9530001,
		0xC78, 0xE8540001,
		0xC78, 0xE7550001,
		0xC78, 0xE6560001,
		0xC78, 0xE5570001,
		0xC78, 0xE4580001,
		0xC78, 0xE3590001,
		0xC78, 0xA65A0001,
		0xC78, 0xA55B0001,
		0xC78, 0xA45C0001,
		0xC78, 0xA35D0001,
		0xC78, 0x675E0001,
		0xC78, 0x665F0001,
		0xC78, 0x65600001,
		0xC78, 0x64610001,
		0xC78, 0x63620001,
		0xC78, 0x62630001,
		0xC78, 0x61640001,
		0xC78, 0x48650001,
		0xC78, 0x47660001,
		0xC78, 0x46670001,
		0xC78, 0x45680001,
		0xC78, 0x44690001,
		0xC78, 0x436A0001,
		0xC78, 0x426B0001,
		0xC78, 0x286C0001,
		0xC78, 0x276D0001,
		0xC78, 0x266E0001,
		0xC78, 0x256F0001,
		0xC78, 0x24700001,
		0xC78, 0x09710001,
		0xC78, 0x08720001,
		0xC78, 0x07730001,
		0xC78, 0x06740001,
		0xC78, 0x05750001,
		0xC78, 0x04760001,
		0xC78, 0x03770001,
		0xC78, 0x02780001,
		0xC78, 0x01790001,
		0xC78, 0x017A0001,
		0xC78, 0x017B0001,
		0xC78, 0x017C0001,
		0xC78, 0x017D0001,
		0xC78, 0x017E0001,
		0xC78, 0x017F0001,
		0xC50, 0x69553422,
		0xC50, 0x69553420,
		0x824, 0x00390204,

};

u32 RTL8723BEAGCTAB_1TARRAYLEN = ARRAY_SIZE(RTL8723BEAGCTAB_1TARRAY);
