#include "Player.h"
#include <iostream>


namespace Bot {

	Player::Player(const char* path, int x, int y):Sprite(path,x,y, 2)
	{ 
	}
	void Player::moveRight() {
		getRect()->x++;
	}
	void Player::moveLeft() {
		getRect()->x --;
		
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