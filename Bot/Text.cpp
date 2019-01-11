#include "Text.h"
#include <iostream>

namespace Bot {
	Text* txt;

	//Text::Text()
	//{
	//}


	//Text::~Text()
	//{
	//}

	//void Text::createText() {

	//	TTF_Font* font = TTF_OpenFont("Font/ariblk.ttf", 36);
	//	std::cout << "creating text";
	//	bool textInput = true;
	//	SDL_Color textColor = { 0, 0, 0, 0xFF };


	//	if (textInput) {

	//		SDL_StartTextInput();
	//		SDL_SetTextInputRect(&textField);
	//		while (textInput) {
	//			SDL_Event event;
	//			while (SDL_PollEvent(&event) != SDLK_KP_ENTER) {
	//				inputText += event.text.text;
	//				textSurface = TTF_RenderText_Solid(font, inputText.c_str(), textColor);
	//				textTexture = SDL_CreateTextureFromSurface(gs->win->getRen(), textSurface);
	//				rect = { 100, 100, textSurface->w, textSurface->h };
	//				SDL_RenderCopy(gs->win->getRen(), textTexture, NULL , &rect);

	//				SDL_FreeSurface(textSurface);
	//				SDL_DestroyTexture(textTexture);
	//				TTF_CloseFont(font);

	//			}//inre while


	//		}
	//		SDL_StopTextInput();
	//		textInput = false;
	//	}


	//}

	Text::Text(int x, int y, std::string txt, int size)
	{
		font = TTF_OpenFont("Font/ariblk.ttf", size);
		if (font == nullptr)
			throw std::runtime_error("Font not found!");
		rect.x = x;
		rect.y = y;
		createText();
	}

	Text* Text::getInstance(int x, int y, std::string txt, int size) {
		return new Text(x, y, txt, size);
	}

	void Text::createText() {
		if (txtTexture != NULL) {
			SDL_DestroyTexture(txtTexture);
		}
		if (text != "") {
			txtSurf = TTF_RenderText_Solid(font, text.c_str(), color);
			txtTexture = SDL_CreateTextureFromSurface(gs->win->getRen(), txtSurf);
			rect.w = txtSurf->w;
			rect.h = txtSurf->h;
			SDL_FreeSurface(txtSurf);
		}
	}

	void Text::tick() {
		createText();
		draw();
	}


	void Text::changeText(std::string txt) {
		text = txt;
	}

	void Text::draw() const {
		SDL_RenderCopy(gs->win->getRen(), txtTexture, NULL, &rect);
	}

	Text::~Text()
	{
		SDL_DestroyTexture(txtTexture);
	}




}