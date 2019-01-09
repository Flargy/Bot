#include "Sprite.h"
#include "GameSession.h"
#include <SDL_image.h>
#include <SDL.h>
#include <iostream>

using namespace std;
namespace Bot {
	
	Sprite* spr;
	Sprite::Sprite(const char* path, int x, int y, int collide) {
		
		cout << "\n" << "second constructor activated";
		surf = IMG_Load(path);
		tx = SDL_CreateTextureFromSurface(gs->getWindow()->getRen(), surf);
		rect = { 0, 0, surf->w, surf->h };

		SDL_FreeSurface(surf);

		rect.x += x;
		rect.y += y;
		this->collide = collide;

		gs->add(this);

	}

	void Sprite::draw() {
		SDL_RenderCopy(gs->getWindow()->getRen(), getTexture(), NULL, getRect());
	}


	

	Sprite::~Sprite()
	{

	}
}