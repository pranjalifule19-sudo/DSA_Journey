#include <bits/stdc++.h>
using namespace std;

int main()
{

    set<int , greater<int>> s;
    s.insert(50);
    s.insert(30);
    s.insert(59);
    s.insert(53);
    s.insert(90);
    s.insert(80);

//  s.erase(s.begin());


    for (auto it : s)
    {
        cout << it << " ";
    }
    cout << endl;
    // cout<< s.count(90);



    // auto it = s.find(50);

    // if (it != s.end())
    // {
    //     cout << "Found";
    // }
    // else
    // {
    //     cout << "Not found";
    // }


   
    return 0;
}