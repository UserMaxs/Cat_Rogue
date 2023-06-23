#include <SFML/Graphics.hpp>
#include "Player.hpp"



	
class Player
{
	bool Cat_stands;
	bool Died;
	sf::Texture catTexture;
	sf::Sprite cat;

public:
	Player()
	{
		catTexture.loadFromFile("resources/cat.png");
		cat.setTexture(catTexture);
	}
	void Draw(sf::RenderWindow* window) 
	{
		if (Died == false)
		{
			window->draw(cat);
		}
	}
	void Run()
	{

	}
	void Walking()
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) cat.move(0, 1.f);
	}
	void Fight()
	{

	}


};