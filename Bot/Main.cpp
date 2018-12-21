#include "GameSession.h"
#include <SDL.h>
#include "Sprite.h"
#include "Window.h"
#include "Player.h"
#include "Background.h"
#include "Objects.h"
#include <iostream>

using namespace std;
using namespace Bot;
int main(int argc, char** argv) {




	 GameSession::Instance();


	
	Background::getInstance("E:/ar2/GitHub/Bild/bg.jpg");

	Player :: getInstance("E:/ar2/GitHub/Bild/blue.png", 200, 200);

	Objects::getInstance("E:/ar2/GitHub/Bild/robit.jpg", 220, 220);
	std::cout << gs->getFps();
	gs->setFps(60);
	std::cout << gs->getFps();
		
		gs->run();

	return 0;
}