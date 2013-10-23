#include "BulletRed.h"

#include "GlobalDef.h"
#include "SceneGaming.h"
#include "Enemy.h"

namespace GeoShip
{

	BulletRed::BulletRed(void)
	{
		m_speed = 300.0f;
		m_damage = 10.0f;
		m_TextureName = "BulletRed.png";
		m_Size = cocos2d::CCSize(30,15);
	}


	BulletRed::~BulletRed(void)
	{
	}

	bool BulletRed::init()
	{
		if(!Bullet::init()) return false;

		return true;
	}

	void BulletRed::update(float delta)
	{
		Bullet::update(delta);

		////follow
		////get gaming scene
		//cocos2d::CCScene* pScene = cocos2d::CCDirector::sharedDirector()->getRunningScene();
		//if (pScene->getTag() != SceneTypeEnum::SCENE_GAMING) 
		//	return;

		//cocos2d::CCArray* pEnemies = ((SceneGaming*)pScene)->GetLayerEnemy()->getChildren();
		//Enemy* pe = NULL;
		//Enemy* pemin = NULL;
		//float lmin = 1000000.0f;
		//unsigned int c = ((SceneGaming*)pScene)->GetLayerEnemy()->getChildrenCount();
		////get nearest enemy
		//for(unsigned int i=0;i<c;i++ )
		//{
		//	 pe = (Enemy*)pEnemies->objectAtIndex(i);
		//	 float l = (pe->getPosition() - getPosition()).getLength();
		//	 if( l < lmin )
		//	 {
		//		 pemin = pe;
		//		 lmin = l;
		//	 }
		//}
		//if(pemin == NULL) return;
		//float r = CC_RADIANS_TO_DEGREES((pemin->getPosition() - getPosition()).getAngle());
		//if(r > 0 && r< 180)
		//	setRotation(getRotation() + 1);
		//else if(r < 0 && r > -180)
		//	setRotation(getRotation() - 1);
		//
	}

	void BulletRed::destorySelf()
	{
		Bullet::destorySelf();
		//get gaming scene
		cocos2d::CCScene* pScene = cocos2d::CCDirector::sharedDirector()->getRunningScene();
		if (pScene->getTag() != SCENE_GAMING) 
			return;
		((SceneGaming*)pScene)->GetLayerParticle()->CreateParticle(getPosition(),red);
	}


}
