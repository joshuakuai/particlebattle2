#pragma once

#ifndef __DEF_GEOSHIP_MODULE_CANNONWHITE__
#define __DEF_GEOSHIP_MODULE_CANNONWHITE__

#include "cocos2d.h"

#include "Cannon.h"
#include "BulletWhite.h"
#include "FireableActor.h"

namespace GeoShip
{

	class CannonWhite : public Cannon
	{
	public:
		CannonWhite();
		~CannonWhite(void);

		virtual void Fire();

		CREATE_FUNC(CannonWhite);
	protected:
		
	};

}

#endif

