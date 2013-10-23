#pragma once

#ifndef __DEF__GEOSHIP__SCENE__MAINMENU
#define __DEF__GEOSHIP__SCENE__MAINMENU

#include "cocos2d.h"

namespace GeoShip
{

	class SceneMainMenu : public cocos2d::CCScene
	{
	public:
		SceneMainMenu(void);
		~SceneMainMenu(void);

		//init main menu
		virtual bool init();

		//create main menu
		CREATE_FUNC(SceneMainMenu);
	};

}

#endif
