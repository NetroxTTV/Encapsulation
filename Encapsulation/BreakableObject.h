#pragma once
#include "C:\Users\lduperray\source\repos\Encapsulation\Entity.h"
#include "Alive.h"

class BreakableObject : public Entity, public Alive
{
public:
	virtual float SetXY_HPMax(float i, float j, float HPM) {
		SetPos(i, j);
		SetHP(HPM);
	}

	std::string ToString();


};

