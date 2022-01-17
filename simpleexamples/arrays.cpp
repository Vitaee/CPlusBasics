#include <iostream>
using namespace std;

int CAP = 10;


void put(int index , int item, int *arr){


    for (int i = CAP - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = item;
    CAP++;
    
}

void deleteItem(int index , int *arr)
{


    for (int i = index; i < CAP; i++)
    {
        arr[i] = arr[i + 1];
    }
    CAP--;

}




int main()
{
    
    int list[CAP] = { 12, 34, 45, 4, 8, 10, 16, 180, 182, 22 };


    put(2, 99, list);

    deleteItem(1, list);
    deleteItem(8, list);
    deleteItem(4, list);

    put(3, 9, list);


    cout << "New List: " << endl;

    for (int i = 0; i < CAP; i++)
    {
        cout << list[i] << endl;
    }




    return 0;
}