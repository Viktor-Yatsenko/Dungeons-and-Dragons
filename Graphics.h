#pragma once
#include "Engine.h"



class Graphics
{
private:
	
	// Main menu
	sf::Texture m_MenuTexture, m_ButtonTexture;
	sf::Sprite m_MenuSprite, m_ButtonSprite, m_ButtonSpriteTwo, m_ButtonSpriteThree;
	// Level one
	sf::Texture m_DwarfAndGnomTexture;
	sf::Sprite m_DwarfAndGnomSprite;

public:
	Graphics();
	void MainMenuGraphics(sf::RenderWindow& m_Window);
	void LevelOneGraphics(sf::RenderWindow& m_Window);

};