//
//  MachineGun.cpp
//  ParticleBattle2
//
//  Created by 程 思源 on 13-11-18.
//
//

#include "MachineGun.h"
#include "Bullet.h"
#include "GamingLayer.h"
using namespace cocos2d;
bool MachineGun::init()
{

    if ( !Entity::init() ) {
        return false;
    }
    
    
    
    m_pSprite = CCSprite::create("CloseNormal.png");
    addChild(m_pSprite);
    

    m_omega = 3;
    m_coolDown = 0.1;
    m_fireRange = 500;
    scheduleUpdate();
    
    return true;
}

void MachineGun::update(float dt)
{
   Entity::update(dt);
    
    // Auto aimming and firing at target
    CCObject *pE;
    CCARRAY_FOREACH(GamingLayer::getGamingLayer()->getEnemyLayer()->getChildren(), pE)
    {
        Entity *pEnemy = (Entity*)(pE);
        
        CCPoint worldPosition = getParent()->convertToWorldSpace(getPosition());
        worldPosition = GamingLayer::getGamingLayer()->getBulletLayer()->convertToNodeSpace(worldPosition);
        
        if (ccpDistance(pEnemy->getPosition(), worldPosition) <= m_fireRange )
        {

            CCPoint dir = ccp(pEnemy->getPosition().x - worldPosition.x ,
                              pEnemy->getPosition().y - worldPosition.y );
            
            // Rotate to target dir
            float angle = rotateToVec2WithOmega( dir , m_omega, getWorldRotation());
            setWorldRotation(angle);
            
            // Shoot to target
           Shoot( (360 +( getRotation() + getParent()->getRotation()))+ ( 20 * CCRANDOM_0_1() - 10) );
        }
        
    }
    
}

void MachineGun::Shoot( const float angle )
{
    if (m_isCoolDown) {
        
        Bullet *pBullet = Bullet::create();
        
        
        CCPoint spawnPosition = getParent()->convertToWorldSpace(getPosition());
        spawnPosition = GamingLayer::getGamingLayer()->getBulletLayer()->convertToNodeSpace(spawnPosition);
        pBullet->setPosition( spawnPosition );
        
        
        pBullet->setRotation( angle );
        GamingLayer::getGamingLayer()->getBulletLayer()->addChild(pBullet);
    }
}
