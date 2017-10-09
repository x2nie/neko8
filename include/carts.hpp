#ifndef neko_carts_hpp
#define neko_carts_hpp

#include <LuaJIT/lua.hpp>
#include <neko.hpp>

typedef struct neko_cart {
	char *code;
	lua_State *lua;
	lua_State *thread;
} neko_cart;

typedef struct neko_carts : neko_state {
	neko_carts(neko *machine);

	void escape(neko *machine);
	void event(neko *machine, SDL_Event *);
	void render(neko *machine);

	bool checkForLuaFunction(neko *machine, const char *name);
	void triggerCallback(neko *machine, const char *callback); // TODO: add args
	neko_cart *createNew(neko *machine);
	void run(neko *machine);
	void load(neko *machine, char *name);
	void save(neko *machine, char *name);

	neko_cart *loaded;
} neko_carts;

#endif