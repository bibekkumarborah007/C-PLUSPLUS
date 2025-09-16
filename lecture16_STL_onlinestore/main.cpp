#include <iostream>
#include <vector>
#include <deque> //visits recent visit eg. recentCustomers
#include <list>  //order
#include <set>   //category unieue values
#include <map>   //stock count key value pairs
#include <string>
#include <ctime>
#include <unordered_set>
#include <unordered_map>
// #include <multimap> allowing multiple order per cusotmer

using namespace std;

struct Product
{ // each prouduct creates a structure of the how data will be displayed eg. schema
    int productID;
    string name;
    string category;
};

struct Order
{
    int orderID;
    int ProductID;
    int quantity;
    string customerID;
    time_t orderDate; // from <ctime>
};

int main()
{
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "Smartphone", "Electronics"},
        {103, "Coffee Maker", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {105, "Desk Lamp", "Home"},
    };

    deque<string> recentCustomers = {"C001", "C002", "C003"};

    recentCustomers.push_back("C004");
    recentCustomers.push_front("C005");

    // order place
    list<Order> orderHistory;

    orderHistory.push_back({1, 101, 1, "C001", time(0)});
    orderHistory.push_back({2, 102, 2, "C002", time(0)});
    orderHistory.push_back({2, 103, 1, "C003", time(0)});

    // categories by loop on products
    set<string> categories;
    for (const auto &product : products)
    { // auto for different datatypes undestand the different data types of vector<Product>
        categories.insert(product.category);
    }

    // key value paris of map, stock count or count track map<key, value>
    map<int, int> productStock = {
        {101, 10},
        {102, 20},
        {103, 15},
        {104, 5},
        {105, 7},
    };

    // multimap
    multimap<string, Order> customersOrder;
    for (const auto &order : orderHistory)
    {
        customersOrder.insert({order.customerID, order});
    }

    unordered_map<string, string> customerData = {
        // fast hash memory
        {"C001", "Alice"},
        {"C002", "Bibek"},
        {"C003", "Raj"},
        {"C004", "Raja"},
        {"C005", "BKB"},
    };

    unordered_set<int> uniqueProductIDs;
    for (const auto &product : products)
    {
        uniqueProductIDs.insert(product.productID);
    }

    // Print all products
    cout << "Product List:\n";
    for (const auto &product : products)
    {
        cout << "ID: " << product.productID
             << ", Name: " << product.name
             << ", Category: " << product.category << endl;
    }

    // Print recent customers
    cout << "\nRecent Customers:\n";
    for (const auto &customer : recentCustomers)
    {
        cout << customer << endl;
    }

    // Print categories
    cout << "\nCategories:\n";
    for (const auto &category : categories)
    {
        cout << category << endl;
    }
    return 0;
}