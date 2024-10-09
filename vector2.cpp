#include "vector2.h"

Vector2::Vector2(float i, float j) {
	x = i;
	y = j;
}

Vector2::Vector2() {
	x = 0.0f;
	y = 0.0f;
}

std::string Vector2::ToString() {

	std::stringstream stream;

	stream << "Point : " << " x: " << x << " y: " << y;

	return stream.str();
}

void Vector2::SetX(float i) {

	x = i;

}

void Vector2::SetY(float j) {

	y = j;

}

float Vector2::GetX() {

	return x;

}

float Vector2::GetY() {

	return y;

}



