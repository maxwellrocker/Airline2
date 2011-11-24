#ifndef LUA_ACCESS_H
#define LUA_ACCESS_H

#include "../include/airplane.h"

extern "C"{
    #include "lua.h"
    #include "lualib.h"
    #include "lauxlib.h"
}

class lua_access
{
public:
    lua_access();
    virtual ~lua_access();

    static int newairplane(lua_State* L);
    static int getSeat(lua_State* L);
    static int getRange(lua_State* L);
    static int getName(lua_State* L);
    static int setSeat(lua_State* L);
    static int setRange(lua_State* L);
    static int setName(lua_State* L);

protected:

private:

};

#endif // LUA_ACCESS_H
