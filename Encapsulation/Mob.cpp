#include "Mob.h"
#include <sstream>

Mob::Mob(float i, float j, float HPM, Vector2 direction) : Entity(pos), Alive(HPM), AMovable(direction, 10) {

    x = i;
    y = j;
    HP = HPM;

}

std::string Mob::ToString() {
    std::stringstream stream;

    stream << "Mob just created at x = " << GetPos().GetX() << " and y = " << GetPos().GetY() << " with " << SetHPMax(HP);

    return stream.str();

}