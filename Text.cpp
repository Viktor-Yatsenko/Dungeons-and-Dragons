#include "Text.h"

Text::Text()
{
	m_Font.loadFromFile("Font\\SpecialElite-Regular.ttf");
	m_Text.setFont(m_Font);


	m_Text.setCharacterSize(30);
	m_Text.setFillColor(sf::Color::White);
	m_Text.setStyle(sf::Text::Bold);

	m_Position.x = 150;
	m_Position.y = 300;
}

sf::Text Text::String()
{
	m_Text.setString("Start game");
	return m_Text;
}
