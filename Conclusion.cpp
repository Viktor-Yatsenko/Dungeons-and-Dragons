#include "MainMenu.h"
#include "LevelOne.h"

void MainMenu::conclusionMenu(sf::RenderWindow& m_Window)
{
	//Delete previous frame
	m_Window.clear(sf::Color::Black);
	// Texture
	m_MenuSprite.MainMenuGraphics(m_Window);
	m_ButtonSprite.MainMenuGraphics(m_Window);
	//m_ButtonSpriteTwo.MainMenuGraphics(m_Window);
	//m_ButtonSpriteThree.MainMenuGraphics(m_Window);

	// Text
	m_Start.TextMainMenu( m_Window);
	//m_Settings.text(m_Window);
	//m_Exit.text(m_Window);
	
	// Audio
	m_MainMenuTheme.MusicMainMenu();
	
	m_Window.display();
}



void LevelOne::conclusionLevelOne(sf::RenderWindow& m_Window)
 {
	 //Delete previous frame
	 m_Window.clear(sf::Color::White);
	 //Texture
	 m_DwarfAndGnomSprite.LevelOneGraphics(m_Window);
	
	 m_Window.display();
 }
