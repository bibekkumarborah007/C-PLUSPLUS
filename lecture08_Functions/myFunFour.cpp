//lamda functions
//found in frameworks and libraries

#include <iostream>
using namespace std;

int main(){

    //lamda: [] starts, standalone enitity so need to be exited with ; after {}
    auto preparedChai = [](int cups){
        cout << "Preparing " << cups << " cups of tea" << endl;
    };

    preparedChai(4);

    return 0;
}