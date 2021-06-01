#include <iostream>

using namespace std;

class Square
{
    private: 
        double area;
        double side;

    public:
        Square(double);

        void CalcArea();
        double ShowResult();
};

Square::Square(double p)
{
    side = p;
}

void Square::CalcArea()
{
    area = side * side;
}

double Square::ShowResult()
{
    return area;
}

int main() {
    Square s1(3.4);

    s1.CalcArea();

    cout << "Area = " << s1.ShowResult() << "\n";


    return 0;
}
