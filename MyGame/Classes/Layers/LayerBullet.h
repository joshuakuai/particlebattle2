#pragma once

#ifndef __DEF_GEOSHIP_LAYER_BULLET__
#define __DEF_GEOSHIP_LAYER_BULLET__

#include "cocos2d.h"

namespace GeoShip
{

	class LayerBullet : public cocos2d::CCLayer
	{
	public:
		LayerBullet(void);
		~LayerBullet(void);

		virtual void update(float delta);
		virtual bool init();
		CREATE_FUNC(LayerBullet);

		bool IsOutBorder(cocos2d::CCPoint pos);

	private:
		cocos2d::CCRect border;

	};

}

#endif