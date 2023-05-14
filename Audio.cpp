#include "Audio.h"

Audio::Audio()
{
	// Main menu
	m_MainMenuTheme.openFromFile("Audio\\MainMenu.ogg");

}

void Audio::MusicMainMenu()
{
	if (!m_MainMenuTheme.getStatus())
	{
		m_MainMenuTheme.play();
	}
}

