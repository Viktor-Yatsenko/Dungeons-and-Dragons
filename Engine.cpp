#include "Engine.h"

Engine::Engine()
{
	//m_Window.create(sf::VideoMode(1920, 1080), "Dungeons & Dragons", sf::Style::Fullscreen);
	m_Window.create(sf::VideoMode(1920, 1080), "Dungeons & Dragons");
	m_Window.setVerticalSyncEnabled(true);
}

