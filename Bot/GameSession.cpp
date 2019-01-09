#include "GameSession.h"
#include "Background.h"
#include <iostream>
#include "Collision.h"
#include "KeyboardFunctions.h"



namespace Bot {
	GameSession* GameSession::instance = nullptr;
	GameSession* gs;
	
	void GameSession::pauseG() {
		pause = !pause;
	}

	GameSession* GameSession::Instance() {
		if (!instance)
			instance = new GameSession;
		gs = instance;
		return instance;
	}

	GameSession::GameSession()
	{
		win = new Window();
		
	}

	void GameSession::setFps(int FPSN) {
		FPS = FPSN;
		frameDelay = 1000 / FPS;
	}

	void GameSession::add(Sprite* s) {
		addSprite.push_back(s);
	}
	
	void GameSession::run() {
	

		
		bool quit = false;
		
		while (!quit) {
			frameStart = SDL_GetTicks();
			
			
			
			
			SDL_Event event;
			while (SDL_PollEvent(&event)|| pause) {
				switch (event.type) {
				case SDL_KEYDOWN:
					key->buttonDown(event.key.keysym.sym);
				//	anim(event.key.keysym.sym);
					break;
				case SDL_MOUSEBUTTONDOWN: break;
				case SDL_QUIT: quit = true; break;
				

				}//switch
			}//inre while
			for (Sprite* s : addSprite) {
				spriteVec.push_back(s);
			}
			addSprite.clear();
			
			for (Sprite* s : removeSprite) {
				for (std::vector<Sprite*>::iterator i = spriteVec.begin(); i != spriteVec.end();) {
					if (*i == s) {
						i == spriteVec.erase(i);
						delete s;
					}//if
					else i++;
				}//inner for
			}

			removeSprite.clear();

			for (Sprite* s : spriteVec) {
				if (s->getTag() == 2) {
					Sprite* p = s;
					for (Sprite* r : spriteVec) {
						if (r->getTag() == 3) {
							if (Collision::AABB(p->getRect(), r->getRect())) {
								p->bounce();
							}
						
						}
					}
				}
			}

			SDL_RenderClear(win->getRen());




			for (Sprite* s : spriteVec) {
				
				if (s->getTag() == 2) {
					s->updatePosition(9.82F);
				}
				s->draw();
			}//outer for

			SDL_RenderPresent(win->getRen());
			frameTime = SDL_GetTicks() - frameStart;
			if (frameDelay > frameTime) {
				SDL_Delay(frameDelay - frameTime);
			}


		}//yttre while
		delete win;     
	}//GameSession run
	
	GameSession::~GameSession()
	{
	}
}