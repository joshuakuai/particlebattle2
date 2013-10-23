#pragma once

#ifndef __DEF_GEOSHIP_SPRITE_ENEMY__
#define __DEF_GEOSHIP_SPRITE_ENEMY__

#include "cocos2d.h"

#include "FireableActor.h"

namespace GeoShip
{

	class Enemy : public FireableActor
	{
	public:
		Enemy(void);
		~Enemy(void);

		virtual void update(float delta);
		virtual bool init();
		CREATE_FUNC(Enemy);
	};

}

#endif

