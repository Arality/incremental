#pragma once 

#include "components.hpp"
#include <entt/entity/registry.hpp>
#include <iostream>
#include "components.hpp"
#include "util.hpp"

/**
 * @brief Calculates all source and add's to players score
 * 
 * @param registry 
 * @param delta 
 */
void updateSource(entt::registry& registry, const float delta);

/**
 * @brief Dev tool to end the game at specified intervals
 * 
 * @param registry 
 */
void endGame(const entt::registry& registry);

/**
 * @brief Displayer player score to the screen
 * 
 * @param registry 
 */
void updateView(const entt::registry& registry);
