#include "Sprite.h"
#include "GameSession.h"
#include <iostream>
#include <istream>


using namespace std;
namespace Bot {
	
	//std::shared_ptr<Sprite> spr;
	Sprite::Sprite(const char* path, int x, int y, int collide, bool anim, int speed, int index, const int frames) {
		this->anim = anim;
		surf = IMG_Load(path);
		tx = SDL_CreateTextureFromSurface(gs->getWindow()->getRen(), surf);
		this->x = x;
		this->y = y;
		if(!anim)
			rect = { x, y, surf->w, surf->h }; 
		else {
			this->speed = speed;
			this->index = index;
			this->frames = frames;
			

			sourceRect = { 0,0,(surf->w / frames),(surf->h / index) };
			
			rect = { x, y, surf->w/frames, surf->h/index };
		}
		
		

		SDL_FreeSurface(surf);

		this->collide = collide;

	}

	void Sprite::resetPos(int x , int y ) {
		rect.x = x;
		rect.y = y;
	}

	void Sprite::draw() { // Fråga om detta är en ordentlig uppdatefunktion eller en "Tick funktion"

		if (anim) {
			SDL_RenderCopy(gs->getWindow()->getRen(), getTexture(), &sourceRect, &rect);
			try
			{
				
				sourceRect.x += sourceRect.w;
				if (sourceRect.x >= (sourceRect.w*frames)) {
					sourceRect.x = 0;
				}
			}
			catch (const std::exception&)
			{
			}
			
		
			
		}
		else {
			SDL_RenderCopy(gs->getWindow()->getRen(), getTexture(), NULL, getRect());
		}
	}
	// ekvation för att räkna ut vilken del av sprite sheeten som bör användas
	// t.ex, en sheet med 30 bilder bör ha att rectens tredje värde är getRect()->w / 30
	

	Sprite::~Sprite()
	{

	}
}