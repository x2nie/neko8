#ifndef neko_hpp
#define neko_hpp

#include <config.hpp>
#include <ram.hpp>
#include <carts.hpp>
#include <graphics.hpp>

typedef enum neko_state {
	STATE_BOOTING,
	STATE_CONSOLE,
	STATE_CODE_EDITOR,
	STATE_RUNNING_CART
} neko_state;

typedef struct neko {
	neko_ram *ram;
	neko_graphics *graphics;
	neko_carts *carts;
	neko_state state;
	neko_config *config;
} neko;

// Global neko instance
extern neko machine;

// Inits neko
void initNeko(neko_config *config);
void renderNeko();

#endif