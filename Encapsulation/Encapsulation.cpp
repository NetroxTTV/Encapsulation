

#include <iostream>
#include <vector>
using namespace std;

int main(int argv, const char  * [])
{
    vector<string> strArray;

    string str;

    cout << "Hello World!\n";
    cin >> str;
    cout << str << endl;

    string mot = "";
    string enter;

    int i(0);

    while(1){
        cout << "meow meow meow\n";
        cin >> mot;
        strArray.push_back(mot);

        for (int i(0); i < strArray.size(); i++) {
            cout << strArray[i] << endl;
        }
    }
    return 0;

}


