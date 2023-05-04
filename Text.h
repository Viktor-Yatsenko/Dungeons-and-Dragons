#pragma once
#include <SFML/Graphics.hpp>

class Text
{
private:
	sf::Font m_Font;
	sf::Text m_Text;
	sf::Vector2f m_Position;

public:
	Text();

	sf::Text String();
};

