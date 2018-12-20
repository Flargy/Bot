#ifndef OBJECTS_H
#define OBJECT_H
#include "Sprite.h"
#include <SDL.h>
#include <SDL_image.h>
#pragma once


namespace Bot {
	class Objects : public Sprite
		
	{

	protected:
		Objects(const char* path , int x, int y);
	public:
		~Objects();
		static Objects* getInstance(const char* path, int x=0, int y=0);

	private:
		
	};
}
#endif
