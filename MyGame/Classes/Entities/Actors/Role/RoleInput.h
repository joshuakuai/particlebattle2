#pragma once

#ifndef __DEF_GEOSHIP_MODULE_ROLEINPUT__
#define __DEF_GEOSHIP_MODULE_ROLEINPUT__

#include "cocos2d.h"

#include "Roleship.h"

namespace GeoShip
{

	class RoleInput : public cocos2d::CCNode, public cocos2d::CCTargetedTouchDelegate
	{
	public:
		RoleInput(void);
		~RoleInput(void);

		CREATE_FUNC(RoleInput);

		virtual bool ccTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
		virtual void ccTouchMoved(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
		virtual void ccTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
		virtual void ccTouchCancelled(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);

		virtual void onEnter();
		virtual void onExit();

		void SetRoleShip(Roleship* pr);

	private:
		Roleship* m_pRoleShip;
	};

}

#endif

