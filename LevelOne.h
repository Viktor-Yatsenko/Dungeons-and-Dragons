#pragma once
#include "Engine.h"

class LevelOne : public Engine
{
private:
	Graphics m_DwarfAndGnomSprite;

	Graphics m_BeckGroundSprite;

	Text m_Story;
public:
	void One();
	//void inputLevelOne();
	void conclusionLevelOne(sf::RenderWindow& m_Window);
	
};

