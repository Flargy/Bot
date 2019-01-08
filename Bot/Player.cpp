#include "Player.h"
#include <iostream>


namespace Bot {


	Player::Player(const char* path, int x, int y):Transform(path,x,y, 2)
	{ 
	}
	void Player::moveRight() {
		getRect()->x++;
		//s�tt velocity till positiv
	}
	void Player::moveLeft() {
		getRect()->x --;

		//s�tt velocity till negativ
	}
	
	void Player::setPlayer() {
		spr = this;
	}
	Player* Player::getInstance(const char* path, int x, int y) {
		return new Player(path, x, y);
	}

	Player::~Player()
	{
		SDL_DestroyTexture(getTexture());
	}
}