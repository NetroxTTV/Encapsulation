#include <sstream>
#include "StaticObject.h"
#include "C:\Users\lduperray\source\repos\Encapsulation\Entity.h"

StaticObject::StaticObject(float i, float j) : Entity(pos){

    x = i;
    y = j;

}

std::string StaticObject::ToString() {
    std::stringstream stream;

    stream << "Static Object just created at x " << GetPos().GetX() << " <- ici la position X et ici la position y -> " << GetPos().GetY();

    return stream.str();

}