#include "Enemy.h"

namespace GeoShip
{

	Enemy::Enemy(void)
	{
	}


	Enemy::~Enemy(void)
	{
	}

	void Enemy::update(float delta)
	{
		FireableActor::update(delta);
	}

	bool Enemy::init()
	{
		if(!FireableActor::init()) return false;
		return true;
	}

	
}