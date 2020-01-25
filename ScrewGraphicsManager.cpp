#include "ScrewGraphicsManager.h"

namespace SE
{
	ScrewGraphicsManager::ScrewGraphicsManager() : graphics()
	{

	}

	ScrewGraphicsManager::~ScrewGraphicsManager()
	{

	}


	// Load a graphic into memory
	bool ScrewGraphicsManager::LoadGraphics(std::string key)
	{
		// Check to see if we have the key
		if (this->graphics.count(key) == 0)
		{
			// If we don't load it
			this->graphics.insert({ key, std::make_shared<ScrewGraphics>() });
		}

		return true;
	}
}