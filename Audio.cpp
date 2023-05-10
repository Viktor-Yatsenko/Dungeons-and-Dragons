#include "Audio.h"

Audio::Audio()
{
	m_MainMenuTheme.openFromFile("Audio\\MainMenu.ogg");
	m_MainMenuTheme.setLoop(true);
}

sf::Music Audio::MainMenuTheme()
{
	m_MainMenuTheme.play();
	return sf::Music();
}

