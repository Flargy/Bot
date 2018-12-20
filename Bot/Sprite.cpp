#include "Sprite.h"
#include "GameSession.h"
#include <SDL_image.h>
#include <SDL.h>
#include <iostream>

namespace Bot {
	//Window* win;
	Sprite::Sprite(const char* path, int x, int y)
	{
		surf = IMG_Load(path);
		tx = SDL_CreateTextureFromSurface(gs->getWindow()->getRen(), surf);

		SDL_FreeSurface(surf);

		rect.x += x;
		rect.y += y;
		

		gs->add(this);
	}

	Sprite::Sprite(const char* path, int x, int y, bool isPlayer) {
		surf = IMG_Load(path);
		tx = SDL_CreateTextureFromSurface(gs->getWindow()->getRen(), surf);
		rect = { 0, 0, surf->w, surf->h };

		SDL_FreeSurface(surf);

		rect.x += x;
		rect.y += y;
		this->isPlayer = isPlayer;

	}

	void Sprite::draw() {
		SDL_RenderCopy(gs->getWindow()->getRen(), getTexture(), NULL, &getRect());
	}


	

	Sprite::~Sprite()
	{
	}
}