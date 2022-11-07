#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "Engine.hpp"

int	main(int argc, char **argv)
{
    // if (SDL_Init(SDL_INIT_VIDEO) < 0)
	// {
	// 	std::cerr << "error: SDL_Init failed: " << SDL_GetError() << std::endl;
	// 	return (-1);
	// }

	// if (!(IMG_Init(IMG_INIT_PNG)))
	// {
	// 	std::cerr << "error: IMG_Init failed: " << SDL_GetError() << std::endl;
	// 	return (-1);
	// }


	// SDL_Quit();

	Engine::getInstance().init ();

	while (Engine::getInstance().isRunning())
	{
		Engine::getInstance().events();
		Engine::getInstance().update(1);
		Engine::getInstance().render();
	}

	Engine::getInstance().clean();

    return (0);
}