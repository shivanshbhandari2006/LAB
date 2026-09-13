#include <iostream>
#include <string>
using namespace std;
class book
{
    string title;
    string author;

public:
    book(string t, string a)
    {
        title = t;
        author = a;
    }

    void display()
    {
        cout << "The author of book" << author;
        cout << "the title" << title;
    }
};
int main()
{
    book b1("hello", "naavan");
    b1.display();
    return 0;
}