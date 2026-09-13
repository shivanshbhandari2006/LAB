#include <iostream>
using namespace std;
class sumofarray
{
    int arr[10];

public:
    int sum = 0;
    sumofarray()
    {
        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];
        }
    }
    void findsum()
    {
        for (int i = 0; i < 10; i++)
        {
            sum = sum + arr[i];
        }
        cout << "sum of the array" << sum;
    }
};

int main()
{
    sumofarray a1;
    a1.findsum();
    return 0;
}