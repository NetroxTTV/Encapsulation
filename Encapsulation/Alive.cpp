#include "Alive.h"

Alive::Alive(float Hp) {

}

float Alive::GetHpm() {
	return HPMax;
};

float Alive::SetHPMax(float HPMax) {
	return HPMax;
}

void Alive::SetHP(float number) {
	HP = number;
}

void Alive::Damage(float dmg) {

	HP = HP - dmg;
	if (HP < 0) {
		HP = 0;
	};
}

