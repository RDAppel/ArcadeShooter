
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

	/** @brief Scrolling background for levels. */
	class Background : public ShooterLibrary::Background
	{

	public:

		Background() { }
		virtual ~Background() { }

		/** @brief Called when resources need to be loaded.
		@param pResourceManager The game's resource manager, used for loading
		and managing game resources. */
		virtual void LoadContent(ResourceManager *pResourceManager);
		
		/** @brief Called when the game has determined that game logic needs to be processed.
		@param pGameTime Timing values including time since last update. */
		virtual void Update(const GameTime *pGameTime);

		/** @brief Called when the game determines it is time to draw a frame.
		@param pSpriteBatch The game's sprite batch, used for rendering. */
		virtual void Draw(SpriteBatch *pSpriteBatch);


	private:

		Texture *m_pTexture = nullptr;

		Vector2 m_position;

	};
}
