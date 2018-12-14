#include "GameSession.h"
#include <SDL.h>
#include "Sprite.h"
#include "Window.h"
#include "Player.h"
#include "Background.h"

using namespace std;
using namespace Bot;
int main(int argc, char** argv) {
	GameSession* gs = GameSession::Instance();

	
	Background::getInstance("G:/School/CPROG/Bilder/bg.jpg");

	Player :: getInstance("G:/School/CPROG/Bilder/robot.jpg");

	gs->run();

	
	return 0;
}