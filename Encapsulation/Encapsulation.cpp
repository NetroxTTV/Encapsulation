#include <iostream>
#include <vector>
#include "C:\Users\lduperray\source\repos\Encapsulation\Header1.h"
#include "C:\Users\lduperray\source\repos\Encapsulation\Header1.cpp"
#include "C:\Users\lduperray\source\repos\Encapsulation\vector2.h"
#include "C:\Users\lduperray\source\repos\Encapsulation\vector2.cpp"
#include "C:\Users\lduperray\source\repos\Encapsulation\Entity.cpp"
#include "C:\Users\lduperray\source\repos\Encapsulation\Entity.h"
#include "C:\Users\lduperray\source\repos\Encapsulation\AMovable.cpp"
#include "C:\Users\lduperray\source\repos\Encapsulation\AMovable.h"

using namespace std;

int main(int argv, const char  * [])
{
    /*
       vector<string> strArray;

       cout << "Hello, World" << endl;

       string str;
       //string word = "toto";


       int a = 1;
       int b = 1;

       addOnep(&a);
       addOne(b);

       cout << a << endl;
       cout << b << endl;


       Point point;
       point.x = 0.1f;
       point.y = 7.2f;
       point.z = 3.4f;

       cout << point.ToString();

       
       Vector2 vector2(1.2, 4.5);
       vector2.SetX(2.3);
       vector2.SetY(4.3);
       cout << vector2.GetX() << "\n" << vector2.GetY();*/
       
       
    
    
    
    Vector2 posi;
    
    Entity entity(posi);

    entity.SetPos(1.2f, 5.3);

    cout << entity.ToString() << endl;

    return 0;

}


