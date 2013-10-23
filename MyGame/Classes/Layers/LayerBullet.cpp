#include "LayerBullet.h"
#include "cocos2d.h"
using namespace cocos2d;
namespace GeoShip
{

	LayerBullet::LayerBullet(void)
	{
		//temp
        CCSize s = CCDirector::sharedDirector()->getWinSize();
		border = cocos2d::CCRect(0,0,s.width * 2,s.height * 2);
	}


	LayerBullet::~LayerBullet(void)
	{
	}

	void LayerBullet::update(float delta)
	{
		cocos2d::CCLayer::update(delta);
	}

	bool LayerBullet::init()
	{
		cocos2d::CCLayer::init();
 
		scheduleUpdate();

		return true;
	}

	
	bool LayerBullet::IsOutBorder(cocos2d::CCPoint pos)
	{
		if(border.getMaxX() < pos.x) return true;
		if(border.getMinX() > pos.x) return true;
		if(border.getMaxY() < pos.y) return true;
		if(border.getMinY() > pos.y) return true;
		return false;
	}



}
