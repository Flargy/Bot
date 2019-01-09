#include "Player.h"
#include <iostream>


using namespace Bot;


	Player::Player(const char* path, int x, int y):Transform(path,x,y, 2)
	{ 
	}
	void Player::move() {
		getRect()->x--;
	}
	void Player::moRight() {
		getRect()->x++;
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
