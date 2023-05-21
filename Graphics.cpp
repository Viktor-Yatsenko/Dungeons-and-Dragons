#include "Graphics.h"

Graphics::Graphics()
{
//Main Menu
	//Menu
	m_MenuTexture.loadFromFile("Texture\\Menu\\MainMenu.jpg");
	//Button
	m_ButtonTexture.loadFromFile("Texture\\Menu\\Button.png");
//Level one
	m_DwarfAndGnomTexture.loadFromFile("Texture\\LevelOne\\dnd-party.jpg");

	m_BeckGroundTexture.loadFromFile("Texture\\LevelOne\\pngwing.com.png"); 
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

void Graphics::LevelOneGraphics(sf::RenderWindow& m_Window)
{
	// 1
	m_DwarfAndGnomSprite.setTexture(m_DwarfAndGnomTexture);
	m_Window.draw(m_DwarfAndGnomSprite);
	// BeckGround
	m_BeckGroundSprite.setTexture(m_BeckGroundTexture);
	m_BeckGroundSprite.setPosition(1200, 0);
	m_Window.draw(m_BeckGroundSprite);
}