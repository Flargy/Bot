#include "Objects.h"
#include "Sprite.h"

namespace Bot {
	Objects::Objects(const char* path, int x, int y):Sprite(path, x,y, false)
	{ 

	}
	Objects* Objects::getInstance(const char* path, int x, int y) {

		
		return new Objects(path, x, y);
	}

	Objects::~Objects()
	{
	}
}



//när du deklarerar funktionspekare måste du har paranteser