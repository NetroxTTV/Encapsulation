#pragma once
#include "Entity.h"
#include "Alive.h"

class BreakableObject : public Entity, public Alive
{

public:
	float x;
	float y;
	float HP;
	BreakableObject(float i, float j, float HPM);

	virtual void SetXY_HPMax(float i, float j, float HPM) {
		SetPos(i, j);
		SetHP(HPM);
	}

	virtual void Damage(float dmg) override;

	std::string ToString();
};

