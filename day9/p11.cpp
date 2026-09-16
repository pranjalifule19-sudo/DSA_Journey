#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

       int num = 1;
        if(i %2==0){
             
            cout<< 0;
        }else{
            cout<<1;
        }
        for (int j = 1; j <= i; j++)
        {
             if(i %2==0){
             
            cout<<1;
        }else{
            cout<<0;
        }
        }
        cout << endl;
    }

    return 0;
}