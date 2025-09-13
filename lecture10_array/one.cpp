#include<iostream>
using namespace std;
int main(){
    //array continous memory allocation
    int chaiTemperature[5] = {84, 90, 88, 92, 89};
    cout << "Chai Temperatures: ";
    for(int i=0 ; i<5; i++){
        cout << chaiTemperature[i] << " degree celcius \n";
    }
    return 0;
}