#pragma once
#include <SFML/Audio.hpp>

class Audio
{
private:
	sf::Music m_MainMenuTheme;


public:
	Audio();

	sf::Music MainMenuTheme();
};

