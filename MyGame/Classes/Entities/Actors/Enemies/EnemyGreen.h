#pragma once

#ifndef __DEF_GEOSHIP_SPRITE_ENEMYGREEN__
#define __DEF_GEOSHIP_SPRITE_ENEMYGREEN__

#include "cocos2d.h"

#include "Enemy.h"

namespace GeoShip
{

	class EnemyGreen : public Enemy
	{
	public:
		EnemyGreen(void);
		~EnemyGreen(void);

		virtual void update(float delta);
		virtual bool init();
		CREATE_FUNC(EnemyGreen);

		virtual bool IsCollide(float px,float py);
	};

}

#endif

