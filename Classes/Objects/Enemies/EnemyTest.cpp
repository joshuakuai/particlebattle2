//
//  EnemyTest.cpp
//  ParticleBattle2
//
//  Created by 程 思源 on 13-11-18.
//
//

#include "EnemyTest.h"
#include "FollowingMovement.h"

using namespace cocos2d;
bool EnemyTest::init()
{
    
    if ( !Entity::init() ) {
        return false;
    }
    
    FollowingMovement *pFollowingMovement = FollowingMovement::create();
    
    m_pSprite = CCSprite::create("money.png");
    addChild(m_pSprite);
    addChild(pFollowingMovement);
    
    m_life = 5;
    m_coolDown = 3;
    //scheduleUpdate();
    
    return true;
}
void EnemyTest::takeDamages(const unsigned int i_damge)
{

    m_life -= i_damge;
    
    if (m_life <= 0 ) 
        getsKilled();
}
