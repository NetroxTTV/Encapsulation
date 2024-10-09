#pragma once

#include <iostream>
#pragma once

using namespace std;

class Vector2
{
    float x;
    float y;
public:
    Vector2();
    Vector2(float x, float y);

    float GetX();
    float GetY();

    void SetX(float x);
    void SetX(std::string x);

    void SetY(float y);

    string ToString();

    Vector2 operator+(const Vector2&);
};

