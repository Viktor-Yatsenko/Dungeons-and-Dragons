#include "MainMenu.h"

void MainMenu::Menu()
{
	while (m_Window.isOpen()) 
	{
		sf::Event event;
		while (m_Window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				m_Window.close();
			}
		}
		inputMenu();
		conclusionMenu( m_Window);
	}
}