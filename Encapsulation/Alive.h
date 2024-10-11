#pragma once
class Alive
{
public:
	float HPMax;
	float HP;
	Alive(float HP);

	virtual float SetHPMax(float HPMax);
	virtual void SetHP(float number);
	virtual void Damage(float dmg);
	virtual float GetHpm();

};

