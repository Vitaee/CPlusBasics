#include <iostream>
#include "oopex.h"

using namespace std;


void OOPNameSpace::OopEx::printName()
{
    cout << name << "\n";
}

string OOPNameSpace::OopEx::reverseName(){
    int len_of_str = name.length();

    for (int i = 0; i < len_of_str / 2; i++){

        swap(name[i], name[len_of_str - i - 1]);
    }

    return name;
}

int main(){
    OOPNameSpace::OopEx Obj1;

    Obj1.name = "Can";


    string result = Obj1.reverseName();

    cout << result << "\n";

    return 0;
}