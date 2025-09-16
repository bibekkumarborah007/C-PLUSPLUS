// call by value and call by reference

// pass by value: original value is not changed
//  eg code file download from online and edit but the the online one doesn't change

// pass by reference: original value is changed
// eg change with git push

#include <iostream>
using namespace std;

void pourChai(int superman)
{
    superman = superman + 5;
    cout << "Poured cups: " << superman << endl;
}

int main()
{
    int cups = 2;
    pourChai(cups);                            // 7 copy
    cout << "Total cups are " << cups << endl; // 2
    return 0;
}