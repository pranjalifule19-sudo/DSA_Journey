#include <bits/stdc++.h>
using namespace std;

int main()
{

    multimap<int, string> mpp = {{214, "pranjali"}, {213, "gayatri"}};
    mpp.insert({103, "Arya"});
    mpp.insert({109, "sanika"});
    mpp.emplace(108, "sutiksha");
    // mpp[119]="sush";//random access not possible

    // mpp.erase(109);

    cout << mpp.empty();

    for (auto it : mpp)
    {

        cout << it.first << " " << it.second << endl;
    }
    // cout << mpp[108];

    return 0;
}