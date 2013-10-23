//
//  LayerUserInterface.cpp
//  MyGame
//
//  Created by 程 思源 on 13-10-24.
//
//

#include "LayerUserInterface.h"
#include "SneakyJoystickSkinnedBase.h"
#include "SneakyJoystick.h"
#include "Roleship.h"
#include "LayerRole.h"

namespace GeoShip
{
    
	LayerUserInterface::LayerUserInterface(void)
	{
		//temp
        cocos2d::CCSize s = cocos2d::CCDirector::sharedDirector()->getWinSize();
		border = cocos2d::CCRect(0,0,s.width,s.height);
	}
    
    
	LayerUserInterface::~LayerUserInterface(void)
	{
	}
    
	void LayerUserInterface::update(float delta)
	{
		cocos2d::CCLayer::update(delta);
        
        
        
        cocos2d::CCPoint velocity = joyStick->getVelocity();// range  0-1
        Roleship *ship = LayerRole::getPlayer();
        
        ship->setPosition(ccp(ship->getPosition().x + velocity.x * 10, ship->getPosition().y + velocity.y * 10));
        
        
	}
    
	bool LayerUserInterface::init()
	{
		cocos2d::CCLayer::init();
        joyStickInit();
        
		scheduleUpdate();
        
		return true;
	}

    void LayerUserInterface::joyStickInit()
    {
        
        joyStick = new SneakyJoystick();
        joyStick->autorelease();
        joyStick->initWithRect(cocos2d::CCRectZero);
        joyStick->setAutoCenter(true);
        joyStick->setHasDeadzone(true);
        joyStick->setDeadRadius(10);
        
        SneakyJoystickSkinnedBase *joystickSkin = new SneakyJoystickSkinnedBase();
        joystickSkin->autorelease();
        joystickSkin->init();
        joystickSkin->setBackgroundSprite(cocos2d::CCSprite::create("button-default.png"));
        joystickSkin->setThumbSprite(cocos2d::CCSprite::create("button-disabled.png"));
        joystickSkin->getThumbSprite()->setScale(0.5f);
        joystickSkin->setPosition(ccp(50, 50));
        joystickSkin->setJoystick(joyStick);
        
        addChild(joystickSkin);
    }
    
}
