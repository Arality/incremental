#include "sfml.hpp"

SfmlManager::SfmlManager(sf::Window& window):window(window){};

SfmlManager::~SfmlManager(){
    window.close();
}