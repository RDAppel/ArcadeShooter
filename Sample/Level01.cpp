
#include "Sample.h"

using ShooterLibrary::EnemyShip;

namespace Sample
{
	Level01::Level01()
	{
	}


	void Level01::LoadContent()
	{
		ResourceManager *pRes = GetGameplayScreen()->GetResourceManager();
		Texture *pTexture = pRes->Load<Texture>("Textures\\BioEnemySmall.png");
		BioEnemyShip::SetTexture(pTexture);

		for (int i = 0; i < 10; i++)
		{
			EnemyShip *pEnemyShip = new BioEnemyShip();
			pEnemyShip->Initialize(Vector2(100 * i + 200, -50), 5 * (i + 1));
			AddGameObject(pEnemyShip);
		}

		PowerUp::SetTexture(pRes->Load<Texture>("Textures\\PowerUp.png"));
		PowerUp::SetGlowTexture(pRes->Load<Texture>("Textures\\PowerUpGlow.png"));
		
		Level::LoadContent();
	}
}