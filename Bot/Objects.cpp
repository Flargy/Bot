#include "Objects.h"


namespace Bot {

	Objects* obj;

	Objects::Objects(const char* path, int x, int y):Transform(path, x,y, 3)
	{ 

	}
	Objects* Objects::getInstance(const char* path, int x, int y) {
		
		return new Objects(path, x, y);
	}

	Objects::~Objects()
	{
		SDL_DestroyTexture(getTexture());
	}
}



