// Example program:
// Using SDL2 to create an application window

#include "SDL.h"
#include "ScrewEngine.h"

int main(int argc, char* argv[]) {


    // Create an application window with the following settings:
    SE::ScrewEngine engine;

    engine.CreateWindow();

    engine.GameLoop();

    // Clean up
    return 0;
}