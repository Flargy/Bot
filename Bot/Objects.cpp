#include "Objects.h"


namespace Bot {

	Objects* obj;

	Objects::Objects(const char* path, int x, int y, bool anim, int speed, int index, int frames):Transform(path, x,y, 3, anim, speed, index, frames)
	{ 

	}
	std::shared_ptr<Objects> Objects::getInstance(const char* path, int x, int y, bool anim, int speed, int index, int frames) {
		
		return std::shared_ptr<Objects> (new Objects(path, x, y, anim, speed, index, frames));
	}

	Objects::~Objects()
	{
		SDL_DestroyTexture(getTexture());
	}
}



