// ScrewEngine.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include "ScrewWindow.h"
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
	private:
		std::unique_ptr<ScrewWindow> window;
	};
}

// TODO: Reference additional headers your program requires here.
