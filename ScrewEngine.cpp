#include "ScrewEngine.h"
#include <memory>

namespace SE
{
	// On creation of the engine we init sdl
	ScrewEngine::ScrewEngine() : window()
	{
		SDL_Init(SDL_INIT_VIDEO);
	}

	// On destruction we delete everythnig for sdl
	ScrewEngine::~ScrewEngine()
	{
		SDL_Quit();
	}

	// Create the window
	void ScrewEngine::CreateWindow()
	{
		this->window = std::make_unique<ScrewWindow>();
	}

	// The main game loop plans to add a state system where each state will have their own loop.
	void ScrewEngine::GameLoop()
	{
		SDL_Delay(3000);  // Pause execution for 3000 milliseconds, for example
	}

	// Load the needed graphics
	void ScrewEngine::InitGraphics()
	{
		this->graphicsManager.LoadGraphics("C:\\Users\\jaret\\source\\repos\\ScrewEngine\\assets\\test.png");
	}

}