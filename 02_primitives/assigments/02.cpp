#include <iostream>
#include <string>
using namespace std;

int main(){
    // typecasting
   // modify tea prices create a program where the user inputs a base price for tea. Use type casting to increase the price by 10% and display the rounded new price using explicit casting
   float tPrice = 500.99;
//    int rPrice= 10/100 * (int) tPrice ;
    int rPrice = (int) tPrice * 10/100;


   cout << rPrice;

    return 0;
}