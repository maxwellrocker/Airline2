#include "../include/lua_access.h"

/*
extern "C"{
    #include "lua.h"
    #include "lualib.h"
    #include "lauxlib.h"
}
*/

int ShowMessage(lua_State* L)
{
    const char* Message = lua_tostring(L, 1);
    lua_pushstring(L, Message);

    return 1;
}

static const struct luaL_Reg airplanelib[] = {
    {"new",     lua_access::newairplane},
    {"getseat", lua_access::getSeat},
    {"getrange",lua_access::getRange},
    {"getname", lua_access::getName},
    {"setseat", lua_access::setSeat},
    {"setrange",lua_access::setRange},
    {"setname", lua_access::setName},
    {NULL, NULL}
};

int main()
{
    //---------------------open lua---------------------
    lua_State* L = luaL_newstate();
	luaL_openlibs(L);

    lua_register(L, "ShowMessage", ShowMessage);
    luaL_register(L, "airplane", airplanelib);
    luaL_dofile(L, "script.lua");

    lua_close(L);
    //---------------------close lua--------------------

    return 0;
}
