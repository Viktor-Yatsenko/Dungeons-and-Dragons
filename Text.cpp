#include "Text.h"

Text::Text()
{
	// Main menu
	m_Font.loadFromFile("Font\\ShantellSans-VariableFont_BNCE,INFM,SPAC,wght.ttf");
	m_Start.setFont(m_Font);

}

void Text::TextMainMenu(sf::RenderWindow& m_Window)
{
	//Start
	m_Start.setCharacterSize(30);
	m_Start.setFillColor(sf::Color::White);
	m_Start.setStyle(sf::Text::Bold);
	m_Start.setPosition(610, 75);
	m_Start.setString(L"Нова гра");
	m_Window.draw(m_Start);
	
	//Continue
	m_Settings.setFont(m_Font);
	m_Settings.setCharacterSize(30);
	m_Settings.setFillColor(sf::Color::White);
	m_Settings.setStyle(sf::Text::Bold);
	m_Settings.setPosition(565, 195);
	m_Settings.setString(L"Налаштування");
	m_Window.draw(m_Settings);

	//Exit
	m_Exit.setFont(m_Font);
	m_Exit.setCharacterSize(30);
	m_Exit.setFillColor(sf::Color::White);
	m_Exit.setStyle(sf::Text::Bold);
	m_Exit.setPosition(640, 315);
	m_Exit.setString(L"Вихід");
	m_Window.draw(m_Exit);
}

