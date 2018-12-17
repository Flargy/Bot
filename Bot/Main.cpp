#include "GameSession.h"
#include <SDL.h>
#include "Sprite.h"
#include "Window.h"
#include "Player.h"
#include "Background.h"
#include <iostream>

using namespace std;
using namespace Bot;
int main(int argc, char** argv) {



	cout << "\n" << "main started";

	GameSession* gs = GameSession::Instance();
	cout << "\n" << "game instance finished";


	
	Background::getInstance("G:/School/CPROG/Bilder/bg.jpg");

	cout << "\n" << "background is finished";

	Player :: getInstance("G:/School/CPROG/Bilder/robot.jpg");

	cout << "\n" << "player is finished";

		gs->run();

	return 0;
}