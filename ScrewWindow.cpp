#include "ScrewWindow.h"
#include <stdexcept>

namespace SE
{
	// Create the window
	ScrewWindow::ScrewWindow() : window()
	{
		this->window = SDL_CreateWindow(
			"An SDL2 window",                  // window titlez
			SDL_WINDOWPOS_UNDEFINED,           // initial x position
			SDL_WINDOWPOS_UNDEFINED,           // initial y position
			640,                               // width, in pixels
			480,                               // height, in pixels
			SDL_WINDOW_OPENGL                  // flags - see below
		);
		
		// Check that window was created
		if (this->window == nullptr) {
			// In the case that the window could not be made...
			throw std::runtime_error("Could not create window: " + std::string(SDL_GetError()));
		}
	}

	// Destroy window and destroy the sdl stuff
	ScrewWindow::~ScrewWindow()
	{
		SDL_DestroyWindow(this->window);
	}
}