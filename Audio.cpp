#include "Audio.h"

Audio::Audio()
{
	m_MainMenuTheme.openFromFile("Audio\\MainMenu.ogg");

}

void Audio::play()
{
	if (!m_MainMenuTheme.getStatus())
	{
		m_MainMenuTheme.play();
	}
}

