#include <iostream>
using namespace std;
int main(){
    int choice;
    cout << "Select your tea: (1 to 3) \n";
    cout << "1. Green Tea \n";
    cout << "2. Black Tea \n";
    cout << "3. Oolong Tea \n";

    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Green Tea: $2";
        break;
    case 2:
        cout << "Black Tea: $2";
        break;
    case 3:
        cout << "Oolong Tea: $2";
        break;
    
    default:
        break;
    }
    return 0;
}