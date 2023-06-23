#include <SFML/Graphics.hpp>
#include "Player.hpp"


Player::Player()
{
	catTexture.loadFromFile("source/cat.png");
	cat.setTexture(catTexture);
}
void Player::Draw(sf::RenderWindow* window) 
{
	if (Died == false)
	{
		window->draw(cat);
	}
}
void Player::Run()
{

}
void Player::Walking()
{
	//if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) cat.move(0.f, -1.f);
	//if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) cat.move(-1.f, 0.f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)); 
	//if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) cat.move(1.f, 0.f);
}
void Player::Fight()
{

}
