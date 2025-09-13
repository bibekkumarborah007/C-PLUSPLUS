//Challenege 1
//Write a program that calculate the price of tea packs. A user enters the number of tea packs they want, anmd the price per pack. Apply a 10% tax to the total and display the final cost.

#include <iostream>
using namespace std;
int main(){
    int noOfPacks;
    float pricePerPack, totalPrice, tax;

    cout << "Enter total number of tea packs: ";
    cin >> noOfPacks;

    cout << "Enter price per pack: ";
    cin >> pricePerPack;

    totalPrice = pricePerPack * noOfPacks;

    tax = totalPrice + (10.0/100 * totalPrice);

    cout << "The final cost after taxes: " << tax << endl;

    return 0;
}