#pragma once

#ifndef __DEF_GEOSHIP_SPRITE_BULLET__
#define __DEF_GEOSHIP_SPRITE_BULLET__

#include "cocos2d.h"

#include "Entity.h"

namespace GeoShip
{

	class Bullet : public Entity
	{
	public:
		Bullet(void);
		~Bullet(void);

		virtual bool init();
		virtual void update(float delta);

		virtual void destorySelf();
	protected:
		float m_damage;
	};

}

#endif

