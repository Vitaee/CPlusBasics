#include <iostream>
using namespace std;

class BinaryToDecimal
{
    private:
        int n;
        
    public: 
        BinaryToDecimal(int);
        int convert();

};

BinaryToDecimal::BinaryToDecimal(int integer){
    n = integer;
}

int BinaryToDecimal::convert()
{
    int dec_value = 0;
    int base = 1;
 
    int temp = n;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;

    }
 
    return dec_value;
    
}
 
int main()
{
 
    BinaryToDecimal s1(101);

    cout << s1.convert();
    

    return 0;
}