#include "Graphics.h"

Graphics::Graphics()
{
	//Menu
	m_MenuTexture.loadFromFile("Texture\\Menu\\MainMenu.jpg");
	m_MenuSprite.setTexture(m_MenuTexture);

	//Button
	// 1
	m_ButtonTexture.loadFromFile("Texture\\Menu\\Button.png");
	m_ButtonSprite.setTexture(m_ButtonTexture);
	m_ButtonSprite.move(530, 0);
	// 2
	m_ButtonSpriteTwo.setTexture(m_ButtonTexture);
	m_ButtonSpriteTwo.move(530, 120);
	// 3
	m_ButtonSpriteThree.setTexture(m_ButtonTexture);
	m_ButtonSpriteThree.move(530, 240);
}

sf::Sprite Graphics::getMenu()
{
	return m_MenuSprite;
}

sf::Sprite Graphics::getButton()
{
	return m_ButtonSprite;
}

sf::Sprite Graphics::getButtonTwo()
{
	return m_ButtonSpriteTwo;
}

sf::Sprite Graphics::getButtonThree()
{
	return m_ButtonSpriteThree;
}