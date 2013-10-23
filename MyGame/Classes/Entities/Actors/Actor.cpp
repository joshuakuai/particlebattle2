#include "Actor.h"

namespace GeoShip
{

	Actor::Actor(void)
	{
	}


	Actor::~Actor(void)
	{
	}

	bool Actor::IsCollide(float px,float py)
	{
		return false;
	}

    bool Actor::IsCollide(Actor & a)
	{
		return false;
	}

	void Actor::SetMoveOri(float ori)
	{
		setRotation(ori);
	}


}
