//nested loop
//wap that brews multiple cups iof different types of tea. For each type of tea, bew 3 cups using a nested loop.
#include <iostream>
using namespace std;
int main(){
    string teaTypes[5] = {"Oolong tea","Orange tea","Green tea", "Black tea", "Lemon tea"};

    for(int i=0; i<5 ; i++){
        cout << "Brewing " << teaTypes[i] << "..." << endl;
        for (int j=1; j<=3 ; j++)
        {
            cout << "Brewing " << j << " cups of " << teaTypes[i] << endl;
        }      
    }
    return 0;
}