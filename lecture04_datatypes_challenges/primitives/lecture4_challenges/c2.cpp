//Challenge 2
//Modify Tea Price create a program when the user inputs a base price for tea. Use type casting to increase the price by 10% and display the rounded new price using explicit casting.

#include<iostream>
using namespace std;
int main(){
    int basePrice;
    float netPrice = (float) basePrice; // explicit casting
    cout << "Enter your base price for Tea \n";
    cin >> basePrice;

    //logic for 10% increase from basePrice
    netPrice = basePrice + (basePrice * 10/100);
    cout << "We can make a deal for " << netPrice;
    return 0;
}