#include <bits/stdc++.h>
using namespace std;

int main()
{

    unordered_set<int> uset;
    uset.insert(50);
    uset.insert(90);
    uset.insert(50);
    uset.insert(60);
    uset.insert(70);
    uset.insert(80);
    uset.insert(90);
    uset.insert(20);
    uset.insert(30);
    uset.insert(50);
   

//  uset.erase(uset.begin());


    for (auto it : uset)
    {
        cout << it << " ";
    }
    cout << endl;
    // cout<< s.count(90);



    // auto it = uset.find(50);

    // if (it != uset.end())
    // {
    //     cout << "Found";
    // }
    // else
    // {
    //     cout << "Not found";
    // }


   
    return 0;
}