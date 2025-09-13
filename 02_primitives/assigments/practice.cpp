#include <iostream>
#include <string>
using namespace std;

int main(){
    string favTea;
    int totalCups;
    
    cout << "Enter your favourite tea: ";
    getline(cin, favTea);
    
    cout << "How many cups of " << favTea << " you want: ";
    cin >> totalCups;

    cout << "So your order is of " << totalCups << " " << favTea;

    return 0;
}
