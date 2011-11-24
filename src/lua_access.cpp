#include "../include/lua_access.h"

#define BITS_PER_WORD (CHAR_BIT*sizeof(unsigned int))
#define I_WORD(i) ((unsigned int)(i) / BITS_PER_WORD)

lua_access::lua_access()
{
    //ctor
}

lua_access::~lua_access()
{
    //dtor
}

int lua_access::newairplane(lua_State* L)
{
    int         _seat;
    int         _range;
    string      _name;
    //
    size_t      nbytes;
    airplane*   _airplane;

    _seat = luaL_checkint(L, 1);
    _range= luaL_checkint(L, 2);
    _name = luaL_checkstring(L, 3);
    nbytes= sizeof(airplane) + sizeof(int)*I_WORD(2) + sizeof(_name);
    _airplane = (airplane*)lua_newuserdata(L, nbytes);

    _airplane->setSeat(_seat);
    _airplane->setRange(_range);
    _airplane->setName(_name);

    return 1;
}

int lua_access::getSeat(lua_State* L)
{
    airplane* a = (airplane*)lua_touserdata(L, 1);
    lua_pushinteger(L, a->getSeat());

    return 1;
}

int lua_access::getRange(lua_State* L)
{
    airplane* a = (airplane*)lua_touserdata(L, 1);
    lua_pushinteger(L, a->getRange());

    return 1;
}

int lua_access::getName(lua_State* L)
{
    airplane* a = (airplane*)lua_touserdata(L, 1);
    lua_pushstring(L, a->getName().c_str());

    return 1;
}

int lua_access::setSeat(lua_State* L)
{
    airplane* a = (airplane*)lua_touserdata(L, 1);
    int _seat   = luaL_checkint(L, 2);

    a->setSeat(_seat);

    return 1;
}

int lua_access::setRange(lua_State* L)
{
    airplane* a = (airplane*)lua_touserdata(L, 1);
    int _range  = luaL_checkint(L, 2);

    a->setRange(_range);

    return 1;
}

int lua_access::setName(lua_State* L)
{
    airplane* a = (airplane*)lua_touserdata(L, 1);
    string _name = luaL_checkstring(L, 2);

    a->setName(_name);

    return 1;
}
