#include <iostream>
#include<vector>
using namespace std;

int main() 
{
    vector<int>v(5,100);
    v.push_back(200);
    v.emplace_back(400);


    //auto it = v.begin()+3;
    //cout<<*it;

    for(auto it = v.begin(); it != v.end();it++){
    cout<< *it<< " ";
    }

    // for( auto it: v ){
    //     cout<< it << " ";
    // }
    
    return 0;
}