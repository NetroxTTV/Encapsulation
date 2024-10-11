#pragma once
#include "C:\Users\lduperray\source\repos\Encapsulation\Entity.h"
#include "Alive.h"
#include "C:\Users\lduperray\source\repos\Encapsulation\AMovable.h"

class Mob : public Entity, public Alive, public AMovable

{
public:
	float x;
	float y;
	float HP;
	Vector2 direction;
	Mob(float i, float j, float HPM, Vector2 direction);


	virtual void SetXY_HPMax_DIR(float i, float j, float HPM, Vector2 direction) {
		SetPos(i, j);
		SetHP(HPM);
		setDirection(direction);
	}

	std::string ToString();

};

