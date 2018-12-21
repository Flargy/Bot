#ifndef PLAYER_H
#define PLAYER_H
#pragma once
#include "Sprite.h"
#include <SDL.h>
#include <SDL_image.h>

namespace Bot {

	class Player : public Sprite
	{

	protected:
		Player(const char* path, int x, int y);
	public:
		void buttonEvent(SDL_KeyboardEvent event){}
		static Player* getInstance(const char* path, int x = 0, int y = 0);
		~Player();
	private:
		int x , y;
	};
}
#endif