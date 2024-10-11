#pragma once
#include <iostream>
#include <string>
#include "C:\Users\lduperray\source\repos\Encapsulation\Entity.h"

class StaticObject : public Entity
{

public:
	float x;
	float y;
	StaticObject(float i, float j);

	virtual void SetXY(float i, float j) {
		SetPos(i, j);
	}

	std::string ToString();
};

