#include "Graphics.h"

Graphics::Graphics()
{
	//Menu
	m_MenuTexture.loadFromFile("Texture\\Menu\\MainMenu.jpg");
	m_MenuSprite.setTexture(m_MenuTexture);

	//Button
	m_ButtonTexture.loadFromFile("Texture\\Menu\\Button.png");
	m_ButtonSprite.setTexture(m_ButtonTexture);
}



sf::Sprite Graphics::getMenu()
{
	return m_MenuSprite;
}



sf::Sprite Graphics::getButton()
{
	//m_MenuSprite;
	//m_ButtonSprite;

	return m_ButtonSprite;
}
