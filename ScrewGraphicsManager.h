#pragma once

#include "ScrewGraphics.h"

#include <map>
#include <string>
#include <memory>

namespace SE
{
	class ScrewGraphicsManager
	{
	public:
		ScrewGraphicsManager();
		~ScrewGraphicsManager();

		bool LoadGraphics(std::string);

	private:
		std::map<std::string, std::shared_ptr<ScrewGraphics>> graphics;
	};
}
