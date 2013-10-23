#include "FireableActor.h"

#include "Cannon.h"

namespace GeoShip
{

	FireableActor::FireableActor(void)
	{
	}


	FireableActor::~FireableActor(void)
	{
	}

	void FireableActor::update(float delta)
	{
		Actor::update(delta);
	}

	void FireableActor::fire()
	{
		unsigned int n = getChildrenCount();
		
		cocos2d::CCArray* pms = getChildren();

		for(unsigned int i = 0;i < n ; i++)
		{
			Module* pm = ((Module*)pms->objectAtIndex(i));
			if(pm->GetModuleType() == CANNON)
				((Cannon*)pm)->Fire();
		}
	}


}
