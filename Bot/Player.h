#ifndef PLAYER_H
#define PLAYER_H
#pragma once
#include "Sprite.h"
#include <SDL.h>
#include <SDL_image.h>

namespace Bot {

	class Player
	{

	protected:
		Player(const char* path);
	public:
		~Player();
	};
}
#endif