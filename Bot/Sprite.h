#ifndef SPRITE_H
#define SPRITE_H
#pragma once
#include <SDL.h>

namespace Bot {

	class Sprite
	{
	
	protected:

		Sprite();

	public:


		SDL_Rect getRect() {return rect;}
		SDL_Texture* getTexture() {return tx;}
		void setTexture(SDL_Texture* tx) {}
		virtual ~Sprite();

		
	private:
		SDL_Surface surf;
		SDL_Rect rect;
		SDL_Texture* tx;

	};



}
#endif