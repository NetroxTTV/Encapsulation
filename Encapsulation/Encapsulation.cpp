#include <iostream>
#include <vector>
#include "C:\Users\lduperray\source\repos\Encapsulation\Header1.h"
#include "C:\Users\lduperray\source\repos\Encapsulation\Header1.cpp"
using namespace std;

/*void addOneRef(int& a) {
    a += 1;
}

void addOne(int* a) {
    *a += 1;
}*/



int main(int argv, const char  * [])
{
    vector<string> strArray;

    string str;



    cout << "Hello World!\n";
    cin >> str; 
    cout << str << endl;

    int a = 1;

    // addOne(&a);   

    cout << a;

 

    /*string mot = "";

    while(1){
        cout << "meow meow meow\n";
        cin >> mot;
        strArray.push_back(mot);

        for (int i(0); i < strArray.size(); i++) {
            cout << strArray[i] << endl;
        }
    }*/


    Point point;

    point.x = 1.2f;
    point.y = 6.9f;
    point.z = 5.9f;

    cout << point.ToString();

    
    return 0;

}


