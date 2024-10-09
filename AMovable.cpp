#include "AMovable.h"

AMovable::AMovable(Vector2 dir, float speed) : vecteurUni(dir), vitesse(speed) {

}

void AMovable::setVitesse(float j) {

	vitesse = j;
	 
}

void AMovable::setDirection(Vector2 dir) {

	vecteurUni = dir;

}

void AMovable::Deplacement(Vector2 dir) {

	norme = std::sqrt(std::pow(dir.GetX(), 2) + std::pow(dir.GetY(), 2));
	Vector2 position((vecteurUni.GetX() / norme) * vitesse + vecteurUni.GetX(), vecteurUni.GetY() / norme * vitesse + vecteurUni.GetY());
	vecteurUni = position;

}


std::string AMovable::ToString() {

	std::stringstream stream;

	stream << "MEOW : " << " x: " << vecteurUni.GetX() << " y: " << vecteurUni.GetY();

	return stream.str();
}