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

using namespace std;
using namespace Bot;
void mLeft() {
	spr->getRect()->x--;

}
void mRight() {
	spr->getRect()->x++;
}

int main(int argc, char** argv) {
	using namespace std::placeholders;
	//typedef void (Player::*moveRight)(void(*funcR));
	//moveRight p;
	//auto f = std::mem_fn(&Player::moveRight);
	//std::bind(&Player::move, &spr);
	
	//auto g = [](auto a) {&Player::move->spr};

	GameSession::Instance();
	//Transform::Instance();


	Background::getInstance("D:/ar2/GitHub/Bild/bg.jpg");

	Player* play = Player::getInstance("D:/ar2/GitHub/Bild/blue.png", 200, 200);
	Objects::getInstance("D:/ar2/GitHub/Bild/Robot.jpg", 200, 420);
	play->setPlayer();

	play->setBounceHeight(-2.0F);
	play->setGravityDrag(2.0F);
	play->setMoveSpeed(4.0F);
	gs->addKeyBind(1073741904, mLeft);
	gs->addKeyBind(1073741903, std::bind(&Player::move, spr));
	

	std::cout << gs->getFps();
	gs->setFps(60);
	std::cout << gs->getFps();

	gs->run();

	return 0;
}
//Bryt loss player s� den �r en del av spel implementationen ist�llet f�r motorn, skapa en animator, se �verom transfer ska va ett child till sprite.
// Fixa s� att Sprite sk�ter destructor functionerna f�r alla sprite object, fixa s� att allt faktiskt tas bort n�r slutet avslutas, allts� fixa s� att gameSessions destructor tarbort ALLA objekt.
// Fixa Text f�lt, Fixa f�rm�gan att byta "level"
//Eventuellt Pixel kollision
