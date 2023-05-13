#include "MainMenu.h"
#include "LevelOne.h"

 void MainMenu::conclusionMenu()
{
	//Delete previous frame
	m_Window.clear(sf::Color::White);
	// Texture
	m_Window.draw(m_MenuSprite.getMenu());
	m_Window.draw(m_ButtonSprite.getButton());
	m_Window.draw(m_ButtonSpriteTwo.getButtonTwo());
	m_Window.draw(m_ButtonSpriteThree.getButtonThree());

	// Text
	m_Window.draw(m_Start.Start());
	m_Window.draw(m_Continue.Continue());
	m_Window.draw(m_Exit.Exit());

	// Audio
	m_MainMenuTheme.play();


	m_Window.display();
}

 void LevelOne::conclusionLevelOne()
 {
	 //Delete previous frame
	 m_Window.clear(sf::Color::White);
	 //Texture

 }