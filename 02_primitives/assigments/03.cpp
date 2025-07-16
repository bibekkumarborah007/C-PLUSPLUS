#include<iostream>
#include<string>
using namespace std;

int main(){
    //Favourite tea Input Write a program that takes the user's facvouirite tea as ainput using getline and also ask how mnay many cups of eta they want using cin. Display the resuktin a fun messaage.]

    string favTea;
    int numTea;

    cout << "What is your favourite tea" << endl;
    getline(cin, favTea);

    cout << "How many cups of " << favTea << " you want?" << endl;
    cin >> numTea;

    return 0;

    //getline must be first preferred than cin for hierachy and not getting overloading problem.
}