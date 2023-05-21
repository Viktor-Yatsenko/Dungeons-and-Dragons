#include "MainMenu.h"


void MainMenu::Menu(sf::Music& m_MainMenuTheme)
{
	while (m_Window.isOpen()) 
	{
		sf::Event event;
		while (m_Window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				
				//m_MainMenuTheme.stop();
				m_Window.close();
			}
		}
		inputMenu(m_MainMenuTheme);
		conclusionMenu( m_Window);
	}

}
/*
void MainMenu::LevelOne()
{
	while (m_Window.isOpen())
	{
		sf::Event event;
		while (m_Window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) { m_Window.close(); }
		}
		//inputMenu();
		conclusionLevelOne(m_Window);
	}
}
*/