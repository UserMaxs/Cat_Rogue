#include <SFML/Graphics.hpp>
#include <thread>
#include <chrono>
#include "Player.hpp"
#include "Map.hpp"

using namespace std;

int main()
{
    Player player;
    Map map;

    sf::RenderWindow window(sf::VideoMode(900, 600), "SFML works!");
    while (window.isOpen())
    {
        sf::Event event;
        if (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) window.close();
        }

        player.Walking();

        window.clear();
        map.Draw(&window);
        player.Draw(&window);
        window.display();

        this_thread::sleep_for(chrono::milliseconds(5));
    }

    return 0;
}