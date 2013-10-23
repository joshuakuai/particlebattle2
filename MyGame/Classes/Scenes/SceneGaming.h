#pragma once

#ifndef __DEF_GEOSHIP_SCENE_GAMING__
#define __DEF_GEOSHIP_SCENE_GAMING__

#include "cocos2d.h"

#include "LayerRole.h"
#include "LayerEnemy.h"
#include "LayerBullet.h"
#include "LayerParticle.h"
#include "LayerUserInterface.h"
#include "LayerBackGround.h"
namespace GeoShip
{

	class SceneGaming : public cocos2d::CCScene
	{
	public:
		SceneGaming(void);
		~SceneGaming(void);

		virtual void update(float delta);
		virtual bool init();
		CREATE_FUNC(SceneGaming);

		inline LayerBullet* GetLayerBullet();
		inline LayerEnemy* GetLayerEnemy();
		inline LayerRole* GetLayerRole();
		inline LayerParticle* GetLayerParticle();

	private:
		//layers
		LayerRole*		m_pLayerRole;
		LayerEnemy*		m_pLayerEnemy;
		LayerBullet*	m_pLayerBullet;
		LayerParticle*	m_pLayerParticle;
        LayerUserInterface* m_pLayerUserInterface;
        LayerBackGround* m_pLayerBackGround;
	};

}

#include "SceneGaming.inl.h"

#endif

