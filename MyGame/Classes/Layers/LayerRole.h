#pragma once

#ifndef __DEF_GEOSHIP_LAYER_ROLE__
#define __DEF_GEOSHIP_LAYER_ROLE__

#include "cocos2d.h"

#include "Roleship.h"
#include "RoleInput.h"


namespace GeoShip
{

	class LayerRole : public cocos2d::CCLayer
	{
	public:
		LayerRole(void);
		~LayerRole(void);

		virtual void update(float delta);
		virtual bool init();
		CREATE_FUNC(LayerRole);
        
        static Roleship* getPlayer();

	private:

        

		RoleInput* m_pRoleInput;
	};

}

#endif