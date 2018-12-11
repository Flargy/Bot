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
			return win;
		}
		SDL_Renderer* getRen() {
			return ren;
		}

	private:
		SDL_Window* win;
		SDL_Renderer* ren;

	};

}
#endif