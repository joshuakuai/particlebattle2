#include "LayerParticle.h"

namespace GeoShip
{

	LayerParticle::LayerParticle(void)
	{
	}


	LayerParticle::~LayerParticle(void)
	{
	}

	void LayerParticle::update(float delta)
	{
		cocos2d::CCLayer::update(delta);
	}

	bool LayerParticle::init()
	{
		cocos2d::CCLayer::init();

		scheduleUpdate();

		return true;
	}

	void LayerParticle::CreateParticle(const cocos2d::CCPoint pos,ParticleType type)
	{
		EmitterExtends* pe = EmitterExtends::create(); 

		switch (type)
		{
		case green:
			pe->SetParColor(0.2f,0.8f,0.2f);
			pe->SetParSize(1.0f);
			break;
		case yellow:
			pe->SetParColor(0.6f,0.6f,0.2f);
			pe->SetParSize(0.5f);
			break;
		case white:
			pe->SetParColor(0.6f,0.6f,0.6f);
			pe->SetParSize(1.0f);
			break;
		case red:
			pe->SetParColor(0.8f,0.2f,0.2f);
			pe->SetParSize(0.4f);
			break;
		default:
			break;
		}
        
        cocos2d::CCSize s = cocos2d::CCDirector::sharedDirector()->getWinSize();
        
		pe->SetBorder(cocos2d::CCRect(0,0,960 * 2,640 * 2));
		pe->retain();
		pe->setAutoRemoveOnFinish(true);
		pe->setPosition(pos);
		addChild(pe);
	}

}
