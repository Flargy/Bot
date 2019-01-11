#ifndef TEXT_H
#define TEXT_H
#include <SDL.h>
#include "SDL_ttf.h"
#include <string>
#include "GameSession.h"
#include "KeyboardFunctions.h"

namespace Bot {
	//class Text
	//{
	//public:
	//	void createText();
	//	Text();
	//	~Text();
	//private:
	//	std::string inputText = "";
	//	SDL_Rect textField{ 500, 50, 30, 30 };
	//	SDL_Color color{ 0,0,0 };
	//	SDL_Surface* textSurface;
	//	SDL_Texture* textTexture;
	//	SDL_Rect rect;
	//};
	//extern Text* txt;

	class Text
	{
	public:
		static Text* getInstance(int x, int y, std::string txt, int size);

		void tick();
		void draw() const;
		void createText();
		void changeText(std::string txt);

		~Text();
	protected:
		TTF_Font * font;
		SDL_Color color = { 255,255,255, 255 };
		SDL_Rect rect;
		SDL_Surface* txtSurf;
		SDL_Texture* txtTexture;
		std::string text;
		Text(int x, int y, std::string txt, int size);
	};
	extern Text* txt;
}
#endif // !1
