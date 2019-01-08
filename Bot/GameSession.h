#ifndef GAMESESSION_H
#define GAMESESSION_H
#include "Sprite.h"
#include "Window.h"
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
		static GameSession* Instance();
		void setFps(int FPSN);
		int getFps() { return FPS; }
		Window* getWindow() { return win; }
		Window* win;
		

	private:
		std::vector<Sprite*> spriteVec;
		//std::vector<Sprite*> removeSprite;
		//std::vector<Sprite*> addSprite;
		static GameSession* instance;
		int FPS = 60;
		int frameDelay = 1000 / FPS;
		Uint32 frameStart;
		int frameTime;
	};

	extern GameSession* gs;
	
}
#endif
