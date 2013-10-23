#include "BulletWhite.h"

#include "GlobalDef.h"
#include "SceneGaming.h"

namespace GeoShip
{

	BulletWhite::BulletWhite(void)
	{
		m_speed = 500.0f;
		m_damage = 10.0f;
		m_TextureName = "BulletWhite.png";
		m_Size = cocos2d::CCSize(30,15);
	}


	BulletWhite::~BulletWhite(void)
	{
	}

	bool BulletWhite::init()
	{
		if(!Bullet::init()) return false;

		return true;
	}

	void BulletWhite::update(float delta)
	{
		Bullet::update(delta);
	}

	void BulletWhite::destorySelf()
	{
		Bullet::destorySelf();
		//get gaming scene
		cocos2d::CCScene* pScene = cocos2d::CCDirector::sharedDirector()->getRunningScene();
		if (pScene->getTag() != SCENE_GAMING) 
			return;
		((SceneGaming*)pScene)->GetLayerParticle()->CreateParticle(getPosition(),yellow);
	}


}
