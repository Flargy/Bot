#include "Transform.h"


namespace Bot {

	Transform::Transform(const char* path, int x, int y, int collide):Sprite(path, x, y, collide)
	{
	}

	void Transform::bounce() {
		velocity.at(1) = bounceHeight;
	}

	void Transform::setVelocityX(float x) {
		velocity.at(0) = x;
	}
	void Transform::setVelocityY(float y) {
		velocity.at(1) = y;
	}

	void Transform::updatePosition() {
		getRect()->x = getRect()->x + velocity.at(0); // 0.016 ska ersättas med 1/fps
		
	}

	void Transform::fallSpeed(float i) {

		getRect()->y = getRect()->y + velocity.at(1);
		if (velocity.at(1) < i) {
			velocity.at(1) = velocity.at(1) + gravity.at(1) * (1.0F / gs->getFps());
		}

	}

	void Transform::setBounceHeight(float f) {
		bounceHeight = f;
	}
	void Transform::setMoveSpeed(float f) {
		moveSpeed = f;
	}
	void Transform::setGravityDrag(float f) {
		gravity.at(1) = f;
	}

	Transform::~Transform()
	{
	}
}