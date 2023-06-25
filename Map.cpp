#include "Map.hpp"

Map::Map()
{
	map = sf::RectangleShape(sf::Vector2f(900, 600));
	map.setFillColor(sf::Color::White);
}

void Map::Draw(sf::RenderWindow* window)
{
	window->draw(map);
}
