﻿
/*                '888 88888888888 888888888',8888'
                    88 888888888888 8888888',8888'
                     8 8888             ,8',8888'
          ==̲=̲=̲=̲=̲=̲=== 8 8888 ========== ,8 ,̲8̲88̲8_==============
          /  ____/__ 8_̲88̲8̲8̲8̲88̲88̲8̲8̲8__ ,̲8__/ //_/____ _ ____
	     / /  __ / / / /ˊ __ `// ___/ˊ __  /__ ˊ __ `// __ \
	    / /__/ // /_/ // /_/ // /   / /_/ // // /_/ // / / /
	    \_____/ \__,_/ \__,_//_/    \__,_//_/ \__,_//_/ /_/
      ============== 8 8888 ===== ,8',8888' ===============
                    88 8888      ,8',8888888888888 
                   ,88 8888     ,8',888888888888888,
				   
				           ファイナル ゼロ

               Guardian FZ © 2017 - Shuriken Studios LLC          */

#include "GuardianFinalZero.h"

namespace GuardianFinalZero
{
	PlayerShip::PlayerShip(const uint8_t playerIndex)
		: ShooterLibrary::PlayerShip(playerIndex)
	{
		SetSpeed(450);
		SetPosition(100, 100);
	}

	void PlayerShip::HandleInput(const InputState* pInput)
	{
		ShooterLibrary::PlayerShip::HandleInput(pInput);
	}

	void PlayerShip::Update(const GameTime *pGameTime)
	{		
		ShooterLibrary::PlayerShip::Update(pGameTime);
	}
	
	void PlayerShip::Draw(SpriteBatch *pSpriteBatch)
	{
		pSpriteBatch->Draw(m_pColorTexture, GetPosition(), Color::Blue, m_pTexture->GetCenter());
		pSpriteBatch->Draw(m_pTexture, GetPosition(), Color::White, m_pTexture->GetCenter());
	}
}