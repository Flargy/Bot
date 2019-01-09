#ifndef PLAYER_H
#define PLAYER_H
#pragma once
#include "Transform.h"
#include <vector>

namespace Bot {

	class Player : public Transform
	{

	protected:
		Player(const char* path, int x, int y);
	public:
		void moRight();
		void move();
		void buttonEvent(SDL_KeyboardEvent event) {}
		static Player* getInstance(const char* path, int x = 0, int y = 0);
		~Player();
		Player* getPlayer() { return this; }
		void setPlayer();



	private:

		int x, y;
	};


}
#endif