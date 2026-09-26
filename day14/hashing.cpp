#include <iostream>
#include <iostream>
using namespace std;
// global
// int a;
int main()
{

    // local
    int arr[9] = {1, 2, 3, 1, 5, 4, 1, 2, 3};
    // highest element +1
    int hash[6] = {0};

    for (int i = 0; i < 9; i++)
    {
        hash[arr[i]]++;
    }

    // cout<< hash[5];
    for (int i = 0; i < 9; i++)
    {
        cout << hash[i] << " ";
    }

    return 0;
}