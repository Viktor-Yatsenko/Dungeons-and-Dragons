#pragma once
#include "Engine.h"
#include "Audio.h"
//#include "LevelOne.h"

class MainMenu : public Engine
{
private:
	// menu
	Graphics m_MenuSprite;
	Graphics m_ButtonSprite;
	Graphics m_ButtonSpriteTwo;
	Graphics m_ButtonSpriteThree;

	Text m_Start;
	Text m_Settings;
	Text m_Exit;

	Audio m_MainMenuTheme;

	//level 1
//	Graphics m_DwarfAndGnomSprite;
public:
	
	void Menu(sf::Music& m_MainMenuTheme);
	void inputMenu(sf::Music& m_MainMenuTheme);
	void conclusionMenu(sf::RenderWindow& m_Window);
	//level 1
	//void LevelOne();
//	void conclusionLevelOne(sf::RenderWindow& m_Window);
	
};

