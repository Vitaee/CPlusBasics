#include <iostream>

using namespace std;

class rectangle
{
    public:
        int length , breadth;
    
        void area()
        {
            cout << "Area of Rectangle " << length * breadth << "\n";
        }

};

class cuboid : public rectangle
{
    public:
        int height;

        void volume()
        {
            cout << "Volume of Cuboid " << length * breadth * height << "\n";
        }

};

int main() {

    cuboid c;

    c.length = 10; c.breadth = 20; c.height = 30;

    c.area();

    c.volume();

    return 0;
}