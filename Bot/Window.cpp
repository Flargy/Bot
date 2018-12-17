#include "Window.h"
#include <iostream>
using namespace std;
namespace Bot {


	Window::Window()
	{
		SDL_Init(SDL_INIT_EVERYTHING);
		wind = SDL_CreateWindow("Bot", 100, 100, 800, 600, 0);
		ren = SDL_CreateRenderer(wind, -1, 0);

		


	}


	Window::~Window()
	{
		SDL_DestroyWindow(wind);
		SDL_DestroyRenderer(ren);
	}
}