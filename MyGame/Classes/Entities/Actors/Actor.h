#pragma once

#ifndef __DEF_GEOSHIP_SPRITE_ACTOR__
#define __DEF_GEOSHIP_SPRITE_ACTOR__

#include "cocos2d.h"

#include "Entity.h"

namespace GeoShip
{

	class Actor : public Entity
	{
	public:
		Actor(void);
		~Actor(void);

		virtual bool IsCollide(float px,float py);
		virtual bool IsCollide(Actor & a);

		virtual void SetMoveOri(float ori);

	protected:
		int m_healthPoint;
		int m_healthPointMax;
	};

}

#endif

