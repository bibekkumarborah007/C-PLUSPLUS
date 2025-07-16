#include <iostream>
#include <string>
using namespace std;

int main(){
    string userTea;
    int teaQuantity;

    cout << "What would you like to to order with tea" << endl;
    getline(cin, userTea);

    //ask for quantity;
    cout << "how many cups of " << userTea << " would you like to have?\n";
    cin >> teaQuantity;

    cout << teaQuantity << " "<< userTea << endl;
    // cout << userTea;

    return 0;
}