#pragma once

#include <iostream>
#include <cstdlib>
#include <sys/types.h>
#include <entt/entt.hpp>
#include <SFML/System.hpp>


namespace util {

/**
 * @brief Tracks delta time
 * 
 */
    class DeltaTime{
        public:
            DeltaTime();
            float getDeltaTime();
        private:
            sf::Clock clock;
    };
}