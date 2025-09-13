//1.Arithmetic Operators

//Challenge: Create a program that calculate the total price of tea cups. The user inputs the number of cups they want and the price per cup. The program should calculate the total price, and apply a 5% discount if the total is above a certain amount, and show the final price

#include<iostream>
using namespace std;

int main(){
    int cups;
    double pricePerCup, totalPrice, discountedPrice;

    cout << "Enter the number of tea cups \n";
    cin >> cups;
    cout << "Enter the price per cups \n";
    cin >> pricePerCup;

    totalPrice = cups * pricePerCup;

    //apply 5% discount if total price is above 100

    if (totalPrice > 100)
    {
        /* code */
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "Disounted price is: " << totalPrice << endl;
    }
    else
    {   
        cout << "Total Price is: " << totalPrice << endl;
    }
}

