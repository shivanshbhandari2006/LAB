#include <iostream>
#include <string>
using namespace std;

class employee
{
    string employeename;
    string basicsalary;

public:
    string name;
    int salary;
    int hra;
    int da;
    int gross;
    employee()
    {

        cout << "enter the name";
        cin >> name;
        cout << "enter the salary";
        cin >> salary;
    }
    void calculatehra()
    {

        hra = 0.2 * salary;
    }
    void calculateda()
    {

        da = 0.1 * salary;
    }
    void grosssalary()
    {
        gross = salary + da + hra;
        cout<<gross;
    }
};

int main()
{
    employee e1;
    e1.calculatehra();
    e1.calculateda();
    e1.grosssalary();


    return 0;
}