#ifndef SPRITE_H
#define SPRITE_H
#pragma once
#include <SDL.h>
#include <SDL_image.h>

namespace Bot {

	class Sprite
	{
	
	protected:

		Sprite(const char* path, int x, int y);

	public:

		const char* path;
		SDL_Rect getRect() {return rect;}
		SDL_Texture* getTexture() {return tx;}
		void setTexture(SDL_Texture* tx) {}
		virtual ~Sprite();

		//virtual Sprite* getInstance() = 0;

		
	private:
		SDL_Surface* surf;
		SDL_Rect rect;
		SDL_Texture* tx;

	};
	extern Sprite spr;


}
#endif