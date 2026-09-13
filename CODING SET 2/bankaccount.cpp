#include <iostream>
using namespace std;
class bankaccount
{
    int accountnumber;
    int balance;

public:
    bankaccount(int acc, int bal)
    {
        accountnumber = acc;
        balance = bal;
    }
    void deposit(int depo){
        balance=balance+depo;

    }
    void withdraw(int amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
        }
        else
        {
            cout << "Insufficient balance" << endl;
        }
    }
    void displaybalance(){
        cout<<"balance="<<balance;
    }
};
int main()

{
    bankaccount b1(12345, 30000);
    b1.deposit(50000);
    b1.withdraw(10000);
    b1.displaybalance();


    return 0;
}