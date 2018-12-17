#include "Sprite.h"
#include "Window.h"
#include "GameSession.h"
#include <SDL_image.h>
#include <iostream>

using namespace std;
namespace Bot {
	GameSession* gs;
	Window* win;
	Sprite::Sprite(const char* path, int x, int y)
	{
		//gs = GameSession::Instance();
		SDL_Surface* surf = IMG_Load(path);
		cout << "\n" << "SDL_Window: " << win->getWin();
		SDL_Texture* tx = SDL_CreateTextureFromSurface(win->getRen(), surf);
		SDL_Rect rect = { 0, 0, surf->w, surf->h };

		SDL_FreeSurface(surf);
		
		//this->path = path;

		gs->add(this);


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