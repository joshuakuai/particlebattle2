#pragma once

#ifndef __DEF_GEOSHIP_SPRITE_BULLETWHITE__
#define __DEF_GEOSHIP_SPRITE_BULLETWHITE__

#include "cocos2d.h"

#include "Bullet.h"

namespace GeoShip
{

	class BulletWhite : public Bullet
	{
	public:
		BulletWhite(void);
		~BulletWhite(void);

		virtual bool init();
		virtual void update(float delta);

		virtual void destorySelf();

		CREATE_FUNC(BulletWhite);
	protected:
	};

}

#endif

