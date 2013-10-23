#pragma once

#ifndef __DEF_GEOSHIP_MODULE_CANNON__
#define __DEF_GEOSHIP_MODULE_CANNON__

#include "cocos2d.h"

#include "Bullet.h"
#include "Module.h"

namespace GeoShip
{

	class FireableActor;

	class Cannon : public Module
	{
	public:
		Cannon();
		~Cannon(void);

		virtual void Fire() = 0;

		virtual void update(float delta);

		virtual void SetCoolDown(float cd);
		virtual void SetOwner(FireableActor* pa);

	protected:

		float m_fireCoolDown;
		float m_fireCoolDownMax;

		FireableActor* m_pOwner;

		virtual void addBulletToLayer(Bullet* pb);
		virtual bool fireCheck();
	};

}

#endif

