#pragma once

#ifndef __DEF_GEOSHIP_SPRITE_ROLESHIP__
#define __DEF_GEOSHIP_SPRITE_ROLESHIP__

#include "cocos2d.h"

#include "FireableActor.h"

namespace GeoShip
{

	class Roleship : public FireableActor
	{
	public:
		Roleship(void);
		~Roleship(void);

		virtual void update(float delta);
		virtual bool init();
		CREATE_FUNC(Roleship);

		
	};

}

#endif

