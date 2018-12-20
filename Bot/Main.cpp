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


	
	Background::getInstance("D:/GitHubRepositories/Bot/Bot/bg.jpg");

	Player :: getInstance("D:/GitHubRepositories/Bot/Bot/FrictionBot.png", 200, 200);

	Objects::getInstance("D:/GitHubRepositories/Bot/Bot/robot.jpg", 260, 260);


		gs->run();

	return 0;
}