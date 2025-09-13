//if
//1. Wap that chekcs if the user wants to order Green Tea. If the user types "Green Tea", the program should confirm thier order

#include<iostream>
#include<string>
using namespace std;
int main(){
    string order;
    cout << "Enter your order for tea: ";
    getline(cin, order);

    if (order == "Green Tea")
    {
        cout << "You have ordered " << order << endl;
    }
    // else
    // {
    //     cout << "Out of stock \n";
    // }
    return 0;
}