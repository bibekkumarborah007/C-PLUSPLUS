// Challenege 4: Bitwise operator
// Write a program that uses bitwise AND (&) to check which tea type are in stock. The stock is encoded in an integer (1 for green, 2 for Black, 4 for Oolong). Allow ther user to check availability by inputting the tea type (1, 2, or 4), and display a message saying whether that tea is in stock or not.

#include <iostream>
using namespace std;
int main()
{
    // int teaType = 1 | 2 | 4;
    int teaType;

    cout << "Enter the value 1 for Green, 2 for Black and 4 for Oolong Tea: ";
    cin >> teaType;

    if (teaType == 1 | teaType == 2 | teaType == 4)
    {
        cout << "Tea in stock";
    }
    else
    {
        cout << "Not is stock";
    }
}