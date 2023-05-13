#pragma once
#include "Engine.h"

class MainMenu : public Engine
{
private:
	Graphics m_MenuSprite;
	Graphics m_ButtonSprite;
	Graphics m_ButtonSpriteTwo;
	Graphics m_ButtonSpriteThree;

	Text m_Start;
	Text m_Continue;
	Text m_Exit;

	Audio m_MainMenuTheme;

public:
	void Menu();
	void inputMenu();
	void conclusionMenu();

	
};

