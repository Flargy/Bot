#include "GameSession.h"
#include <SDL.h>
#include "Sprite.h"
#include "Window.h"
#include "Player.h"
#include "Background.h"
#include "Objects.h"
#include "Transform.h"
#include <iostream>

using namespace std;
using namespace Bot;

int main(int argc, char** argv) {


	GameSession::Instance();
	//Transform::Instance();

	
	Background::getInstance("G:/School/CPROG/Bilder/bg.jpg");

	Player* play = Player::getInstance("G:/School/CPROG/Bilder/FrictionBot.png", 200, 200);
	Objects::getInstance("G:/School/CPROG/Bilder/robot.jpg", 200, 420);
	play->setPlayer();

	play->setBounceHeight(-2.0F);
	play->setGravityDrag(2.0F);
	play->setMoveSpeed(4.0F);

	std::cout << gs->getFps();
	gs->setFps(60);
	std::cout << gs->getFps();
		
		gs->run();

	return 0;
}