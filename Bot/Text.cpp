#include "Text.h"
#include <iostream>

namespace Bot {
	Text* txt;

	Text::Text()
	{
	}


	Text::~Text()
	{
	}

	void Text::createText() {

		TTF_Font* font = TTF_OpenFont("G:/School/CPROG/ariblk.ttf", 36);
		std::cout << "creating text";
		bool textInput = true;
		SDL_Color textColor = { 0, 0, 0, 0xFF };


		if (textInput) {

			SDL_StartTextInput();
			SDL_SetTextInputRect(&textField);
			while (textInput) {
				SDL_Event event;
				while (SDL_PollEvent(&event) != SDLK_KP_ENTER) {
					inputText += event.text.text;
					textSurface = TTF_RenderText_Solid(font, inputText.c_str(), textColor);
					textTexture = SDL_CreateTextureFromSurface(gs->win->getRen(), textSurface);
					rect = { 100, 100, textSurface->w, textSurface->h };
					SDL_RenderCopy(gs->win->getRen(), textTexture, NULL , &rect);

					SDL_FreeSurface(textSurface);
					SDL_DestroyTexture(textTexture);
					TTF_CloseFont(font);

				}//inre while


			}
			SDL_StopTextInput();
			textInput = false;
		}


	}
}