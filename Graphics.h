#pragma once
#include "Engine.h"

class Graphics
{
private:
	sf::Texture m_MenuTexture, m_ButtonTexture;
	sf::Sprite m_MenuSprite, m_ButtonSprite, m_ButtonSpriteTwo, m_ButtonSpriteThree;

public:
	Graphics();
	void MainMenuGraphics(sf::RenderWindow& m_Window);

};