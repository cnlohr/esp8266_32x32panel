//Copyright 2015 <>< Charles Lohr, See LICENSE file.
//WS2812 sender that abuses the I2S interface on the WS2812.

#ifndef _WS2812I2S_TEST
#define _WS2812I2S_TEST

//Stuff that should be for the header:

#include <c_types.h>

//NOTE: Blocksize MUST be divisible by 4.  Cannot exceed 4092
//Each LED takes up 12 block bytes in WS2812_FOUR_SAMPLE
//Or 9 block bytes in WS2812_THREE_SAMPLE
#define WS_BLOCKSIZE 4000
#define DMABUFFERDEPTH 3

void ICACHE_FLASH_ATTR i2s_init();

#endif

