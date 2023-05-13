#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Text.h"
#include "Graphics.h"
#include "Audio.h"

class Engine
{
private:
	sf::RenderWindow m_Window;
	

	Graphics m_MenuSprite;
	Graphics m_ButtonSprite;
	Graphics m_ButtonSpriteTwo;
	Graphics m_ButtonSpriteThree;

	
	Text m_Start;
	Text m_Continue;
	Text m_Exit;

	Audio m_MainMenuTheme;

	

public:
	
	Engine();
	void input();
	void update(float dtAsSeconds);
	void conclusion();


	void MainMenu();


};

