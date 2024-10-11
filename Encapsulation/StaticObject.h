#pragma once
#include <iostream>
#include <string>
#include "C:\Users\lduperray\source\repos\Encapsulation\Entity.h"

class StaticObject : public Entity
{

public:
	virtual float SetXY(float i, float j) {
		SetPos(i, j);
	}

	std::string ToString();
};

