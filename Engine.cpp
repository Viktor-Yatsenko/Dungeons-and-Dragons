#include "Engine.h"

Engine::Engine()
{
	//m_Window.create(sf::VideoMode(1920, 1080), "Dungeons & Dragons", sf::Style::Fullscreen);
	m_Window.create(sf::VideoMode(1920, 1080), "Dungeons & Dragons");
	m_Window.setVerticalSyncEnabled(true);

}

/*
void Engine::MainMenu()
{

	while (m_Window.isOpen())
	{
		sf::Event event;
		while (m_Window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) { m_Window.close(); }
		}


		conclusion();
		input();

	}
}
*/



