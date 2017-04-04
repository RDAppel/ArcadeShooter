
#include "GuardianFinalZero.h"

namespace GuardianFinalZero
{
	// Removal Function
	void GameplayScreenRemove(Screen *pScreen)
	{
		pScreen->GetScreenManager()->AddScreen(new MainMenuScreen());
	}


	GameplayScreen::GameplayScreen(const uint32_t levelIndex)
	{
		switch (levelIndex)
		{			
		case 1: SetLevel(new Level01()); break;
		}
		
		OnRemove = GameplayScreenRemove;
	}
}