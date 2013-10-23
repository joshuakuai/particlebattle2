#pragma once

#ifndef __DEF_GEOSHIP_SCENE_GAMING_INL__
#define __DEF_GEOSHIP_SCENE_GAMING_INL__

#include "SceneGaming.h"

namespace GeoShip
{
	inline LayerBullet* SceneGaming::GetLayerBullet()
	{
		return m_pLayerBullet;
	}

	inline LayerEnemy* SceneGaming::GetLayerEnemy()
	{
		return m_pLayerEnemy;
	}

	inline LayerRole* SceneGaming::GetLayerRole()
	{
		return m_pLayerRole;
	}

	inline LayerParticle* SceneGaming::GetLayerParticle()
	{
		return m_pLayerParticle;
	}
}

#endif