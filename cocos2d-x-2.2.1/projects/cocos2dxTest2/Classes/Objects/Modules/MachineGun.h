//
//  MachineGun.h
//  ParticleBattle2
//
//  Created by 程 思源 on 13-11-18.
//
//

#ifndef __ParticleBattle2__MachineGun__
#define __ParticleBattle2__MachineGun__

#include <iostream>
#include "Entity.h"

class MachineGun : public Entity
{
public:
    
    CREATE_FUNC(MachineGun);
    
    virtual bool init();

    void Shoot(const float angle);
private:
    float m_omega;

    
    void update(float dt);
    cocos2d::CCSprite *m_pSprite;
    unsigned int m_fireRange;
    
    
    
    
    inline float getWorldRotation()
    {
        float newAngle =  360 +( getRotation() + getParent()->getRotation());
        return newAngle;
    }
    inline void setWorldRotation( const float i_worldRotation )
    {
        setRotation( i_worldRotation - 360 - getParent()->getRotation() );
    }
    
};


#endif /* defined(__ParticleBattle2__MachineGun__) */
