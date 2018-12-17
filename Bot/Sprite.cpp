#include "Sprite.h"
#include "GameSession.h"
#include <SDL_image.h>
#include <SDL.h>
#include <iostream>

using namespace std;
namespace Bot {
	GameSession* gs;
	Window* win;
	Sprite::Sprite(const char* path, int x, int y)
	{
		//gs = GameSession::Instance();
		cout << path;
		surf = IMG_Load(path);
		tx = SDL_CreateTextureFromSurface(win->getRen(), surf);
		rect = { 0, 0, surf->w, surf->h };

		SDL_FreeSurface(surf);
		
		//this->path = path;

		gs->add(this);


	}

	void Sprite::draw() {
		cout << "\n" << "drawing pictures";
		SDL_RenderCopy(win->getRen(), getTexture(), NULL, &getRect());
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