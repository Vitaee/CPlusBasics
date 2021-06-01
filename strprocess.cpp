#include <iostream>
using namespace std;

class Human
{
    private:
        string name;
        string age;

    public:
        Human(string, string);
        string description();
        string speak();
};


Human::Human(string n , string a)
{
  name = n;
  age = a;
}

string Human::description()
{   
    string result = "Hello I am " + name + ", I am " + age + " years old." + "\n";
    return result;
}
string Human::speak()
{
    return name + " is learning c++" +  "\n";
}


int main() {

    Human s1("mike", "21");
    
    cout << s1.speak();
    return 0;
}