//
//  LayerBackGround.cpp
//  MyGame
//
//  Created by 程 思源 on 13-10-24.
//
//

#include "LayerBackGround.h"

namespace GeoShip
{
    
	LayerBackGround::LayerBackGround(void)
	{
		//temp
        cocos2d::CCSize s = cocos2d::CCDirector::sharedDirector()->getWinSize();
		border = cocos2d::CCRect(0,0,s.width,s.height);
	}
    
    
	LayerBackGround::~LayerBackGround(void)
	{
	}
    
	void LayerBackGround::update(float delta)
	{
		cocos2d::CCLayer::update(delta);
        

        
	}
    
	bool LayerBackGround::init()
	{
		cocos2d::CCLayer::init();
        
        
        cocos2d::CCSize s = cocos2d::CCDirector::sharedDirector()->getWinSize();
        cocos2d::CCSprite *bg = cocos2d::CCSprite::create("HelloWorld.png");
        bg->setPosition(ccp(s.width, s.height));
        bg->setScale(4.0f);
        
        
        addChild(bg);
		//scheduleUpdate();
        
		return true;
	}
}
