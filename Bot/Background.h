#ifndef BACKGROUND_H
#define BACKGROUND_H
#include "Sprite.h"
#include <SDL.h>
#include <SDL_image.h>
#pragma once

namespace Bot {

	class Background : public Sprite
	{

	protected:
		Background(const char*, int x, int y);
	public:
		static Background* getInstance(const char* path, int x = 0, int y = 0);
		~Background();
	private:
		int x, y;
	};
}
#endif
