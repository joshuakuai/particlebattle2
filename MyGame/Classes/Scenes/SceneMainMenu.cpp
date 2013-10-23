#include "SceneMainMenu.h"

#include "GlobalDef.h"

namespace GeoShip
{

	SceneMainMenu::SceneMainMenu(void)
	{
	}


	SceneMainMenu::~SceneMainMenu(void)
	{
	}

	bool SceneMainMenu::init()
	{
		//do super init
		if(!cocos2d::CCScene::init())
			return false;

		setTag(SCENE_MAINMENU);
	}
}
