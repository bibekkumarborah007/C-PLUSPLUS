//13. Getter Setter and Delegation
//class properties access more control in what value add or recieve

#include<iostream>
#include<vector>

using namespace std;

class Chai{
    private:
        string teaName;
        int servings;
        vector<string> ingrediants;
    public:
        Chai(){
            teaName = "Unknown tea";
            servings = 1;
            ingrediants = {"water", "tea leaves",};
        }
        Chai(string name, int serve, vector<string> ingr){
            teaName = name;
            servings= serve;
            ingrediants = ingr;
        }

        //getter gets value : access to private var or control way
        string getTeaName(){
            return teaName;
        }

        //setter set value
        void setTeaName(string name){
            //logic INR format
            teaName = name;
        }

        //getter for servings
        int getServings(){
            return servings;
        }

        //setter for servings
        void setServings(int serve){
            servings = serve;
        }

        //getter for vector
        vector<string> getIngredients(){
            return ingrediants;
        }

        //setter for vector
        void setIngredinats(vector<string> ingr){
            ingrediants = ingr;
        }

        void displayChaiDetails(){
            cout << "Tea Name: " << teaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingrediants ";
            for(string i : ingrediants){
                cout << i << " " << endl;
            }
            cout << endl;
        }
};


int main(){
    Chai chai;
    chai.setTeaName("Ginger Tea");
    chai.displayChaiDetails();
    return 0;
}
