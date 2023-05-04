#pragma once
#include <SFML/Graphics.hpp>

class Graphics
{
private:
	sf::Texture m_MenuTexture;
	sf::Sprite m_MenuSprite;

	sf::Texture m_ButtonTexture;
	sf::Sprite m_ButtonSprite;


public:
	Graphics();

	sf::Sprite getMenu();
	sf::Sprite getButton();

};

