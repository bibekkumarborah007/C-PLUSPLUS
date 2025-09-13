#include<iostream>
using namespace std;
int main(){
    string teaTypes[5] =  {"Oolong tea","Orange tea","Green tea", "Black tea", "Lemon tea"};

    for (int i=0 ; i<5; i++)
    {
        cout << "Brewing " << teaTypes[i] <<endl;
        for(int j=1 ; j<=3 ; j++){
            cout << "Brewing " << j << " cup of " << teaTypes[i] << endl;
        }
    }
    
    return 0;
} 