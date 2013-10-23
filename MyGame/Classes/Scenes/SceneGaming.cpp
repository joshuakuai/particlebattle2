#include "SceneGaming.h"

#include "GlobalDef.h"


namespace GeoShip
{
	SceneGaming::SceneGaming(void)
	{
	}


	SceneGaming::~SceneGaming(void)
	{
	}

	void SceneGaming::update(float delta)
	{
		cocos2d::CCScene::update(delta);
	}

	bool SceneGaming::init()
	{
		cocos2d::CCScene::init();

		//Layers
		m_pLayerRole = LayerRole::create();
		m_pLayerEnemy = LayerEnemy::create();
		m_pLayerBullet = LayerBullet::create();
		m_pLayerParticle = LayerParticle::create();
		m_pLayerUserInterface = LayerUserInterface::create();
        m_pLayerBackGround = LayerBackGround::create();

        cocos2d::CCSize screenSize = cocos2d::CCDirector::sharedDirector()->getWinSize();
        
        // Set up Camera
        cocos2d::CCFollow *follow = new cocos2d::CCFollow();
        follow->initWithTarget(m_pLayerRole->getPlayer(),cocos2d::CCRectMake(0, 0, screenSize.width * 2, screenSize.height * 2));
        m_pLayerRole->runAction(follow);
        follow->release();
        
        m_pLayerRole->addChild(m_pLayerBackGround,-10);
        m_pLayerRole->addChild(m_pLayerParticle);
        m_pLayerRole->addChild(m_pLayerEnemy);
        m_pLayerRole->addChild(m_pLayerBullet);

        
        addChild(m_pLayerRole,0);
        addChild(m_pLayerUserInterface,0);
        
        
		scheduleUpdate();

		setTag(SCENE_GAMING);

		return true;
	}
}