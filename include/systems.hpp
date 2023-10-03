#pragma once 

#include "components.hpp"
#include <entt/entity/registry.hpp>
#include <iostream>
#include <GLFW/glfw3.h>

class DeltaTime{
    public:
        DeltaTime();
        float getDeltaTime();
    private:
        float lastTick;
};

void update(const entt::registry& registry, DeltaTime& delta);
void endGame(entt::registry& registry);
void updateView(entt::registry& registry);
