#pragma once
#include <SFML/Graphics.hpp>
#include "Text.h"
#include "Graphics.h"

class Engine
{
private:
	sf::RenderWindow m_Window;

	/*
	sf::Texture m_MenuTexture;
	sf::Sprite m_MenuSprite;

	sf::Texture m_ButtonTexture;
	sf::Sprite m_ButtonSprite;
	*/

	Graphics m_MenuSprite;
	Graphics m_ButtonSprite;

	Text m_Text;

	void input();
	void update(float dtAsSeconds);
	void draw();

public:
	Engine();

	void start();
};

