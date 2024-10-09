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
#include "Alive.h"

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
    
    //Vector2 posi;
    //
    //Entity entity(posi);

    //entity.SetPos(1.2f, 5.3);

    //cout << entity.ToString() << endl;

    //Vector2 rawr;

    //AMovable amov(rawr, 0);

    //amov.setVitesse(516);

    //Vector2 new_direction(2.5, 1.3);
    //amov.setDirection(new_direction);

    //amov.Deplacement(new_direction);

    //cout << amov.ToString() << endl;

    Alive alive(5);
    alive.SetHPMax(10);
    alive.SetHP(7);
    alive.Damage(5);

    cout << alive.HP << endl;





    return 0;

}


