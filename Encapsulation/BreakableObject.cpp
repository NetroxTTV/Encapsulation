#include <sstream>
#include "BreakableObject.h"

std::string BreakableObject::ToString() {
    std::stringstream stream;

    stream << "Breakable Object just created at x =" << GetPos().GetX() << " and y = " << GetPos().GetY() << "with" << SetHPMax(HPMax);

    return stream.str();

}

