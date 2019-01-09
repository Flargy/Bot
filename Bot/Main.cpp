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

using namespace std;
using namespace Bot;

int main(int argc, char** argv) {
	using namespace std::placeholders;
	GameSession::Instance();
	KeyboardFunctions::Instance();


	Background::getInstance("F:/ar2/GitHub/Bild/bg.jpg");

	Player* play = Player::getInstance("F:/ar2/GitHub/Bild/blue.png", 200, 200);
	Objects::getInstance("F:/ar2/GitHub/Bild/Robot.jpg", 200, 420);
	play->setPlayer();

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
// Bryt loss player så den är en del av spel implementationen istället för motorn, skapa en animator, se över om transfer ska va ett child till sprite.
// Fixa så att Sprite sköter destructor functionerna för alla sprite object, fixa så att allt faktiskt tas bort när slutet avslutas, 
// alltså fixa så att gameSessions destructor tarbort ALLA objekt.
// Fixa Text fält, Fixa förmågan att byta "level"
// Eventuellt Pixel kollision
