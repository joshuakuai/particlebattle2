//
//  CollisionEffect.h
//  box2d
//
//  Created by 程 思源 on 13-10-19.
//
//

#ifndef __box2d__CollisionEffect__
#define __box2d__CollisionEffect__

#include <iostream>
class b2Body;

class CollisionEffect
{
public:
    CollisionEffect();
    
    void collide(b2Body *obj_1, b2Body *obj_2);
    static CollisionEffect* sharedCollisionEffect();
    
private:
    
    

};
#endif /* defined(__box2d__CollisionEffect__) */
