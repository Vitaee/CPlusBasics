#include <iostream>
using namespace std;

class AbstractEmploye{
    virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmploye
{
    private:
       
        string Company;
        int Age;

    protected:
        string Name;

    public:

    void setName(string name){ Name = name;   }
    string getName(){ return Name; }
    void setComp(string comp){ Company = comp; }
    string getComp(){ return Company; }
    void setAge(int age){ Age = age; }
    int getAge(){ return Age; }
        
    void IntroduceYourself() {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

    void AskForPromotion(){
        if (Age > 30){
            cout << Name << " got promoted!" << endl;
        }

        cout << Name << " sorry no promotion for you!" << endl;
        
    }

};

class Developer: public Employee
{
    public:
        string FavLang;
        Developer(string name , string company, int age, string favlang):Employee(name, company, age){

            FavLang = favlang;
        }


        void FixBug(){
            cout << Name << " fixed bug using --> " << FavLang << endl;
        }
    

};

int main() {

    Employee employee1("mike", "cplusbasics" , 25);

    employee1.AskForPromotion();

    Developer d = Developer("john", "cplus", 25, "C++");
    d.FixBug();
    d.AskForPromotion();



    return 0;
}