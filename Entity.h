#pragma once


class Entity {
public:
	float x;
	float y;

	Entity(float i, float j);

	virtual void setx(float i);
	virtual void sety(float j);

	virtual float getx();
	virtual float gety();

};

