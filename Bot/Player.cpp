#include "Player.h"
#include <iostream>


namespace Bot {

	Player::Player(const char* path, int x, int y):Sprite(path,x,y, 2)
	{ 
	}
	void buttonEvent(SDL_Event event) {
		switch (SDL_PollEvent(&event)) {
		case SDLK_LEFT: break;
		case SDLK_RIGHT: break;
		}
}
	Player* Player::getInstance(const char* path, int x, int y) {
		return new Player(path, x, y);
	}

	Player::~Player()
	{
		SDL_DestroyTexture(getTexture());
	}
}