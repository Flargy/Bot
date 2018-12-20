#include "Background.h"



namespace Bot {

	Background* bg;

	Background::Background(const char* path, int x, int y):Sprite(path,x,y, 1)
	{ 
	}

	Background* Background::getInstance(const char* path, int x, int y) {
		return new Background(path, x, y);
	}


	Background::~Background()
	{
		SDL_DestroyTexture(getTexture());
	}
}