#pragma once

#include <lua.hpp>

class LuaWrapper{
    public:
        LuaWrapper(){
            lua_State* L = luaL_newstate();
        }
        
        ~LuaWrapper(){
            lua_close(L);
        }
    
    private:
        lua_State* L;
};