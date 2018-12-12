#include "Background.h"
#include "Window.h"



namespace Bot {

	Background::Background(const char* path, int x, int y):Sprite(path,x,y)
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