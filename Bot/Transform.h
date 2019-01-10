#ifndef TRANSFORM_H
#define TRANSFORM_H
#include "Sprite.h"
#include <vector>
#include "GameSession.h"
#pragma once
namespace Bot {
	class Transform : public Sprite
	{

	protected:
		 Transform(const char* path, int x, int y, int collide, bool anim, int speed, int index, int frames);


	public:
		std::vector<float> getVelocity() { return velocity; }
		std::vector<float> getGravity() {return gravity; }
		void setVelocityX(float x);
		void setVelocityY(float y);
		void updatePosition(float i);
		void setBounceHeight(float f);
		void setMoveSpeed(float f);
		void setGravityDrag(float f);

		~Transform();

	private:
		static Transform* instance;
		float bounceHeight;
		float moveSpeed;
		void bounce();
		std::vector<float> gravity{ 0.0F, 0.0F };
		std::vector<float> velocity{ 0.0F, 0.0F };
		
		
	};

#endif 
}