#include "Engine.h"

void Engine::input()
{
	//Escape
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		m_Window.close();


}