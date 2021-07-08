#include <iostream>

using namespace std;


// Basic template usage.

template<typename IntValue>
IntValue divide(IntValue numerator, IntValue denominator) {

    return numerator / denominator;

}

int main() {

    auto r1 = divide(10, 2);

    auto r2 = divide(20.4 , 4.8);

    auto r3 = divide(999 , 333);

    
    cout << r2 << endl;

    return 0;
}
