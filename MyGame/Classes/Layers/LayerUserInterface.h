//
//  LayerUserInterface.h
//  MyGame
//
//  Created by 程 思源 on 13-10-24.
//
//

#ifndef __MyGame__LayerUserInterface__
#define __MyGame__LayerUserInterface__

#include <iostream>
#include "cocos2d.h"

class SneakyJoystick;

namespace GeoShip
{
    
	class LayerUserInterface : public cocos2d::CCLayer
	{
	public:
		LayerUserInterface(void);
		~LayerUserInterface(void);
        
		virtual void update(float delta);
		virtual bool init();
		CREATE_FUNC(LayerUserInterface);
        
		
        
	private:
        void joyStickInit();
        
        SneakyJoystick *joyStick;
        
		cocos2d::CCRect border;
        
	};
    
}
#endif /* defined(__MyGame__LayerUserInterface__) */
