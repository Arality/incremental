// #include <bits/ranges_base.h>
// #include <string>
// #include <iostream>
// #include <chrono>
// #include "player.hpp"
// #include "source.hpp"
#include <thread>
#include <chrono>

#include "SFML/Window/Window.hpp"
#include "components.hpp"
#include "entt/entity/fwd.hpp"
#include "lauxlib.h"
#include "systems.hpp"
#include <entt/entt.hpp>
#include <cmath>
#include "sfml.hpp"
#include <SFML/Window.hpp>
// #include "lua_wrapper.hpp"
#include <lua.hpp>


void setup(entt::registry& registry){
    std::cout.precision(3);
    const auto entity = registry.create();
    registry.emplace<Components::source>(entity, (unsigned int) 1, 1.0, 1.0);
    const auto player = registry.create();
    registry.emplace<Components::player_score>(player, 0.0);
}

//Testing Main
int main(){
    sf::Window window(sf::VideoMode(800, 600), "My window");
    SfmlManager sfml = SfmlManager(window);
    util::DeltaTime deltaTime = util::DeltaTime();
    entt::registry registry;
    setup(registry);

    while(!Components::Global::gameOver){
        const float delta = deltaTime.getDeltaTime();
        updateSource(registry, delta);
        updateView(registry);
        endGame(registry);
    }

    // LuaWrapper lua = LuaWrapper();
    lua_State* L = luaL_newstate();
    lua_close(L);
}