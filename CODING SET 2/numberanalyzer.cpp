#include <iostream>
using namespace std;
class number
{
    int num;

public:
    int output;
    void input(int n)
    {
        num = n;
    }
    void iseven()
    {
        if (num % 2 == 0)
        {
            output = 1;
        }
        else
        {
            output = 0;
        }
    }
    void displayresult()
    {
        if (output == 1)
        {
            cout << "even";
        }
        else
        {
            cout << "odd";
        }
    }
};

int main()
{
    number n1;
    n1.input(32);
    n1.iseven();
    n1.displayresult();
    return 0;
}