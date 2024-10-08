#pragma once

class Abstraite {

	float i;
	float j;
	float v = 0;

	Abstraite(float (i,j), float v);



public:
	virtual void setDirection(float i, float j);
	virtual void setVitesse(float j);

	virtual float getx();
	virtual float gety();


};