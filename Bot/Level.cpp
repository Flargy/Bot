#include "Level.h"

namespace Bot {
	Level* lvl;

	Level::Level()
	{
	}

	void Level::add(std::shared_ptr<Sprite> s) {
		addSprite.push_back(s);
	}

	void Level::drawLevel() {
		for (std::shared_ptr<Sprite> s : spriteVec) {

			if (s->getTag() == 2) {
				s->updatePosition(9.82F);
			}
			s->draw();
		}//outer for

	}

	void Level::addingSprites() {
		for (std::shared_ptr<Sprite> s : addSprite) {
			spriteVec.push_back(s);
		}
		addSprite.clear();
	}

	void Level::nextLevel(Level* l) {
		lvl = l;
	}

	Level* Level::createLevel() {
		return new Level();
	}

	void Level::remove() {
		for (std::shared_ptr<Sprite> s : removeSprite) {
			for (std::vector<std::shared_ptr<Sprite>>::iterator i = spriteVec.begin(); i != spriteVec.end();) {
				if (*i == s) {
					i == spriteVec.erase(i);

				}//if
				else i++;
			}//inner for
		}
		removeSprite.clear();
	}

	Level::~Level()
	{
	}
}