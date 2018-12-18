#include "GameSession.h"

#include "Sprite.h"
#include <iostream>


using namespace std;
namespace Bot {
	GameSession* GameSession::instance = NULL;
	GameSession* gs;
	//Window* win;

	std::vector<Sprite*> addSprite;
	//std::vector<Sprite*> spriteVec;
	std::vector<Sprite*> removeSprite;

	GameSession* GameSession::Instance() {
		if (!instance)
			instance = new GameSession;
		gs = instance;
		return instance;
	}

	GameSession::GameSession()
	{
		win = new Window();
		cout << "\n" << "Gamesession window: " << win->getWin();
		cout << "\n" << "gamesession window renderer: " << win->getRen();
		
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


		/*for (std::vector<Sprite*>::const_iterator i = addSprite.begin(); i != addSprite.end(); ++i)
			std::cout << *i << ' ';*/
	}
	
	void GameSession::run() {
		/*for (Sprite* s : addSprite) {
			s->draw();
			//SDL_RenderCopy(win->getRen(), s->getTexture(), NULL, &s->getRect());
		}


		SDL_Delay(50000);*/


		
		bool quit = false;

		while (!quit) {
			
			
			
			
			SDL_Event event;
			while (SDL_PollEvent(&event)) {
				//cout << quit;
				// %eventkey.keysym.sym
				switch (event.type) {
				case SDL_KEYDOWN:cout << " inne is inner while "; break;
				case SDL_QUIT: quit = true; break;
					//case SDL_KEYDOWN: quit = true; break;

				}//switch
			}//inre while
			for (Sprite* s : addSprite) {
				spriteVec.push_back(s);
			}
			addSprite.clear();


			for (Sprite* s : removeSprite) {
				for (vector<Sprite*>::iterator i = spriteVec.begin(); i != spriteVec.end();) {
					if (*i == s) {
						i == spriteVec.erase(i);
						delete s;
					}//if
					else i++;
				}//inner for
			}
			removeSprite.clear();
			SDL_RenderClear(win->getRen());

			for (Sprite* s : spriteVec) {
				
				s->draw();
				//SDL_RenderCopy(win->getRen(), s->getTexture(), NULL, &s->getRect());
			}//outer for
			 //SDL_SetRenderDrawColor(win->getRen(), 255, 50, 0, 255);

			SDL_RenderPresent(win->getRen());


		}//yttre while
		delete win;     
	}//GameSession run

	GameSession::~GameSession()
	{
	}
}