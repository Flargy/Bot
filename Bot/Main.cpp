#include "GameSession.h"
#include <SDL.h>
#include "Sprite.h"
#include "Window.h"
#include "Player.h"
#include "Background.h"
#include "Objects.h"
#include "Transform.h"
#include <iostream>
#include <functional>
#include "KeyboardFunctions.h"
#include "Level.h"

using namespace std;
using namespace Bot;

int main(int argc, char** argv) {
	using namespace std::placeholders;
	GameSession::Instance();
	KeyboardFunctions::Instance();
	lvl = Level::createLevel();

	lvl->add(Background::getInstance("F:/ar2/GitHub/Bild/bg.jpg", false));
	std::cout << "background was created";
	std::shared_ptr<Player> play = Player::getInstance("F:/ar2/GitHub/Bild/AnimDude.png", 200, 200, true, 100, 1, 4);
	lvl->add(play);
	lvl->add(Objects::getInstance("F:/ar2/GitHub/Bild/Robot.jpg", 200, 420, false));

	play->setBounceHeight(-2.0F);
	play->setGravityDrag(2.0F);
	play->setMoveSpeed(4.0F);
	key->addKeyBind(1073741903, std::bind(&Player::moRight, play));
	key->addKeyBind(1073741904, std::bind(&Player::move, play));
	

	std::cout << gs->getFps();
	gs->setFps(60);
	std::cout << gs->getFps();

	gs->run();

	return 0;
}
// alltså fixa så att gameSessions destructor tarbort ALLA objekt.
// Fixa Text fält, Fixa förmågan att byta "level"
