#include "CannonWhite.h"

namespace GeoShip
{

	CannonWhite::CannonWhite()
	{
		m_TextureName = "RoleShip.png";
		m_Size = cocos2d::CCSize(25,25);
		SetCoolDown(0.5f);
	}


	CannonWhite::~CannonWhite(void)
	{
	}


	void CannonWhite::Fire()
	{
		if(!fireCheck()) return;

		BulletWhite* pb = BulletWhite::create();
		pb->setPosition(getParent()->getPosition());
		pb->setRotation(getRotation() + getParent()->getRotation());
		m_fireCoolDown = 0;
		
		addBulletToLayer(pb);
	}


}
