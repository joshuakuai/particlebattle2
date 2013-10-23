#pragma once

#ifndef __DEF_GEOSHIP_SPRITE_ENTITY__
#define __DEF_GEOSHIP_SPRITE_ENTITY__

#include "cocos2d.h"

namespace GeoShip
{

	class Entity : public cocos2d::CCSprite
	{
	public:
		Entity(void);
		~Entity(void);

		//override init function of sprite
		virtual bool init();
		virtual void update(float delta);

	protected:
		const char* m_TextureName;
		cocos2d::CCSize m_Size;

		float m_speed;

		cocos2d::CCPoint getRelativeTranslate(const cocos2d::CCPoint & pos);
	};

}

#endif

