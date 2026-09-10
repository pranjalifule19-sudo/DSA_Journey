#include <iostream>
using namespace std;

class Students
{
public:
    string name;
    string email;
    int age;
};
int main()
{
    Students s1;
    s1.name = "Pranjali";
    s1.email = "Pranjali12@gmail";
    s1.age = 19;
    cout << s1.name<< s1.age <<s1.email;
    return 0;
}