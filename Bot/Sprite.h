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
		Sprite(const char* path, int x, int y, bool isPlayer);

	public:

		const char* path;
		SDL_Rect getRect() {return rect;}
		SDL_Texture* getTexture() {return tx;}
		bool getTag() { return isPlayer; }
		void setTexture(SDL_Texture* tx) {}
		virtual ~Sprite();
		void draw();

		//virtual Sprite* getInstance() = 0;

		
	private:
		SDL_Surface* surf;
		SDL_Rect rect;
		SDL_Texture* tx;
		bool isPlayer;

	};
	extern Sprite spr;


}
#endif