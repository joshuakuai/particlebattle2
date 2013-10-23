//
//  LayerBackGround.h
//  MyGame
//
//  Created by 程 思源 on 13-10-24.
//
//

#ifndef __MyGame__LayerBackGround__
#define __MyGame__LayerBackGround__

#include <iostream>
#include "cocos2d.h"



namespace GeoShip
{
    
	class LayerBackGround : public cocos2d::CCLayer
	{
	public:
		LayerBackGround(void);
		~LayerBackGround(void);
        
		virtual void update(float delta);
		virtual bool init();
		CREATE_FUNC(LayerBackGround);
        
		
        
	private:

		cocos2d::CCRect border;
        
	};
    
}
#endif /* defined(__MyGame__LayerBackGround__) */
