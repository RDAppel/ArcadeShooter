
/*   .oooooo..o       .o.       ooo        ooooo ooooooooo.   ooooo        oooooooooooo
	d8P'    `Y8      .888.      `88.       .888' `888   `Y88. `888'        `888'     `8
	Y88bo.          .8"888.      888b     d'888   888   .d88'  888          888
	 `"Y8888o.     .8' `888.     8 Y88. .P  888   888ooo88P'   888          888oooo8
		 `"Y88b   .88ooo8888.    8  `888'   888   888          888          888    "
	oo     .d8P  .8'     `888.   8    Y     888   888          888       o  888       o
	8""88888P'  o88o     o8888o o8o        o888o o888o        o888ooooood8 o888ooooood8

					        Sample � 2017 - Shuriken Studios LLC                          */

#pragma once

namespace Sample
{

	/** @brief Class for bio enemies. */
	class BioEnemyShip : public ShooterLibrary::EnemyShip
	{

	public:

		BioEnemyShip();
		virtual ~BioEnemyShip() { }

		/** @brief Sets the animation of the bio enemies.
			@param pAnimation A pointer to the animation resource. */
		void SetAnimation(Animation *pAnimation) { m_pAnimation = pAnimation; }

		/** @brief Called when the game determines it is time to draw a frame.
			@param pGameTime Timing values including time since last update. */
		virtual void Update(const GameTime *pGameTime);

		/** @brief Called when the game determines it is time to draw a frame.
			@param pSpriteBatch The game's sprite batch, used for rendering. */
		virtual void Draw(SpriteBatch *pSpriteBatch);

		/** @brief Hits the object, dealing damage to it.
			@param damage The amount of damage to inflict. */
		virtual void Hit(const float damage);


	private:

		Animation *m_pAnimation = nullptr;

	};
}