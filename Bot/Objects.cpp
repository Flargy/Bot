#include "Objects.h"
#include <SDL.h>
#include <SDL_image.h>
#include "Sprite.h"
#include "Window.h"

namespace Bot {
	Window win;
	Objects::Objects(const char* path)
	{ //skapa en surface och g�ra en textur av den.
		SDL_Surface* objctSurf = IMG_Load(path);
		SDL_Texture* ObjctTx = SDL_CreateTextureFromSurface(win.getRen(), objctSurf);
	}


	Objects::~Objects()
	{
	}
}



//n�r du deklarerar funktionspekare m�ste du har paranteser