#include <SFML/Window.hpp>

class SfmlManager{
    public:
        SfmlManager(sf::Window& window);
        ~SfmlManager();
    private:
        sf::Window& window;
};