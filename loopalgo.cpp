#include <vector>
#include <algorithm>
#include <numeric>
#include <iostream>

using namespace std;

// one of good ways doing loop instead of using foor loop

int sum1(const vector<float> &vec)
{
    return accumulate(begin(vec), end(vec), 0.f);
}

int main(){

    vector<float> vector1 = {1.2, 3.4, 5.9,1.7, -2.9};

    int a = sum1(vector1);

    cout << a;

    return 0;

    
}