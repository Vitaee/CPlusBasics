#include <iostream>

int* fibbo(int n)
{
     
    int e,d,c,i;
    int* arr = new int[n];
    

    c = 1;
    d = 0;

    for (i = 0;  i <= n; i++)
    {
        e = c + d;
        c = d;
        d = e;

        std::cout << e << "\t";
        
        arr[i] = e;

        if ( i == n - 1) {
            break;
        }
    }

    return arr;
}

int main()
{
    int number = 8;

    int* my_arr = fibbo(number);


    std::cout << "\n" << "Our list: " << "\n";

    for (int i = 0; i < number; i++)
    {
       std::cout  << my_arr[i] << "\n";
    }
    

    return 0;

}


/* output:
1       1       2       3       5       8       13      21

Our list: 
1
1
2
3
5
8
13
21

*/
