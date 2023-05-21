#include "LevelOne.h"

void LevelOne::One()
{
	while (m_Window.isOpen())
	{
		sf::Event event;
		while (m_Window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) { m_Window.close(); }
		}
		conclusionLevelOne( m_Window);
	}
}
