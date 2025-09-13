//call by reference: no change in original value eg.change in bank password
//&s

#include <iostream>
using namespace std;

void pourChai(int &cups){
    cups = cups + 5;
    cout << "Poured cups: " << cups << endl;
}

int main(){
    int cups = 2;
    pourChai(cups);//7 copy
    cout << "Total cups are " << cups << endl;//7
    return 0;
}