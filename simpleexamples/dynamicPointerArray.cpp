#include <iostream>

using namespace std;

int main() {

    int numRows = 0, numCols = 0;

    float **twoDimArray = nullptr;

    cout << "Enter number of rows: " << flush;
    cin >> numRows;

    twoDimArray = new float * [numRows]; // allocate row pointers 

    cout << "Enter number of columns: " << flush;

    cin >> numCols;

    for (int i = 0; i < numRows; i++)
    {
        // allocate column quantity for each row
        twoDimArray[i] = new float[numCols];

        // load each column entry with dta
        for (int j = 0; j < numCols; j++)
        {
            twoDimArray[i][j] = i + j + .05;
            cout << twoDimArray[i][j] << "  ";
        }
        
        cout << endl;

    }

    // avoid memory leak
    for (int i  = 0; i < numRows; i++){
        delete [] twoDimArray[i];
    }

    delete [] twoDimArray;

    return 0;
}