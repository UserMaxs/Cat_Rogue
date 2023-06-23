#include <SFML/Graphics.hpp>
#include <thread>
#include <chrono>
#include "Player.hpp"

using namespace std;

int main()
{
    Player player;

    sf::RenderWindow window(sf::VideoMode(900, 600), "SFML works!");
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
                player.cat.move(1, 0);
        }


        window.clear();
        player.Draw(&window);
        window.display();

        this_thread::sleep_for(chrono::milliseconds(500));
    }

    return 0;
}