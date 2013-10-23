#pragma once

#ifndef __DEF_GEOSHIP_MODULE_CANNONRED__
#define __DEF_GEOSHIP_MODULE_CANNONRED__

#include "cocos2d.h"

#include "Cannon.h"
#include "BulletRed.h"
#include "FireableActor.h"

namespace GeoShip
{

	class CannonRed : public Cannon
	{
	public:
		CannonRed();
		~CannonRed(void);

		virtual void Fire();

		CREATE_FUNC(CannonRed);
	protected:
		
	};

}

#endif

