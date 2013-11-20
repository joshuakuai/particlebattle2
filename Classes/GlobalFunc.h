//
//  GlobalFunc.h
//  ParticleBattle2
//
//  Created by 程 思源 on 13-11-19.
//
//

#ifndef __ParticleBattle2__GlobalFunc__
#define __ParticleBattle2__GlobalFunc__

#include <iostream>
#include "cocos2d.h"
#define SCRHEIGHT 640
#define SCRWIDTH  960

// 根据自己的角速度转向目标方向   要放在update里
float rotateToVec2WithOmega(const cocos2d::CCPoint i_dr,const float i_omega,const float i_currentAngle);

// 要向前移动的话，通过这个函数获取下次移动到的坐标  要放在update里
cocos2d::CCPoint moveForward( const float i_rotation, const float i_speed, const cocos2d::CCPoint i_currentPosition);



// customed Rect.  Rotatable！
struct collisionRect
{
    cocos2d::CCPoint leftTop;
    cocos2d::CCPoint rightTop;
    cocos2d::CCPoint leftBottom;
    cocos2d::CCPoint rightBottom;
    
    
public:
    bool collisionDetection( collisionRect i_Rect )
    {
        // Compare every side to see if two rotated rects colliding....
        if( ccpSegmentIntersect(leftTop, rightTop, i_Rect.leftTop, i_Rect.rightTop) )
            return true;
        if( ccpSegmentIntersect(leftTop, rightTop, i_Rect.leftTop, i_Rect.leftBottom) )
            return true;
        if( ccpSegmentIntersect(leftTop, rightTop, i_Rect.rightTop, i_Rect.rightBottom) )
            return true;
        if( ccpSegmentIntersect(leftTop, rightTop, i_Rect.leftBottom, i_Rect.rightBottom) )
            return true;
        
        if( ccpSegmentIntersect(leftTop, leftBottom, i_Rect.leftTop, i_Rect.rightTop) )
            return true;
        if( ccpSegmentIntersect(leftTop, leftBottom, i_Rect.leftTop, i_Rect.leftBottom) )
            return true;
        if( ccpSegmentIntersect(leftTop, leftBottom, i_Rect.rightTop, i_Rect.rightBottom) )
            return true;
        if( ccpSegmentIntersect(leftTop, leftBottom, i_Rect.leftBottom, i_Rect.rightBottom) )
            return true;
        
        if( ccpSegmentIntersect(rightTop, rightBottom, i_Rect.leftTop, i_Rect.rightTop) )
            return true;
        if( ccpSegmentIntersect(leftTop, rightBottom, i_Rect.leftTop, i_Rect.leftBottom) )
            return true;
        if( ccpSegmentIntersect(leftTop, rightBottom, i_Rect.rightTop, i_Rect.rightBottom) )
            return true;
        if( ccpSegmentIntersect(leftTop, rightBottom, i_Rect.leftBottom, i_Rect.rightBottom) )
            return true;
        
        if( ccpSegmentIntersect(leftBottom, rightBottom, i_Rect.leftTop, i_Rect.rightTop) )
            return true;
        if( ccpSegmentIntersect(leftBottom, rightBottom, i_Rect.leftTop, i_Rect.leftBottom) )
            return true;
        if( ccpSegmentIntersect(leftBottom, rightBottom, i_Rect.rightTop, i_Rect.rightBottom) )
            return true;
        if( ccpSegmentIntersect(leftBottom, rightBottom, i_Rect.leftBottom, i_Rect.rightBottom) )
            return true;
        
        
        return false;
    }
};



#endif /* defined(__ParticleBattle2__GlobalFunc__) */
