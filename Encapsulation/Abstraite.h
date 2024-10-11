#pragma once
#include <iostream>
#include <string>
#include "vector2.h"

class Abstraite
{
public:
	Vector2  VecUni;
	float norme;
	float vitesse;
	Abstraite(Vector2 direction, float speed);


public :
	virtual void Direction(Vector2 direction);
	virtual void SetSpeed(float v);
	virtual void Deplacer(Vector2 direction);
	std::string ToString();
};


