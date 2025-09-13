//2.Assingment operator
// Challenge: Write a program that allows a user to input the number of tea bags they have. Assign additional bags to them based on certain conditions (eg., if they have fewer than 10 bags, give then 5 extra). Update the original number using assignment operators. 

#include<iostream>
using namespace std;

int main(){
    int teabags;
    cout << "Enter the number of tea bags you have: \n";
    cin >> teabags;

    if (teabags < 10)
    {
        // totalbags = teabags + 5;
        teabags += 5;
    }
    cout << "You have Tea Bags: " << teabags;
    return 0;
}