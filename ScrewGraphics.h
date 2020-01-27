#pragma once

#include <string>
#include <vector>

namespace SE
{
	class ScrewGraphics
	{
	public:
		ScrewGraphics(std::string path);
		~ScrewGraphics();

	private:
		std::vector<unsigned char> image;
		unsigned int width, height;
	};
}
