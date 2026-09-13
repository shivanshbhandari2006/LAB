#include <iostream>
#include <string>
using namespace std;

class Student
{
   string name;
   int rollno;
   int marks[5];
   int sum = 0;
   int percentage;

public:
   Student(string s, int r)
   {
      name = s;
      rollno = r;

      cout << "Enter the marks of the student:" << endl;

      for (int i = 0; i < 5; i++)
      {
         cin >> marks[i];
      }
   }

   void totalMarks()
   {
      for (int i = 0; i < 5; i++)
      {
         sum += marks[i];
      }

      cout << "Total marks = " << sum << endl;
   }

   void percent()
   {
      percentage = (sum * 100) / 500;

      cout << "Percentage = " << percentage << "%" << endl;
   }

   void grade()
   {
      if (percentage >= 90)
         cout << "Grade A";
      else if (percentage >= 75)
         cout << "Grade B";
      else if (percentage >= 60)
         cout << "Grade C";
      else if (percentage >= 40)
         cout << "Grade D";
      else
         cout << "Grade F";
   }

   void display()
   {
      cout << "\nName: " << name << endl;
      cout << "Roll No: " << rollno << endl;
   }
};

int main()
{
   string name;
   int rollno;

   cout << "Enter student name: ";
   cin >> name;

   cout << "Enter roll number: ";
   cin >> rollno;

   Student s1(name, rollno);

   s1.display();
   s1.totalMarks();
   s1.percent();
   s1.grade();

   return 0;
}