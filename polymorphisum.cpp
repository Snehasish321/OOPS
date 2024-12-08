// #include <iostream>
// using namespace std;

// class Student
// {
// public:
//   string name, dept, roll;
//   ;
//   Student()
//   {
//     cout << "Non-Paramitarised" << endl;
//   }
//   Student(string name)
//   {
//     cout << "HI i'm Paramitarised" << endl;
//     this->name = name;
//   }

//   void getinfo()
//   {
//     cout << "NAME: ABHISHE SINGH" << name << endl;
//     cout << "DEPT: CSE" << dept << endl;
//     cout << "ROLL: 011" << endl;
//   }
// };

// int main()
// {
//   Student s1;
//   s1.getinfo();

//   return 0;
// }

#include <iostream>
using namespace std;
class student
{
public:
  string name;
  string department;
  string section;
  student()
  {
    cout << "im not initialized" << endl;
  }
  student(string n, string dept, string sec)
  {
    name = n;
    department = dept;
    section = sec;
  }

  void getInfo()
  {
    cout << "Name: " << name << endl;
    cout << "Department: " << department << endl;
    cout << "Section: " << section << endl;
  }
};
int main()
{
  student s2();
  student s1("ABHISHEK SINGH ", "CSE", "A");
  s1.getInfo();
  return 0;
}