// returnType functionName(parameters){
//     //function bdoy
// }

//void -> return empty
//parameters are optional

#include <iostream>
using namespace std;

int checkTemperature(int temperature){//fnc1
    return temperature;
}

//declaration of fnc
void serveChai(int cups);//fnc declare thern fnc define

void makeChai(){
    cout << "Boiling water, adding tea leaves, straining...\n";
}


void serveChai(string teaType = "Masala Tea"){
    cout << "Serving " << teaType;
}




int main(){
    
    int temp = checkTemperature(10);
    // cout << temp << endl;
    
    // makeChai();// calling a function
    // serveChai(3);
    serveChai("Lemon Tea");

    return 0;
}






//defination of function
void serveChai(int cups){
    cout << "Serving " << cups << " of chai\n";
}

//Note: Function declaration and defination later can be seen in code of v8 engine

