#include <sstream>
#include "BreakableObject.h"

BreakableObject::BreakableObject(float i, float j, float HPM) : Entity(pos), Alive(HPM) {

    x = i;
    y = j;
    HP = HPM;

}

std::string BreakableObject::ToString() {
    std::stringstream stream;

    stream << "Breakable Object just created at x = " << GetPos().GetX() << " and y = " << GetPos().GetY() << " with " << SetHPMax(HP);

    return stream.str();

}

void BreakableObject::Damage(float dmg) {
    std::cout << "Breakable Object just broke" << std::endl;
}