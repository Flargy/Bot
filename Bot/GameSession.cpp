#include "GameSession.h"
#include "Window.h"
#include <iostream>


using namespace std;
namespace Bot {


	GameSession::GameSession()
	{
	}
	/*Saker som kommer behövas
	3 vektorer
	add
	remove
	sprites

	run loop
	add function
	remove funktion
	*/

	void GameSession::add(Sprite* s) {
		addSprite.push_back(s);
	}
	
	void GameSession::run() {
		bool quit = false;
		//Window* win = new Window();

		while (!quit) {
			SDL_Event event;
			while (SDL_PollEvent(&event)) {
				//cout << quit;
				// %eventkey.keysym.sym
				switch (event.type) {
				case SDLK_LEFT:cout << " inne is inner while "; break;
					case SDL_QUIT: quit = true; break;
					case SDL_KEYDOWN: quit = true; break;

				}//switch

			}//inre while

			for (Sprite* s : addSprite)
				spriteVec.push_back(s);
			addSprite.clear();

			for (Sprite* s : removeSprite) {
				for (vector<Sprite*>::iterator i = spriteVec.begin(); i != spriteVec.end();) {
					if (*i == s) {
						i == spriteVec.erase(i);
						delete s;
					}//if
					else i++;
				}//inner for
				removeSprite.clear();

				SDL_RenderClear(win.getRen());
				for (Sprite* s : spriteVec)
					int a = 0;
				
			}//outer for
			
		}//yttre while
		delete &win;
	}//GameSession run

	GameSession::~GameSession()
	{
	}
}