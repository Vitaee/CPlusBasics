#include <utility> // for std::swap
#include <iostream>
 
void selectionSort(int *array, int size, bool (*comparisonFcn)(int, int))
{
    for (int startIndex{ 0 }; startIndex < (size - 1); ++startIndex)
    {
        int bestIndex{ startIndex };
 
        for (int currentIndex{ startIndex + 1 }; currentIndex < size; ++currentIndex)
        {
            if (comparisonFcn(array[bestIndex], array[currentIndex])) 
            {
                bestIndex = currentIndex;
            }
        }
        std::swap(array[startIndex], array[bestIndex]);
    }
}
 
bool ascending(int x, int y)
{
    return x > y; // swap if the first element is greater than the second
}
 
bool descending(int x, int y)
{
    return x < y; // swap if the second element is greater than the first
}
 
void printArray(int *array, int size)
{
    for (int index{ 0 }; index < size; ++index)
    {
        std::cout << array[index] << ' ';
    }
    
    std::cout << '\n';
}
 
int main()
{
    int array[9]{ 3, 7, 9, 5, 6, 1, 8, 2, 4 };
 
    // Sort the array in descending order using the descending() function
    selectionSort(array, 9, descending);
    printArray(array, 9);
 
    // Sort the array in ascending order using the ascending() function
    selectionSort(array, 9, ascending);
    printArray(array, 9);
 
    return 0;
}