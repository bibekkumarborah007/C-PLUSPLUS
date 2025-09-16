// Challenege 2
// Create a program where the user inputs the number of tea bags that they have. If the number is less than 20, give them 10 extra bags using the =+ assignement operator. Display the the updated total.

#include <iostream>
using namespace std;
int main()
{
    int bags;
    cout << "How many bags you have?: ";
    cin >> bags;
    if (bags < 20)
    {
        bags += 10;
    }
    cout << "Total bags: " << bags;

    return 0;
}