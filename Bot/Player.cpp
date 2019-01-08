#include "Player.h"
#include <iostream>


using namespace Bot;


	Player::Player(const char* path, int x, int y):Transform(path,x,y, 2)
	{ 
	}
	void Player::moveRight(void(*funcR)) {
		funcR;
	}
	void Player::moveLeft(void(*funcL)) {
		funcL;
	}
	void Player::move() {
	std::cerr << "hjello\n";
	}
	void Player::moRight(int rX) {
		getRect()->x += rX;
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
