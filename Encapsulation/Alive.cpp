#include "Alive.h"

Alive::Alive(float HP) {

}

float Alive::SetHPMax(float HPMax) {
	return HPMax;
}

void Alive::SetHP(float number) {
	HP = number;
}

void Alive::Damage(float dmg) {
	HP = HP - dmg;
}
