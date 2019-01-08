#ifndef OBJECTS_H
#define OBJECTS_H
#include <SDL.h>
#include <SDL_image.h>
#include "Transform.h"
#pragma once


namespace Bot {
	class Objects : public Transform
		
	{

	protected:
		Objects(const char* path , int x, int y);
	public:
		~Objects();
		static Objects* getInstance(const char* path, int x=0, int y=0);

	private:
		
	};

	extern Objects* obj;
}
#endif
