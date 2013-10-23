#include "LayerRole.h"
#include "SneakyJoystick.h"
#include "SneakyJoystickSkinnedBase.h"

namespace GeoShip
{
    static Roleship* m_pRoleShip;

	LayerRole::LayerRole(void)
	{
	}


	LayerRole::~LayerRole(void)
	{
	}

	void LayerRole::update(float delta)
	{
		cocos2d::CCLayer::update(delta);
	}


    
	bool LayerRole::init()
	{
        
        
        
		cocos2d::CCLayer::init();

        
		m_pRoleShip = Roleship::create();
		m_pRoleInput = RoleInput::create();
		m_pRoleInput->SetRoleShip(m_pRoleShip);
		addChild(m_pRoleShip);
		//addChild(m_pRoleInput);

		scheduleUpdate();

		return true;
	}

    Roleship* LayerRole::getPlayer()
    {
        return m_pRoleShip;
    }
}
