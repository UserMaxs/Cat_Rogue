#pragma once
#include <SFML/Graphics.hpp>



class Player
{
	bool Cat_stands;
	bool Died;
	bool Paws_empty;
	sf::Texture catTexture;
	sf::Sprite cat;

public:
	Player();
	void Draw(sf::RenderWindow* window);
	void Run();
	void Walking();
	void Fight();
};