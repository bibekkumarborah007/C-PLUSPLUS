#include<iostream>
#include<vector>

using namespace std;

class Chai{
    public:
        string teaName;
        int servings;
        vector<string> ingrediants;

    //delegation constructor
    Chai(string name): Chai(name, 1, {"water", "tea leaves"}){};

    // main Constructor
    Chai(string name, int serve, vector<string> ingrs){
        teaName = name;
        servings = serve;
        ingrediants = ingrs;

        cout << "Main constructor called";
    }

    void displayChaiDetails(){
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingrediants: ";
        for(string i : ingrediants){
            cout << i << " " << endl;
        }
        cout << endl;
    }
};

int main(){

    Chai quickChai("Quick Chai");
    quickChai.displayChaiDetails();
    return 0;
}