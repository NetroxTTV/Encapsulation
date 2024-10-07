#include <sstream>
#include "C:\Users\lduperray\source\repos\Encapsulation\Header1.h"

std::string Point::ToString(){

	std::stringstream stream;

	stream << "Point : " << " x: " << x << " y: " << y << " z: " << z;

	return stream.str();
}