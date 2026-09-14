#include <iostream>
using namespace std;

class Parent
{
protected:
    string name = "Pranjali";
};

class Child : protected Parent
{
public:
    void getData()
    {
        cout << name;
    }
};
int main()
{

    Child c1;
    c1.getData();

    return 0;
}