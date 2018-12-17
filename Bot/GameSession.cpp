#include "GameSession.h"
#include "Window.h"
#include "Sprite.h"
#include <iostream>


using namespace std;
namespace Bot {
	//Window* win = new Window();
	GameSession* GameSession::instance = NULL;
	//Window* win;
	std::vector<Sprite*> addSprite;
	std::vector<Sprite*> spriteVec;
	std::vector<Sprite*> removeSprite;

	GameSession* GameSession::Instance() {
		if (!instance)
			instance = new GameSession;


		return instance;
	}

	GameSession::GameSession()
	{
		win = new Window();
		cout << "\n" << "window created: " << win;
		cout << "\n" << "Window referens: " << &win;
		cout << "\n" << "SDL_Window: " << win->getWin();
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


		for (std::vector<Sprite*>::const_iterator i = addSprite.begin(); i != addSprite.end(); ++i)
			std::cout << *i << ' ';
	}
	
	void GameSession::run() {

		cout << "\n" << "run has started";


		
		bool quit = false;

		while (!quit) {
			SDL_Event event;
			while (SDL_PollEvent(&event)) {
				cout << "\n" << "inside event while";
				//cout << quit;
				// %eventkey.keysym.sym
				switch (event.type) {
				case SDLK_LEFT:cout << " inne is inner while "; break;
				case SDL_QUIT: quit = true; break;
					//case SDL_KEYDOWN: quit = true; break;

				}//switch
				cout << "\n" << "exits event while";

				for (Sprite* s : addSprite) {
				cout << "\n" << "inside for loop of add sprite";
				spriteVec.push_back(s);
			}
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
				cout << "\n" << "cleared remove sprite";
				SDL_RenderClear(win->getRen());

				for (Sprite* s : spriteVec) {
					SDL_RenderCopy(win->getRen(), s->getTexture(), NULL, &s->getRect());
					cout << "\n" << "render copy lyckades";
				}//outer for
				//SDL_SetRenderDrawColor(win->getRen(), 255, 50, 0, 255);



				SDL_RenderPresent(win->getRen());
				cout << "\n" << "rendererd stuff was presented";


			}//inre while




		}//yttre while
		delete win;
	}//GameSession run

	GameSession::~GameSession()
	{
	}
}