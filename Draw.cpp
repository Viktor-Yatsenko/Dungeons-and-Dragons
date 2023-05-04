#include "Engine.h"

void Engine::draw()
{
	//Delete previous frame
	m_Window.clear(sf::Color::White);

	m_Window.draw(m_MenuSprite.getMenu());
	m_Window.draw(m_ButtonSprite.getButton());
	m_Window.draw(m_Text.String());


	m_Window.display();
}