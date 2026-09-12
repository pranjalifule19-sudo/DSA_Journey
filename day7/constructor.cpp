#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;

    Student(string n, int r)
    {
        cout << "Parameterized constructor...\n";
        name = n;
        rollNo = r;

        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()
{
    Student s1("Pranjali", 214);
    Student s2("gayatri", 207);
    Student s3("Arya", 203);
    Student s4("Sutiksha", 209);
    return 0;
}