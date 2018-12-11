#ifndef GAMESESSION_H
#define GAMESESSION_H
#include "Sprite.h"
#include <vector>


namespace Bot {
	class GameSession
	{
	public:
		GameSession();
		void add();
		void run();
		void remove();
		~GameSession();

	private:
		std::vector<Sprite*> spriteVec;
		std::vector<Sprite&> removeSprite;
		std::vector<Sprite&> addSprite;
	};

}
#endif
