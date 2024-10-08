#include "Entity.h"

Entity::Entity(float i, float j) {

	x = i;
	y = j;

}

void Entity::setx(float i) {

	x = i;

}

void Entity::sety(float j) {

	y = j;

}

float Entity::getx() {

	return x;

}

float Entity::gety() {

	return y;

}

