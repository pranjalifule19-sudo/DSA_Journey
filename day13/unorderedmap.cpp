#include <bits/stdc++.h>
using namespace std;

int main()
{

    unordered_map<int, string> umap = {{214, "pranjali"}, {213, "gayatri"}};
    umap.insert({103, "shrya"});
    umap.insert({109, "saniya"});
    umap.emplace(108, "sutiksha");
    



    // umap.erase(109);


    // for (auto it : umap)
    // {

    //     cout << it.first << " " << it.second << endl;
    // }
    // // cout << umap[108];
    cout << umap.size()<< endl;
    umap.clear();
    cout << umap.size()<< endl;


    return 0;
}