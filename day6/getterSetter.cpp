#include <iostream>
using namespace std;

class Students
{
private:
    string name = "Pranjali";
    string email = "Pranjali12@gmail";
    int age = 19;

public:
    void getData()
    {
        cout << name << endl;
        cout << email << endl;
        cout << age << endl;
    }

    void setData()
    {
        name = "sanika";
    }
};
int main()
{
    Students s1;
    s1.getData();
    s1.setData();
    return 0;
}