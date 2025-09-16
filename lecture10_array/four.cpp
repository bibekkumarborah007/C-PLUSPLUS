#include <iostream>
using namespace std;

// Pointer: to keep memory address of inter
//* = datatyoe declare & = memory reference

// storing memory reference and "new" keyword is used to store in dynamic memory so that unlike static memory (stack) once the funtion is called it removes from the static memory and pointer can't be addresed so Dynamic memory (heap) is used so that function can be stored even after excetuion for adressing the memory reference by pointer and removes the function intentionally based on our need.
int *prepareChaiOrders(int cups)
{                                // int* intere type pointer = memory reference
    int *orders = new int[cups]; // dynamic memory reference is stored in integer pointern "int* order"// new dynamic memory allocate and store in int* pointer
    for (int i = 0; i < cups; i++)
    {
        orders[i] = (i + 1) * 10;
    }
    return orders; // return order is not normal array but "int*" gives you memory reference
}

int main()
{
    // points the start of array
    int cups = 5;
    int *chaiOrder = prepareChaiOrders(cups); // return type is dynamic array deaclred as pointer i.e memory reference

    for (int i = 0; i < cups; i++)
    {
        cout << "Cups: " << i + 1 << " has " << chaiOrder[i] << "ml\n";
    }

    delete[] chaiOrder; // deletion of dynamic memory is not handled and memory deletion is automatically by c++ like stack memory. "new" must have a "delete" keyword.
    return 0;
}