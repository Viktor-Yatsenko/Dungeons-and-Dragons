#include "MainMenu.h"
#include "LevelOne.h"
//#include "LevelOne.h"



void MainMenu::inputMenu(sf::Music& m_MainMenuTheme)
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
		//m_MainMenuTheme.stop();
		//MainMenu menu;
		//menu.m_MainMenuTheme.m_MainMenuTheme.stop();
		m_Window.close();
		if (!m_Window.isOpen())
		{
			m_MainMenuTheme.stop();
		}
		LevelOne levelOne;
		levelOne.One();

		//menu.LevelOne();
		
		//menu.LevelOne();
		
		//menu.LevelOne();
		//LevelOne levelOne;
		//levelOne.One();
		//m_Window.close();
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
/*
void LevelOne::inputLevelOne()
{

}
*/