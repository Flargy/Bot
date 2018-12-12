#include "GameSession.h"
#include <SDL.h>
#include <vector>

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

	void GameSession::run() {
		bool quit = false;

		while (!quit) {
			SDL_Event event;
			while (SDL_PollEvent(&event)) {
				switch (event.type) {
					case SDL_QUIT: quit = true; break;


				}//switch

			}//inre while

			for (Sprite* s : addSprite)
				spriteVec.push_back(s);
			addSprite.clear();

			for (Sprite* s : removeSprite) {
				for (vector<Sprite*>::iterator i = spriteVec.begin(); i != spriteVec = spriteVec.end();) {
					if (*i == s) {
						i == spriteVec.erase(i);
						delete s;
					}
				}
			}

		}//yttre while
	}//GameSession run

	GameSession::~GameSession()
	{
	}
}