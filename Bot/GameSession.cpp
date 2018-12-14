#include "GameSession.h"
#include "Window.h"
#include "Sprite.h"
#include <iostream>


using namespace std;
namespace Bot {
	Window* win = new Window();
	GameSession* GameSession::instance = NULL;

	GameSession* GameSession::Instance() {
		if (instance)
			instance = new GameSession;
		return instance;
	}

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
		cout << "\n" << "sprite was added";
	}
	
	void GameSession::run() {
		
		bool quit = false;

		while (!quit) {
			SDL_Event event;
			while (SDL_PollEvent(&event)) {
				//cout << quit;
				// %eventkey.keysym.sym
				switch (event.type) {
				case SDLK_LEFT:cout << " inne is inner while "; break;
				case SDL_QUIT: quit = true; break;
				//case SDL_KEYDOWN: quit = true; break;

				}//switch


				for (Sprite* s : addSprite)
					spriteVec.push_back(s);
				addSprite.clear();

				for (Sprite* s : removeSprite) {
					for (vector<Sprite*>::iterator i = spriteVec.begin(); i != spriteVec.end();) {
						cout <<"\n" <<" remove akriverades ";
						if (*i == s) {
							i == spriteVec.erase(i);
							delete s;
						}//if
						else i++;
					}//inner for
				}
				removeSprite.clear();

				//SDL_RenderClear(win.getRen());

				for (Sprite* s : spriteVec) {
					cout <<"\n"<< s->path << "\n";
					SDL_RenderCopy(win->getRen(), s->getTexture(), NULL, NULL);
					cout << "\n" << "render copy lyckades";
				}//outer for

				SDL_RenderPresent(win->getRen());


			}//inre while




		}//yttre while
		delete &win;
	}//GameSession run

	GameSession::~GameSession()
	{
	}
}