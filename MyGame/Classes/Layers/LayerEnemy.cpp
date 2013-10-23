#include "LayerEnemy.h"

#include "EnemyGreen.h"

namespace GeoShip
{

	LayerEnemy::LayerEnemy(void)
	{
	}


	LayerEnemy::~LayerEnemy(void)
	{
	}

	void LayerEnemy::update(float delta)
	{
        cocos2d::CCSize s = cocos2d::CCDirector::sharedDirector()->getWinSize();
		cocos2d::CCLayer::update(delta);

		timeCounter+=delta;
		if(timeCounter > 0.3f)
		{
			timeCounter -=0.3f;
			EnemyGreen* pe = EnemyGreen::create();
			float rx = CCRANDOM_0_1() * s.width;
			float ry = CCRANDOM_0_1() * s.height;
			pe->setPosition(cocos2d::CCPoint(rx,ry));
			pe->setRotation(CCRANDOM_0_1() * 360.0f);
 			addChild(pe);
		}
	}

	bool LayerEnemy::init()
	{
		cocos2d::CCLayer::init();

		timeCounter = 0;

		scheduleUpdate();

		return true;
	}


}
