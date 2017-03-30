#pragma once
class ParticleTemplate
{

public:

	ParticleTemplate(const bool poolExpands = true);
	virtual ~ParticleTemplate();

	virtual void InitializeParticle(Particle *pParticle);

	virtual void UpdateParticle(Particle *pParticle, const GameTime *pGameTime) { }

	virtual void SetTexture(Texture *pTexture);

	virtual Texture *GetTexture() { return m_pTexture; }

	virtual Vector2 &GetTextureOrigin() { return m_textureOrigin; }

	virtual void SetParticleLifespan(const float lifespan) { m_pParticleLifespan = lifespan; }

	virtual Particle *GetInactiveParticle() = 0;

	template <typename T>
	T *GetInactiveParticleOfType()
	{
		m_it = m_particles.begin();
		for (; m_it != m_particles.end(); ++m_it)
		{
			if (!(*m_it)->IsActive())
			{
				return static_cast<T *>(*m_it);
			}
		}

		if (m_poolExpands)
		{
			return GenerateParticles<T>();
		}

		return nullptr;
	}


protected:

	template <typename T>
	T *GenerateParticles(const int count = 1)
	{
		T *pT = nullptr;

		for (int i = 0; i < count; ++i)
		{
			pT = new T();
			Particle *pParticle = static_cast<Particle *>(pT);
			pParticle->SetTemplate(this);
			m_particles.push_back(pParticle);
		}

		return pT;
	}


private:

	Texture *m_pTexture;
	Vector2 m_textureOrigin;

	float m_pParticleLifespan;

	bool m_poolExpands;

	std::vector<Particle *> m_particles;
	std::vector<Particle *>::iterator m_it;

};

