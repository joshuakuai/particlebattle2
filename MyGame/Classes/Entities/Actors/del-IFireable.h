#pragma once

#ifndef __DEF_GEOSHIP_IFIREABLE__
#define __DEF_GEOSHIP_IFIREABLE__

#include "cocos2d.h"

namespace GeoShip
{

	class IFireable
	{
	public:
		virtual void Fire() = 0;
	};

}

#endif

