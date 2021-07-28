#include <iostream>
#include <fstream>

using namespace std;

string revert( string s){

    char c = s[0];
    int i = 1;

    char *p, *q;

    p = &s[0];
    q = &s[0];

    while (*p != '\0'){
        
        p++;
    }

    p--;

    while (p > q){
        char c = *p;
        *p = *q;
        *q = c;

        p--;
        q++;
    }

    return s;

}


int main(){

    ifstream the_file("deneme.txt");

    string s;

    while (getline(the_file, s))
    {
        cout << "result: " << revert(s) << endl;
    }

    the_file.close();
}