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




	GameSession* gs = GameSession::Instance();


	
	Background::getInstance("D:/GitHubRepositories/Bot/Bot/bg.jpg");


	Player :: getInstance("D:/GitHubRepositories/Bot/Bot/robot.jpg");


		gs->run();

	return 0;
}