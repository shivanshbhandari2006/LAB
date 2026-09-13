
#include <iostream>
#include <string>
using namespace std;
class student
{

    int rollno;
    int age;
    string name;

public:
    void setdata(int r, int a,string n)
    {
        rollno=r;
        age=a;
        name=n;

    }
    void displaydata(){
        cout<<"the datails of student are:"<<endl;
        cout<<rollno<<age<<name;
    }
};
int main()
{
    student s1;
    s1.setdata(3,20,"shivansh");
    s1.displaydata();

    return 0;
}