#include "RoleInput.h"
#include "cocos2d.h"
namespace GeoShip
{

	RoleInput::RoleInput(void)
	{
		
	}


	RoleInput::~RoleInput(void)
	{
		
	}

	bool RoleInput::ccTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent)
	{
		return true;
	}

	void RoleInput::ccTouchMoved(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent)
	{
		cocos2d::CCPoint p = pTouch->getLocation() - m_pRoleShip->getPosition();
		float a =  -CC_RADIANS_TO_DEGREES(p.getAngle());
		m_pRoleShip->SetMoveOri(a);
		
     
	}

	void RoleInput::ccTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent)
	{
	}

	void RoleInput::ccTouchCancelled(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent)
	{
	}

	void RoleInput::onEnter()
	{
		cocos2d::CCDirector::sharedDirector()->getTouchDispatcher()->addTargetedDelegate(this,0,true);
	}

	void RoleInput::onExit()
	{
		cocos2d::CCDirector::sharedDirector()->getTouchDispatcher()->removeDelegate(this);
	}

	void RoleInput::SetRoleShip(Roleship* pr)
	{
		m_pRoleShip = pr;
	}
	
}