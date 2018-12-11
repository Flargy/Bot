#include "Window.h"
#include <SDL.h>


namespace Bot {


	Window::Window()
	{
		SDL_Init(SDL_INIT_EVERYTHING);
		win = SDL_CreateWindow("Bot", 100, 100, 800, 600, 0);
		ren = SDL_CreateRenderer(win, -1, 0);

	}


	Window::~Window()
	{
	}
}