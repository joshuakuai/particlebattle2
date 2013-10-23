#pragma once

#ifndef __DEF_GEOSHIP_LAYER_ENEMY__
#define __DEF_GEOSHIP_LAYER_ENEMY__

#include "cocos2d.h"

namespace GeoShip
{

	class LayerEnemy : public cocos2d::CCLayer
	{
	public:
		LayerEnemy(void);
		~LayerEnemy(void);

		virtual void update(float delta);
		virtual bool init();
		CREATE_FUNC(LayerEnemy);

	private:
		float timeCounter;
	};

}

#endif