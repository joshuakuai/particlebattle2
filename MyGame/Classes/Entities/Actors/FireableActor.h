#pragma once

#ifndef __DEF_GEOSHIP_SPRITE_FIREABLEACTOR__
#define __DEF_GEOSHIP_SPRITE_FIREABLEACTOR__

#include "cocos2d.h"

#include "Actor.h"

namespace GeoShip
{
	class Cannon;

	class FireableActor : public Actor
	{
	public:
		FireableActor(void);
		~FireableActor(void);

		virtual void update(float delta);

		virtual void fire();

	protected:

	};

}

#endif

