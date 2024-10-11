#pragma once
#include "vector2.h"

class AMovable {

	Vector2 vecteurUni;
	float vitesse;
	float norme;

public:
	AMovable(Vector2 dir, float speed);
	 
	virtual void setDirection(Vector2 direct);
	virtual void setVitesse(float j);
	virtual void Deplacement(Vector2 dir);

	virtual std::string ToString();
};