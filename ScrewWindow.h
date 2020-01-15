#pragma once

#include "SDL.h"

namespace SE
{
	class ScrewWindow
	{
	public:
		ScrewWindow();
		~ScrewWindow();
	private:
		SDL_Window* window;
	};
}
