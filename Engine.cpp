#include "Engine.h"

Engine::Engine()
{
	m_Window.create(sf::VideoMode(1920, 1080), "Dungeons & Dragons");
	m_Window.setVerticalSyncEnabled(true);

	//Graphics
//Menu
	//m_MenuTexture.loadFromFile("Texture\\Menu\\MainMenu.jpg");
	//m_MenuSprite.setTexture(m_MenuTexture);
	//Button
	//m_ButtonTexture.loadFromFile("Texture\\Menu\\Button.png");
	//m_ButtonSprite.setTexture(m_ButtonTexture);

}

void Engine::start()
{
	sf::Clock clock;

	while (m_Window.isOpen())
	{
		sf::Event event;
		while (m_Window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				m_Window.close();
		}

		sf::Time dt = clock.restart();
		float dtAsSeconds = dt.asSeconds();

		input();
		update(dtAsSeconds);
		draw();
	}
}