#include "Sprite.h"
#include "Window.h"
#include <SDL_image.h>


namespace Bot {
	Window winclass;

	Sprite::Sprite(const char* path, int x, int y)
	{
		SDL_Surface* surf = IMG_Load(path);
		SDL_Texture* tx = SDL_CreateTextureFromSurface(winclass.getRen(), surf);
	}

	/* Saker som classen kommer behöva
	gravity
	collision
	bouncy

	*/

	Sprite::~Sprite()
	{
	}
}