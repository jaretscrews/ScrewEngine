#include "ScrewGraphics.h"
#include "lodepng.h"

#include <iostream>
#include <exception>

namespace SE
{
	ScrewGraphics::ScrewGraphics(std::string path) :
		image(), width(0), height(0)
	{
		std::vector<unsigned char> buffer;
		lodepng::load_file(buffer, path);
		unsigned int error = lodepng::decode(image, width, height, buffer);
		if (error) {
			throw std::runtime_error("decoder error " + std::to_string(error) + ": " + lodepng_error_text(error));
		}
	}

	ScrewGraphics::~ScrewGraphics()
	{

	}
}