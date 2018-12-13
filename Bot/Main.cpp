#include "GameSession.h"
#include <SDL.h>
#include "Sprite.h"
#include "Window.h"
#include "Player.h"
#include "Background.h"

using namespace std;
using namespace Bot;
int main(int argc, char** argv) {
	GameSession gs;
	
	Background::getInstance("G\School\CPROG\Bilder\bg");

	Player :: getInstance("G:\School\CPROG\Bilder\robot");
	gs.run();
	
	return 0;
}