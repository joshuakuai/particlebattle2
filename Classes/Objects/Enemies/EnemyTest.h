//
//  EnemyTest.h
//  ParticleBattle2
//
//  Created by 程 思源 on 13-11-18.
//
//

#ifndef __ParticleBattle2__EnemyTest__
#define __ParticleBattle2__EnemyTest__

#include <iostream>
#include "Entity.h"

class EnemyTest : public Entity
{
public:
    
    CREATE_FUNC(EnemyTest);
    
    virtual bool init();
    
    void takeDamages(const unsigned int);
private:
    //void update(float dt);
    cocos2d::CCSprite *m_pSprite;

    unsigned int m_life;
    
};

#endif /* defined(__ParticleBattle2__EnemyTest__) */
