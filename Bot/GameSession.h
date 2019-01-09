#ifndef GAMESESSION_H
#define GAMESESSION_H
#include "Sprite.h"
#include "Window.h"
#include <vector>
#include <functional>
#include <map>


namespace Bot {
	class GameSession
	{
	public:
		GameSession();
		void add(Sprite*);
		void run();
		void remove(Sprite*);
		void pauseG();
		~GameSession();
		static GameSession* Instance();
		void setFps(int FPSN);
		int getFps() { return FPS; }
		Window* getWindow() { return win; }
		Window* win;
		/*void addKeyBind(int i, std::function<void()>);
		void buttonDown(const int button);*/
		

	private:
		bool pause = false;
		std::vector<Sprite*> spriteVec;
		std::vector<Sprite*> addSprite;
		std::vector<Sprite*> removeSprite;
		/*std::vector < std::pair<int,std::function<void()>>> keyBind;
		std::map <int, std::function<void()>> bindKey;*/
		static GameSession* instance;
		int FPS = 60;
		int frameDelay = 1000 / FPS;
		Uint32 frameStart;
		int frameTime;
	};

	extern GameSession* gs;
	
}
#endif
