#include "CannonRed.h"

namespace GeoShip
{

	CannonRed::CannonRed()
	{
		m_TextureName = "CannonRed.png";
		m_Size = cocos2d::CCSize(30,25);
		SetCoolDown(0.5f);
	}


	CannonRed::~CannonRed(void)
	{
	}


	void CannonRed::Fire()
	{
		if(!fireCheck()) return;

		BulletRed* pb = BulletRed::create();
		pb->setPosition(getParent()->getPosition());
		pb->setRotation(getRotation() + getParent()->getRotation());
		m_fireCoolDown = 0;
		
		addBulletToLayer(pb);
	}


}
