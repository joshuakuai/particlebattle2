#include "Entity.h"

namespace GeoShip
{

	Entity::Entity(void):m_speed(0)
	{
	}


	Entity::~Entity(void)
	{
	}

	bool Entity::init()
	{
		if(!initWithFile(m_TextureName)) return false;
		
		const cocos2d::CCRect tr = getTextureRect();
		setTextureRect(cocos2d::CCRect(0,0,m_Size.width,m_Size.height));
		setTextureCoords(tr);
	

		//allow update
		scheduleUpdate();
		
		return true;
	}

	void Entity::update(float delta)
	{
		//move
		cocos2d::CCPoint pos = getPosition();
		float rot = -CC_DEGREES_TO_RADIANS(getRotation());
		pos.x += cosf(rot) * m_speed * delta;
		pos.y += sinf(rot) * m_speed * delta;

		setPosition(pos);
	}

	cocos2d::CCPoint Entity::getRelativeTranslate(const cocos2d::CCPoint & pos)
	{
		return cocos2d::CCPoint(pos.x + m_Size.width * 0.5f,pos.y + m_Size.height * 0.5f);
	}

}
