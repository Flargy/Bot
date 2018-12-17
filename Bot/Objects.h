#ifndef OBJECTS_H
#define OBJECT_H
#pragma once
#include "Sprite.h"
#include <SDL.h>
#include <SDL_image.h>

namespace Bot {
	class Objects : public Sprite
		
	{

	protected:
		Objects(const char* path, int x, int y);
	public:
		~Objects();
		Objects* getInstance(const char* path, int x, int y);
	};
}
#endif
