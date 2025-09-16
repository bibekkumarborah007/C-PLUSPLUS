#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <string>

using namespace std;

struct Employee
{
    int id;
    string name;
    double salary;
};

void displayEmployee(const Employee &emp)
{ // Obj ref f with obj emp only ref not pointer address like &Employee
    cout << "ID: " << emp.id << " , Name: " << emp.name << " , Salary: $" << emp.salary << endl;
}

int main()
{
    vector<Employee> employees = {
        {101, "bibek", 100000},
        {102, "raj", 30000},
        {103, "raja", 50000},
        {104, "borah", 60000},
        {105, "kumar", 70000}};

    sort(employees.begin(), employees.end(), [](const Employee &e1, const Employee &e2)
         { return e1.salary > e2.salary; });

    cout << "Employee sorted by salary -> Highest to lowest" << endl;

    for_each(employees.begin(), employees.end(), displayEmployee);

    vector<Employee> highEarners;

    copy_if(employees.begin(),
            employees.end(),
            back_inserter(highEarners),
            [](const Employee &e)
            {
                return e.salary > 50000;
            });

    cout << "Employees are high earners \n";
    for_each(highEarners.begin(), highEarners.end(), displayEmployee);

    double totalSalary = accumulate(employees.begin(),
                                    employees.end(),
                                    0.0,
                                    [](double sum,
                                       const Employee &e)
                                    {
                                        return sum + e.salary;
                                    });

    double averageSalary = totalSalary / employees.size();

    auto higestPaid = max_element(employees.begin(), employees.end(), [](const Employee &e1, const Employee &e2)
                                  { return e1.salary < e2.salary; });

    return 0;
}