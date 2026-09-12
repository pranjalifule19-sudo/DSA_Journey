#include <iostream>
using namespace std;

class Fahter
{
public:
    string surname = "Fule";

    void discipline()
    {
        cout << "father teaches Discipline...\n";
    }
};

class Mother
{

public:
    void Boldness()
    {
        cout << "Mother teaches Boldness...\n";
    }
};

class MaleChild : public Fahter, public Mother
{
public:
    string name = "boy";
};

class FemaleChild : public Fahter, public Mother
{
public:
    string name = "Pranjali";
};
int main()
{

    FemaleChild c1;
    cout << c1.name << " " << c1.surname<<endl;
    c1.discipline();
    c1.Boldness();
    return 0;
}