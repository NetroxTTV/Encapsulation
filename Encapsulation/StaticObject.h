#pragma once
#include <iostream>
#include <string>
#include "C:\Users\lduperray\source\repos\Encapsulation\Entity.h"
#include "C:\Users\lduperray\source\repos\Encapsulation\vector2.h"

class StaticObject : public Entity
{

public:
	Vector2 pos;
	virtual void SetXY(float i, float j) {
		SetPos(i, j);
	}

};

