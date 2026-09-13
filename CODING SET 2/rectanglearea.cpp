#include <iostream>
using namespace std;
class area
{
    int length;
    int breadth;

public:
    int area;
    void input(int l, int b)
    {
        length = l;
        breadth = b;
    }
    void calculatearea()
    {

        area = length * breadth;
    }
    void display()
    {
        cout << "area of the rectangle: " << area;
    }
}

;
int main()
{
    area a1;
    a1.input(5, 6);
    a1.calculatearea();
    a1.display();
    return 0;
}