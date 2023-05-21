#pragma once
#include "Engine.h"

class Text
{
private:
	// Main menu
	sf::Font m_Font;
	sf::Text m_Start, m_Settings, m_Exit;
	// LevelOne
	sf::Text m_Story;
public:
	Text();
	// Main menu
	void TextMainMenu(sf::RenderWindow& m_Window);
	// LevelOne
	void TextLevelOne(sf::RenderWindow& m_Window);
};

