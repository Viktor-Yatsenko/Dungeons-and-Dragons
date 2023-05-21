#include "MainMenu.h"
#include "LevelOne.h"
#include "Engine.h"


int main(sf::Music& m_MainMenuTheme)
{
	system("dir");
	MainMenu Menu;
	Menu.Menu( m_MainMenuTheme);
	
	//LevelOne LevelOne;
	//LevelOne.One();

	return 0;
}