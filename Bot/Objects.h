#ifndef OBJECTS_H
#define OBJECT_H
#pragma once
#include "Sprite.h"
#include <SDL.h>
#include <SDL_image.h>

namespace Bot {
	class Objects
	{

	protected:
		Objects(const char* path);
	public:
		~Objects();
	};
}
#endif
