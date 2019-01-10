#pragma once
#include "Sprite.h"
#include <memory>
#include <vector>
namespace Bot {
	class Level
	{
	public:
		void nextLevel(Level* l);
		std::vector<std::shared_ptr<Sprite>> getSprite() { return addSprite; };
		std::vector<std::shared_ptr<Sprite>> getVec() { return spriteVec; };
		std::vector<std::shared_ptr<Sprite>> getRemove() { return removeSprite; };
		void add(std::shared_ptr<Sprite>);
		void remove();
		static Level* createLevel();
		void drawLevel();
		void addingSprites();

		~Level();
	private:
		std::shared_ptr<Level> level;
		std::vector<std::shared_ptr<Sprite>> spriteVec;
		std::vector<std::shared_ptr<Sprite>> addSprite;
		std::vector<std::shared_ptr<Sprite>> removeSprite;

	protected:
		Level();

	};
	extern Level* lvl;
}
