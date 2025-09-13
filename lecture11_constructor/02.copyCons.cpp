#include<iostream>
#include<vector>
using namespace std;

class Chai{
    public:
        string* teaName;
        int serving;
        vector<string> ingredients;

    //parameterised constructor
    Chai(string name, int serve, vector<string> ingr){
        teaName = new string(name);
        serving = serve;
        ingredients = ingr;
        cout << "Param constructor called" << endl;
    };

    //deep copy
    Chai(const Chai& other){
        teaName = new string(*other.teaName);
        serving = other.serving;
        ingredients = other.ingredients;
        cout << "Copy constructor called" << endl;
    };

    ~Chai(){
       delete teaName;
       cout << "Destructor called" << endl; 
    }

    void displayChaiDetails(){
        cout << "Tea Name: " << *teaName << endl;
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
    Chai lemonTea("Lemon Tea", 2, {"Water", "Lemon", "Honey"});
    lemonTea.displayChaiDetails();

    //copy ther object,               using loop and all but not that simple due to variety of datatype
    Chai copiedChai = lemonTea;
    // copiedChai.displayChaiDetails();

    *lemonTea.teaName = "Modified Lemon Tea";

    cout << "Lemon Tea" << endl;
    lemonTea.displayChaiDetails();
    cout << "Copied Tea------------" << endl;
    copiedChai.displayChaiDetails();
    return 0;
}

//need of copy constructor when we can already declare and call the constructor?