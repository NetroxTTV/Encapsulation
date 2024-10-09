#pragma once
#include "vector2.h"


class Entity {

public:
	Vector2 pos;

	Entity(Vector2 position);

	virtual void SetPos(float i, float j);

	virtual Vector2 GetPos();

	virtual string ToString();

};

