#include "Player.h"


namespace Bot {

	Player::Player(const char* path, int x, int y):Sprite(path,x,y)
	{ 
	}

	Player* Player::getInstance(const char* path, int x, int y) {
		return new Player(path, x, y);
	}

	Player::~Player()
	{
		SDL_DestroyTexture(getTexture());
	}
}