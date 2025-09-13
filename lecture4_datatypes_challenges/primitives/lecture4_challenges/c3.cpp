//Challenge 3
//Favorite Tea Input Write a program that takes the user's favourite tea as input using getline and also ask how many cups of tea they want using cin. Display the result in a fun message.

//Hint: Combine cin and getline carefully to avoid input issues.

#include<iostream>
using namespace std;
int main(){
    string favTea;
    int noOfCups;
    cout << "Enter your favourite Tea \n";
    getline(cin, favTea);

    cout << "How many cups of " << favTea << " you want\n";
    cin >> noOfCups;

    cout << "So you want " << noOfCups << " Cups of " << favTea << endl;
    return 0;
}