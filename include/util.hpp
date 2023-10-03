#pragma once

#include <GLFW/glfw3.h>
#include <iostream>
#include <cstdlib>
#include <sys/types.h>
#include <entt/entt.hpp>


namespace util {

    class GlfwWrapper{
        public:
            GlfwWrapper();
            ~GlfwWrapper();
    };

    template<typename T>
    void getEntity(const entt::registry& registry, const T entity);

    template<typename T>
    void getEntityList(const entt::registry& registry, const T entity);
}