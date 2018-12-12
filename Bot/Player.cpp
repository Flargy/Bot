#include "Player.h"
#include <SDL.h>
#include "Sprite.h"
#include "Window.h"
#include <SDL_image.h>

namespace Bot {

	Window win;

	Player::Player(const char* path)
	{ //skapa en surface och göra en textur av den.
		SDL_Surface* objctSurf = IMG_Load(path);
		SDL_Texture* ObjctTx = SDL_CreateTextureFromSurface(win.getRen(), objctSurf);
	}


	Player::~Player()
	{
	}
}