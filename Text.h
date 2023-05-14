#pragma once
#include "Engine.h"

class Text
{
private:
	// Main menu
	sf::Font m_Font;
	sf::Text m_Start, m_Settings, m_Exit;

public:
	Text();
	void TextMainMenu(sf::RenderWindow& m_Window);

};

