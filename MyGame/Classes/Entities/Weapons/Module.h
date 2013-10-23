#pragma once

#ifndef __DEF_GEOSHIP_MODULE_MODULE__
#define __DEF_GEOSHIP_MODULE_MODULE__

#include "cocos2d.h"

#include "Entity.h"

namespace GeoShip
{

	typedef enum{CANNON = 0,AAA,BBB,UNKNOWN} ModuleType;

	class Module : public Entity
	{
	public:
		Module(void);
		~Module(void);

		//override init function of sprite
		virtual bool init();
		virtual void update(float delta);

		ModuleType GetModuleType();

	protected:

		ModuleType m_moduleType;
	};

}

#endif

