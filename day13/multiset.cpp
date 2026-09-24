#include <bits/stdc++.h>
using namespace std;

int main()
{

    multiset<int, greater<int>> ms;
    ms.insert(50);
    ms.insert(30);
    ms.insert(59);
    ms.insert(53);
    ms.insert(90);
    ms.insert(80);
    ms.insert(80);
    ms.insert(80);
    ms.insert(80);
    ms.insert(80);
    ms.insert(80);
    ms.insert(80);

      ms.erase(80);

    // auto it = ms.find(80);
    // ms.erase(it);
   // cout << ms.count(80);

    for (auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}