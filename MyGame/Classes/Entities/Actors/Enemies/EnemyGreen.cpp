#include "EnemyGreen.h"

namespace GeoShip
{

	EnemyGreen::EnemyGreen(void)
	{
		m_speed = 100.0;
		m_TextureName = "EnemyGreen.png";
		m_Size = cocos2d::CCSize(50,50);
	}


	EnemyGreen::~EnemyGreen(void)
	{
	}

	void EnemyGreen::update(float delta)
	{
		Enemy::update(delta);
	}

	bool EnemyGreen::init()
	{
		if(!Enemy::init()) return false;
		return true;
	}

	bool EnemyGreen::IsCollide(float px,float py)
	{
		float dx = px - getPositionX();
		float dy = py - getPositionY();
		if(sqrtf(dx * dx + dy * dy) < 25) return true;
		return false;
	}

	
}