#ifndef SPRITE_H
#define SPRITE_H
#include <SDL.h>
#include <SDL_image.h>
#include <map>
#include <memory>

namespace Bot {

	class Sprite
	{
	
	protected:

		Sprite(const char* path, int x, int y, int collide, bool anim, int speed, int index, int frames);

	public:

		const char* path;
		SDL_Rect* getRect() {return &rect;}
		SDL_Texture* getTexture() {return tx;}
		int getTag() { return collide; }
		bool getAnim() { return anim; }
		void setTexture(SDL_Texture* tx) {}
		virtual ~Sprite();
		void draw();
		virtual void moveLeft() {}
		virtual void moveRight() {}
		virtual void updatePosition(float i){}
		virtual void bounce() {}
		virtual void fallSpeed(float i) {}

		//virtual Sprite* getInstance() = 0;

		
	private:

		SDL_Surface* surf;
		SDL_Rect rect;
		SDL_Rect aRect{ 100, 100, 100, 100 };
		SDL_Rect sourceRect;
		SDL_Texture* tx;
		int collide;
		bool anim;
		bool success;
		int speed;
		int index;
		int frames;
		int x = 0,y = 0;
	};
	//extern std::shared_ptr<Sprite> spr;


}
#endif