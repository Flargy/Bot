#ifndef GAMESESSION_H
#define GAMESESSION_H
#include "Sprite.h"
#include "Window.h"
#include <vector>
#include <functional>
#include <map>
#include <memory>


namespace Bot {
	class GameSession
	{
	public:
		GameSession();
		//void add(std::shared_ptr<Sprite>);
		void run();
		//void remove();
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
	//	std::shared_ptr<Level> level;
		bool pause = false;
	/*	std::vector<std::shared_ptr<Sprite>> spriteVec;
		std::vector <std::shared_ptr<Sprite>> addSprite;
		std::vector<std::shared_ptr<Sprite>> removeSprite;*/

		//std::vector<Sprite*> spriteVec;
		//std::vector<Sprite*> addSprite;
		//std::vector<Sprite*> removeSprite;
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
