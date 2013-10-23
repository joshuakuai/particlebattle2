#include "Roleship.h"

#include "Cannon.h"
#include "CannonWhite.h"
#include "CannonRed.h"

namespace GeoShip
{

	Roleship::Roleship(void)
	{
		//m_speed = 0.0f;

		m_TextureName = "RoleShip.png";
		m_Size = cocos2d::CCSize(50,50);
	}


	Roleship::~Roleship(void)
	{
	}

	void Roleship::update(float delta)
	{
		FireableActor::update(delta);

		fire();
	}

	bool Roleship::init()
	{
		if(!FireableActor::init()) return false;

		setPosition(cocos2d::CCPoint(0,0));

		CannonWhite* c1 = CannonWhite::create();
		c1->SetOwner(this);
		c1->setPosition(getRelativeTranslate(cocos2d::CCPoint(20.0f,20.0f)));
		addChild(c1);

		CannonWhite* c2 = CannonWhite::create();
		c2->SetOwner(this);
		c2->setPosition(getRelativeTranslate(cocos2d::CCPoint(20.0f,-20.0f)));
		addChild(c2);

		CannonRed* c3 = CannonRed::create();
		c3->SetOwner(this);
		c3->setPosition(getRelativeTranslate(cocos2d::CCPoint(-20.0f,-30.0f)));
		c3->setRotation(30);
		addChild(c3);

		CannonRed* c4 = CannonRed::create();
		c4->SetOwner(this);
		c4->setPosition(getRelativeTranslate(cocos2d::CCPoint(-20.0f,30.0f)));
		c4->setRotation(-30);
		addChild(c4);

		CannonWhite* c5 = CannonWhite::create();
		c5->SetOwner(this);
		c5->setPosition(getRelativeTranslate(cocos2d::CCPoint(40.0f,0.0f)));
		addChild(c5);
	

		return true;
	}
	
}