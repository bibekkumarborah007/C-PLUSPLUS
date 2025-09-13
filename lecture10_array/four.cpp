#include<iostream>
using namespace std;

int* prepareChaiOrders(int cups){ //int* intere typem pointer = memory reference
    int* orders = new int[cups]; //new dynamic memory allocate and store in int* pointer
    for(int i=0; i<cups; i++){
        orders[i] = (i + 1) * 10;
    }
    return orders;
}

int main(){
    //points the start of array
    int cups = 5;
    int* chaiOrder = prepareChaiOrders(cups);

    for(int i=0; i<cups;i++){
        cout << "Cups: " << i+1 << " has " << chaiOrder[i] << "ml\n";
    }

    delete[] chaiOrder;//deletion of dynamic memory as not handkle by c++ like stack memory
    return 0;
}