#include "Text.h"

Text::Text()
{
	
	// Main menu
	{
		m_Font.loadFromFile("Font\\ShantellSans-VariableFont_BNCE,INFM,SPAC,wght.ttf");
		m_Start.setFont(m_Font);
		
		//setFillColor
		//Start
		m_Start.setCharacterSize(30);
		m_Start.setFillColor(sf::Color::White);
		m_Start.setStyle(sf::Text::Bold);
		m_Start.move(610, 75);
		//Continue
		m_Continue.setFont(m_Font);
		m_Continue.setCharacterSize(30);
		m_Continue.setFillColor(sf::Color::White);
		m_Continue.setStyle(sf::Text::Bold);
		m_Continue.move(565, 195);
		//Exit
		m_Exit.setFont(m_Font);
		m_Exit.setCharacterSize(30);
		m_Exit.setFillColor(sf::Color::White);
		m_Exit.setStyle(sf::Text::Bold);
		m_Exit.move(640, 315);
	}
}

sf::Text Text::Start()
{
	m_Start.setString(L"Нова гра");
	return m_Start;
}

sf::Text Text::Continue()
{
	m_Continue.setString(L"Налаштування");
	return m_Continue;
}

sf::Text Text::Exit()
{
	m_Exit.setString(L"Вихід");
	return m_Exit;
}

