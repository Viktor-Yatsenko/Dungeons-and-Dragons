#include "Engine.h"



void Engine::input()
{
	/*
			//Escape
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
			m_Window.close();
	*/

	//Mouse
	// ��� ��������� � ������� IntRect � ������� ������ ��������� ��������
	//Start game
	if (sf::IntRect(530, 0, 300, 200).contains(sf::Mouse::getPosition(m_Window)) &&
		sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		
		m_Window.close();
	}
	//Settings
	if (sf::IntRect(530, 120, 300, 200).contains(sf::Mouse::getPosition(m_Window)) &&
		sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		m_Window.close();
	}
	//Exit
	if (sf::IntRect(530, 240, 300, 200).contains(sf::Mouse::getPosition(m_Window)) &&
		sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		m_Window.close();
	}
	
}
