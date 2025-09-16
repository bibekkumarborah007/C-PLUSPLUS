// check challenges
// do while loop: create a program that asks the user if they want more tea. Keep asking them until they type "no" (case-sensitive), using a do-while loop.

#include <iostream>
using namespace std;
int main()
{
    string respsonse;
    do
    {
        cout << "Do you want more tea (yes or no): ";
        getline(cin, respsonse);
    } while (respsonse != "no" || respsonse != "No");

    return 0;
}