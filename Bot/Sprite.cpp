#include "Sprite.h"
#include "GameSession.h"
#include <SDL_image.h>
#include <SDL.h>
#include <iostream>

using namespace std;
namespace Bot {
	//Window* win;
	Sprite::Sprite(const char* path, int x, int y)
	{
		surf = IMG_Load(path);
		tx = SDL_CreateTextureFromSurface(gs->getWindow()->getRen(), surf);
		rect = { 0, 0, surf->w, surf->h };

		SDL_FreeSurface(surf);

		rect.x += x;
		rect.y += y;
		

		gs->add(this);


	}

	void Sprite::draw() {
		rect.x++;
		SDL_RenderCopy(gs->getWindow()->getRen(), getTexture(), NULL, &getRect());
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