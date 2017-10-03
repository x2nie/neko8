#ifndef neko_config_hpp
#define neko_config_hpp

#include <bitset>

#define NOT(o) o == NULL
#define CONFIG_NAME "config.lua"

typedef std::bitset<8> byte;

typedef struct neko_config {
	// Canvas settings
	unsigned short canvasWidth = 224;
	unsigned short canvasHeight = 128;
	unsigned short canvasScale = 3;
	// Window settings
	unsigned short windowWidth = 672;
	unsigned short windowHeight = 384;

	unsigned short palette[16][3] = {
		{ 0, 0, 0 },
		{ 29, 43, 83 },
		{ 126, 37, 83 },
		{ 0, 135, 81 },
		{ 171, 82, 54 },
		{ 95, 87, 79 },
		{ 194, 195, 199 },
		{ 255, 241, 232 },
		{ 255, 0, 77 },
		{ 255, 163, 0 },
		{ 255, 240, 36 },
		{ 0, 231, 86 },
		{ 41, 173, 255 },
		{ 131, 118, 15, },
		{ 255, 119, 168 },
		{ 255, 204, 170 }
	};
} neko_config;

#endif