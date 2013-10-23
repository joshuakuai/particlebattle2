#include "Module.h"

namespace GeoShip
{

	Module::Module(void)
		:m_moduleType(UNKNOWN)
	{
	}


	Module::~Module(void)
	{
	}

	bool Module::init()
	{
		if(!Entity::init()) return false;
		
		return true;
	}

	void Module::update(float delta)
	{
	}

	ModuleType Module::GetModuleType()
	{
		return m_moduleType;
	}

}