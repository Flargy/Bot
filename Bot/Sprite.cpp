#include "Sprite.h"
#include "Window.h"
#include "GameSession.h"
#include <SDL_image.h>
#include <iostream>

using namespace std;
namespace Bot {
	GameSession* gs;
	Window* win = gs->win;
	Sprite::Sprite(const char* path, int x, int y)
	{
		
		cout << "konstruktor startades";
		gs = GameSession::Instance();
		cout << "\n" << "gameSession instansen fixades";
		cout << path;
		SDL_Surface* surf = IMG_Load(path);
		if (surf == NULL)
			cout << "   surf is null  "  << SDL_GetError() << "\n";
		SDL_Texture* tx = SDL_CreateTextureFromSurface(win->getRen(), surf);
		if (tx == NULL)
			cout << "texture is null";
		SDL_Rect rect = { 0, 0, surf->w, surf->h };

		gs->add(this);
		cout << "\n" << "stuff should have been added to add";

		this->path = path;

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