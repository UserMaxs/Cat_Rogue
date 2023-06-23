#include <SFML/Graphics.hpp>
#include "Player.hpp"


int main()
{
    Player Player;

    sf::RenderWindow window(sf::VideoMode(900, 600), "SFML works!");
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        Player.Draw(&window);
        window.display();
    }

    return 0;
}