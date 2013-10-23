//
//  CollisionEffect.cpp
//  box2d
//
//  Created by 程 思源 on 13-10-19.
//
//

#include "CollisionEffect.h"
#include "PhysicsSprite.h"

#include "cocos2d.h"


using namespace cocos2d;
static CollisionEffect* instance;
CollisionEffect::CollisionEffect()
{
    instance = this;
}

CollisionEffect* CollisionEffect::sharedCollisionEffect()
{
    return instance;

}

void CollisionEffect::collide(b2Body *obj_1, b2Body *obj_2)
{
    /*
    CCSprite *s_1 = (CCSprite *)obj_1->GetUserData();
    CCSprite *s_2 = (CCSprite *)obj_2->GetUserData();
    CCLog("%d,%d",s_1->getTag(),s_2->getTag());
    if (s_1->getTag() == BULLET && s_2->getTag() == PLAYER) {
       
        std::vector<b2Body *>toDestroy = HelloWorld::sharedWorld()->toDestroy;
        
        if (std::find(toDestroy.begin(), toDestroy.end(),obj_1)
            == toDestroy.end()) {
            HelloWorld::sharedWorld()->toDestroy.push_back(obj_1);
        }
        
    }
    if (s_1->getTag() == PLAYER && s_2->getTag() == BULLET) {
        
        std::vector<b2Body *>toDestroy = HelloWorld::sharedWorld()->toDestroy;
        
        if (std::find(toDestroy.begin(), toDestroy.end(),obj_2)
            == toDestroy.end()) {
            HelloWorld::sharedWorld()->toDestroy.push_back(obj_2);
        }
        
    }
    
    */
}
