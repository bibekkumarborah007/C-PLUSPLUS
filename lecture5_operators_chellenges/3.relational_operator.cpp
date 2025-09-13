//3. Relational Operators
//Challenege: A tea shop offers a loyalty program. Customers who buy more than 20 cups of tea get a special "Gold" badge, and those who buy 10 to 20 cups get a "Silver" badge. Write a program to display the badge they will recieve based on the number of cups they buy
#include<iostream>
using namespace std;
int main(){
    int cups;
    cout << "Number of cups: \n";
    cin >> cups;

    if (cups > 20)
    {
        cout << "You will get a GOLD badge ";
    }
    else if (cups >= 10 && cups <= 20)
    {
        cout << "You will get a SILVER badge ";
    }
    else{
        cout << "NO BADGE for you ";
    }
    return 0;
}