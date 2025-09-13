#include<iostream>
#include<vector>
using namespace std;

class Chai{
    public:
        string teaName;
        int serving;
        vector<string> ingredients;

    // //default constructor
    // Chai(){
    //     cout << "Constructor called" << endl; //constructor is a speacial type of method/function with same name as class which called auto when an object is created without calling manually
    //     teaName = "Unknown Tea";
    //     serving = 1;
    //     ingredients = {"Water", "Tea Leaves"};
    //     cout << "constructor called" << endl;
    // };

    //parameterised constructor
    Chai(string name, int serve, vector<string> ingr){
        teaName = name;
        serving = serve;
        ingredients = ingr;
        cout << "Param constructor called" << endl;
    };

    void displayChaiDetails(){
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << serving << endl;
        cout << "Ingredients: ";
        for(string i : ingredients){
            cout << i << " ";
        }
        cout << endl;
    }
};

int main(){
    // Chai defaultChai;
    Chai defaultChai("Lemon Tea", 2, {"Water", "Lemon", "Honey"});

    defaultChai.displayChaiDetails();
    return 0;
}

//ref of OOP myClass file