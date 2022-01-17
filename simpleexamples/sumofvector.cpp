#include <vector>
#include <algorithm>
#include <numeric>
#include <iostream>

// doing loop instead of using foor loop

float sum_of_vector(const vector<float> &vec)
{
    return accumulate(begin(vec), end(vec), 0.f);
}

int main(){

    vector<float> vector1 = {1.2, 3.4, 5.9,1.7, -2.9};

    float sum = sum_of_vector(vector1);

    cout << sum << endl;

    return 0;

    
}
