#include <iostream>
#include <vector>
#include "Header1.h"
#include "vector2.h"
#include "Entity.h"
#include "Abstraite.h"
#include "Alive.h"
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"


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

    //Alive alive(5);
    //alive.SetHPMax(100);
    //alive.SetHP(7);
    //alive.Damage(5);

    //cout << alive.HP << endl;


 /*   StaticObject stat(1,5);
    stat.SetXY(6.9, 6.9);
    cout << stat.ToString();*/

    //BreakableObject breakO(1.5,2.5,50);
    //breakO.SetXY_HPMax(4.6,5.5,10);
    //breakO.Damage(5);
    //cout << breakO.ToString() << endl;

    Vector2 vec2(1.2f, 3.6f);
    Vector2 new_dir(2.6f, 8.6f);
    Mob mob(7.4f, 5.6f, 10, vec2);
    mob.Damage(5);
    mob.Deplacer(new_dir);
    cout << mob.ToString() << endl;


    return 0;

}


