//4. Switch Case
//Wap that lets the user select a tea type from a menu. Use a switch statement to display the price based on the selected tea: 

//Green Tea: $2
//Black Tea: $3
//Oolong Tea: $4

#include<iostream>
#include<string>
using namespace std;
int main(){
    int choice;
    double price;

    cout <<"Select your tea\n";
    cout <<"1. Green Tea\n";
    cout <<"2. Lemon Tea\n";
    cout <<"3. Oolong Tea\n";
    cout << "Enter your choice in number \n";

    cin >> choice;
    switch(choice){
        case 1: 
                price = 2.0;
                cout << "You selected Green Tea. Price: " << price << endl;
        break;

        case 2: 
                price = 3.0;
                cout << "You selected Lemon Tea. Price: " << price << endl;
        break;

        case 3: 
                price = 3.0;
                cout << "You selected Oolong Tea. Price: " << price << endl;
        break;

        default: 
         cout << "Enter a valid choice in number";
         break;
    }
    return 0; 
}