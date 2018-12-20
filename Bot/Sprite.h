#ifndef SPRITE_H
#define SPRITE_H
#pragma once
#include <SDL.h>
#include <SDL_image.h>

namespace Bot {

	class Sprite
	{
	
	protected:

		Sprite(const char* path, int x, int y, int collide);

	public:

		const char* path;
		SDL_Rect getRect() {return rect;}
		SDL_Texture* getTexture() {return tx;}
		int getTag() { return collide; }
		void setTexture(SDL_Texture* tx) {}
		virtual ~Sprite();
		void draw();

		//virtual Sprite* getInstance() = 0;

		
	private:
		SDL_Surface* surf;
		SDL_Rect rect;
		SDL_Texture* tx;
		int collide;

	};
	extern Sprite spr;


}
#endif