#pragma once
#include <SFML/Graphics.hpp>
#include "Text.h"
#include "Graphics.h"

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


	void input();
	void update(float dtAsSeconds);
	void conclusion();

public:
	Engine();

	void MainMenu();
};

