#pragma once

#ifndef __DEF_GEOSHIP_SPRITE_BULLETRED__
#define __DEF_GEOSHIP_SPRITE_BULLETRED__

#include "cocos2d.h"

#include "Bullet.h"

namespace GeoShip
{

	class BulletRed : public Bullet
	{
	public:
		BulletRed(void);
		~BulletRed(void);

		virtual bool init();
		virtual void update(float delta);

		virtual void destorySelf();

		CREATE_FUNC(BulletRed);
	protected:
	};

}

#endif

