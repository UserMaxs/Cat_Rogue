#include <SFML/Graphics.hpp>

class Map
{
	sf::RectangleShape map;
	sf::Texture map_tex;

public:
	Map();
	void Draw(sf::RenderWindow* window);
};