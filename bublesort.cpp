#include <iostream>

using namespace std;

void swap(int *xp , int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubleSort(int arr[], int len){
for (int i = 0; i < len; i++)
{
    for (int j = 0; j < len-i-1; j++)
    {
        if (arr[j] > arr[j+1]){
           swap(&arr[j],&arr[j+1]);

        }
    }
    
}

}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
int arr[] = {64,34,25,12,22,11,90};
int arr_size = sizeof(arr) / sizeof(arr[0]);
bubleSort(arr,arr_size);
printArray(arr,arr_size);
return 0;
}