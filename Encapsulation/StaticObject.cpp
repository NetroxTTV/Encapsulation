#include <sstream>
#include "StaticObject.h"

std::string StaticObject::ToString() {
    std::stringstream stream;

    stream << "Static Object just created at x " << GetPos().GetX() << "<- ici la position X et ici la position y -> " << GetPos().GetY();

    return stream.str();

}