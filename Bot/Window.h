#ifndef WINDOW_H
#define WINDOW_H
#pragma once
#include <SDL.h>


namespace Bot {
	class Window
	{
	public:
		Window();
		~Window();
		SDL_Window* getWin() {
			return wind;
		}
		SDL_Renderer* getRen() {
			return ren;
		}
	private:
		SDL_Window* wind;
		SDL_Renderer* ren;

	};
	//extern Window* win;

}
#endif