#include <iostream>
using namespace std;
int main(){

    string userTea;
    int teaQuantity;

    cout << "What would you like to order in tea? \n";
    getline(cin, userTea);

    //ask for quantity
    cout << "How many cups of " << userTea << " Would you like to have ? \n";
    cin >> teaQuantity;

    cout << "So, your order is " << teaQuantity << " " << userTea;
    // cout << " " << userTea;

    return 0;
}
