#include "Graphics.h"

Graphics::Graphics()
{
	//Menu
	m_MenuTexture.loadFromFile("Texture\\Menu\\MainMenu.jpg");
	//Button
	m_ButtonTexture.loadFromFile("Texture\\Menu\\Button.png");
}

void Graphics::MainMenuGraphics(sf::RenderWindow& m_Window)
{
	//Menu
	m_MenuSprite.setTexture(m_MenuTexture);
	m_Window.draw(m_MenuSprite);
	//Button
	// 1
	m_ButtonSprite.setTexture(m_ButtonTexture);
	m_ButtonSprite.setPosition(530, 0);
	m_Window.draw(m_ButtonSprite);
	// 2
	m_ButtonSpriteTwo.setTexture(m_ButtonTexture);
	m_ButtonSpriteTwo.setPosition(530, 120);
	m_Window.draw(m_ButtonSpriteTwo);
	// 3
	m_ButtonSpriteThree.setTexture(m_ButtonTexture);
	m_ButtonSpriteThree.setPosition(530, 240);
	m_Window.draw(m_ButtonSpriteThree);
}