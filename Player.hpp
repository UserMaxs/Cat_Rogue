#pragma once
#include <SFML/Graphics.hpp>



class Player
{
	bool Cat_stands;
	bool Died;
	sf::Texture catTexture;
	sf::Sprite cat;

public:
	Player();
	void Draw(sf::RenderWindow* window);
	void Run();
	void Walking();
	void Fight();


};