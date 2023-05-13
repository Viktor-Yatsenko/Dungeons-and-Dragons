#pragma once
#include "Engine.h"


class Text
{
private:
	// Main menu
	sf::Font m_Font;
	sf::Text m_Start;
	sf::Text m_Continue;
	sf::Text m_Exit;

public:

	Text();
	// Main menu
	sf::Text Start();
	sf::Text Continue();
	sf::Text Exit();
};

