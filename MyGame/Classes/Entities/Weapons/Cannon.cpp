#include "Cannon.h"

#include "GlobalDef.h"
#include "SceneGaming.h"

namespace GeoShip
{

	Cannon::Cannon()
	{
		m_fireCoolDown = 0;
		m_moduleType = CANNON;
	}


	Cannon::~Cannon(void)
	{
	}

	void Cannon::update(float delta)
	{
		Module::update(delta);
		m_fireCoolDown += delta;
		if(m_fireCoolDown > m_fireCoolDownMax)
			m_fireCoolDown = m_fireCoolDownMax;

		
	}

	void Cannon::SetCoolDown(float cd)
	{
		m_fireCoolDownMax = cd;
	}

	void Cannon::SetOwner(FireableActor* pa)
	{
		m_pOwner = pa;
	}

	void Cannon::addBulletToLayer(Bullet* pb)
	{
		//get gaming scene
		cocos2d::CCScene* pScene = cocos2d::CCDirector::sharedDirector()->getRunningScene();
		if (pScene->getTag() != SCENE_GAMING) 
			return;
		
		//add bullet
		((SceneGaming*)pScene)->GetLayerBullet()->addChild(pb);
	}

	bool Cannon::fireCheck()
	{
		if( m_fireCoolDown > m_fireCoolDownMax - 0.001f)
			return true;
		else
			return false;
	}
}
