#include <iostream>
using std::cout;
using std::endl;

auto divide = [=](double a , double b){ return a / b;};
auto sum = [=](int a , int b){ return a + b;};
auto multiply = [=](int a , int b){ return a * b;};
auto minus = [=](int a , int b){ return a - b;};

int main()
{    
    int result = multiply(14,4);  
    double division = divide(10.2,3.1);
    int sums = sum(10,10);
    int remove = minus(10,2);

    cout << "Multipled: " << result << endl;
    cout << "Divided: " << division << endl;
    cout << "Sum: " << sums << endl;
    cout << "Removed: " << remove;
    return 0;
}