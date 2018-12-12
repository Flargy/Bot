#ifndef GAMESESSION_H
#define GAMESESSION_H
#include "Sprite.h"
#include <vector>


namespace Bot {
	class GameSession
	{
	public:
		GameSession();
		void add(Sprite*);
		void run();
		void remove(Sprite*);
		~GameSession();

	private:
		std::vector<Sprite*> spriteVec;
		std::vector<Sprite*> removeSprite;
		std::vector<Sprite*> addSprite;
	};

}
#endif
