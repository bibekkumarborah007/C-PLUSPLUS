// Challenege 3: Relational and Logical Operator
// A tea subscription service offers a discount if the user buys more than 12 cups or if they are a memeber for more than a year. Write a program that checks if the user qualifies for a discount based on their input.

#include <iostream>
using namespace std;

int main()
{
    int cups, user;

    cout << "Enter no. of cups: ";
    cin >> cups;
    cout << "Enter no. of years of membership: : ";
    cin >> user;

    if (cups > 12 || user > 1)
    {
        cout << "Eligible for discount";
    }
    else
    {
        cout << "Not Eligible for discount";
    }
    return 0;
}