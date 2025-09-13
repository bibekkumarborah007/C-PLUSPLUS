#include <iostream>
using namespace std;
int main(){

    float teaPrice = 49.99;
    int roundedTeaPrice = (int) teaPrice;
    
    int teaQuantity = 2;
    double totalprice = teaPrice * teaQuantity;

    cout << roundedTeaPrice << endl;
    cout << totalprice << endl;
    return 0;
}