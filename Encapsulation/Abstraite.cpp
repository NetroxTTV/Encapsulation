#include "Abstraite.h"
#include <iostream>
#include <cmath>
#include <sstream>

Abstraite::Abstraite(Vector2 direction, float speed): VecUni(direction), vitesse(speed) {

};

void Abstraite::SetSpeed(float v) {
	vitesse = v;
};

void Abstraite::Direction(Vector2 direction) {
	VecUni = direction;
}

void Abstraite::Deplacer(Vector2 direction) {
	norme = std::sqrt(std::pow(direction.GetX(), 2) + std::pow(direction.GetY(), 2));
	Vector2 position((VecUni.GetX() / norme) * vitesse + VecUni.GetX(), VecUni.GetY() / norme * vitesse + VecUni.GetY());
	VecUni = position;
};

std::string Abstraite::ToString() {
	std::stringstream stream;

	stream << "Point: \nx: " << VecUni.GetX() << " \ny: " << VecUni.GetY();

	return stream.str();

}

//direction*vitesse+pos
