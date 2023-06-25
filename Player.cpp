#include <SFML/Graphics.hpp>
#include "Player.hpp"


Player::Player()
{
	Died = false;
	Cat_stands = false;
	Paws_empty = true;
	catTexture.loadFromFile("source/cat_walking.png");

	cat.setTexture(catTexture);
	cat.setTextureRect(sf::IntRect(0, 0, 100, 100));
	cat.setPosition(450.f, 300.f);
	cat.setScale(1,1.5);
}
void Player::Draw(sf::RenderWindow* window) 
{
	if (Died == false)
	{
		window->draw(cat);
	}
	if(Paws_empty == true)
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) cat.setTextureRect(sf::IntRect(0, 0, 100, 100));
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) cat.setTextureRect(sf::IntRect(0, 180, 280, 100));
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) cat.setTextureRect(sf::IntRect(0, 100, 160, 100));
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) cat.setTextureRect(sf::IntRect(0, 300, 380, 100));
	}
}
void Player::Run()
{

}
void Player::Walking()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) cat.move(0.f, -1.f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) cat.move(-1.f, 0.f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) cat.move(0.f, 1.f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) cat.move(1.f, 0.f);
}
void Player::Fight()
{

}
