#include <iostream>
using namespace std;

class Marks
{
private:
    int marks[5];
    int highest;

public:
    Marks()
    {
        cout << "Enter marks of 5 students:\n";

        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }

    void findHighest()
    {
        highest = marks[0];

        for (int i = 1; i < 5; i++)
        {
            if (marks[i] > highest)
            {
                highest = marks[i];
            }
        }
    }

    void display()
    {
        cout << "Highest marks = " << highest << endl;
    }
};

int main()
{
    Marks m1;

    m1.findHighest();
    m1.display();

    return 0;
}