#pragma once
#include "Entity.h"
#include "Alive.h"
#include "Abstraite.h"
#include "vector2.h"


class Mob : public Entity, public Alive, public Abstraite
{
public:

	float x;
	float y;
	float Hp;
	Mob(float i, float j, float Hpm, Vector2 direction);

	virtual void Set_XY_HPM_DIR(float i, float j, float Hpm, Vector2 direction) {
		SetPos(i, j);
		SetHPMax(Hpm);
		Deplacer(direction);

	};

	virtual void SetHP(float Hpi) {
		SetHP(Hpi);
	}

	virtual void Damage(float dmg) override;
	virtual void Deplacer(Vector2 direction) override;
	std::string ToString();
};


