#pragma once
#include <SFML/Graphics.hpp>

class Graphics
{
private:
	sf::Texture m_MenuTexture;
	sf::Sprite m_MenuSprite;

	sf::Texture m_ButtonTexture;
	sf::Sprite m_ButtonSprite;
	sf::Sprite m_ButtonSpriteTwo;
	sf::Sprite m_ButtonSpriteThree;

public:
	Graphics();

	sf::Sprite getMenu();
	sf::Sprite getButton();
	sf::Sprite getButtonTwo();
	sf::Sprite getButtonThree();
};

