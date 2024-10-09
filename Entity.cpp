#include "Entity.h"

Entity::Entity(Vector2 position) : pos(position){

}

void Entity::SetPos(float i, float j) {

	Vector2 position(i, j);
	pos = position;

}


Vector2 Entity::GetPos() {

	return pos;

}

std::string Entity::ToString() {

	std::stringstream stream;

	stream << "Point : " << " x: " << pos.GetX() << " y: " << pos.GetY();

	return stream.str();
}