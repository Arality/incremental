#include "util.hpp"

namespace util{

/**
 * @brief Construct a new Delta Time:: Delta Time object
 * 
 */
DeltaTime::DeltaTime(){
    clock.restart();
}

/**
 * @brief Get the elapsed delta time since last called
 * 
 * @return float 
 */
float DeltaTime::getDeltaTime(){
    const sf::Time elapsed = clock.restart();
    const float sec = elapsed.asSeconds();
    return sec;
}

};
