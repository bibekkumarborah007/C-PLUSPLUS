#include <iostream>
using namespace std;
int main(){
    bool isStudent;
    int cups;
    
    cout << "Are you a student (1 for yes and 0 for No)? ";
    cin >> isStudent;
    
    cout << "How many cups of tea have you pruchased: ";
    cin >> cups;


    if (isStudent || cups > 15)
    {
        cout << "Eligible for discount \n";
    }
    else
    {
        cout << "Not eligible for discount" << endl;
    }
    
    
    return 0;
}