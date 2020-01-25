// ScrewEngine.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include "ScrewWindow.h"
#include "ScrewGraphicsManager.h"
#include <memory>

namespace SE
{
	class ScrewEngine
	{
	public:
		ScrewEngine();
		~ScrewEngine();

		void CreateWindow();
		void GameLoop();
		void InitGraphics();
	private:
		std::unique_ptr<ScrewWindow> window;
		ScrewGraphicsManager graphicsManager;
	};
}

// TODO: Reference additional headers your program requires here.
