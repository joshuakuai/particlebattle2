#include "Bullet.h"

#include "GlobalDef.h"
#include "SceneGaming.h"
#include "Enemy.h"

namespace GeoShip
{

	Bullet::Bullet(void)
	{
		
	}


	Bullet::~Bullet(void)
	{
	}

	bool Bullet::init()
	{
		if(!Entity::init()) return false;
		return true;
	}

	void Bullet::update(float delta)
	{
		Entity::update(delta);

		//get gaming scene
		cocos2d::CCScene* pScene = cocos2d::CCDirector::sharedDirector()->getRunningScene();
		if (pScene->getTag() != SCENE_GAMING) 
			return;
		
		//collision
		cocos2d::CCArray* pEnemies = ((SceneGaming*)pScene)->GetLayerEnemy()->getChildren();
		Enemy* pe = NULL;
		unsigned int c = ((SceneGaming*)pScene)->GetLayerEnemy()->getChildrenCount();
		for(unsigned int i=0;i<c;i++ )
		{
			 pe = (Enemy*)pEnemies->objectAtIndex(i);
			 if(pe->IsCollide(getPositionX(),getPositionY()))
			 {
				 ((SceneGaming*)pScene)->GetLayerParticle()->CreateParticle(pe->getPosition(),green);
				 pe->removeFromParentAndCleanup(false);
				 destorySelf();
				 return;
			 }
		}

		//border
		if(((LayerBullet*)getParent())->IsOutBorder(getPosition()))
			destorySelf();
	}

	void Bullet::destorySelf()
	{
		removeFromParentAndCleanup(false);
	}


}
