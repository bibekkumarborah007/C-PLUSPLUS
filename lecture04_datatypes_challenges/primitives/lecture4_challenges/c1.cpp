//Tea info display wap that declares variables to store the type to store the type of tea, its price per kg (float), and its rating (char). Use data type efecively and print them in a formatted output using escape sequence.

#include<iostream>
using namespace std;
int main(){

    string teaType = "Oolong Tea \n";
    float teaPrice = 499.99;
    char teaRating = 'A';

    cout << teaType << teaPrice << "\n" << teaRating << endl;

    return 0;
}