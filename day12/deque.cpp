#include<bits/stdc++.h>
using namespace std;

int main() 
{
    deque<int>dq;
    dq.push_back(10);
    dq.push_front(20);
    
    dq.emplace_back(80);
    
    
    
   
    // for(auto it = dq.begin();it != dq.end(); it++){
    //     cout <<*it<<" ";
    // }

    // cout<<endl;
    for(auto it : dq){
        
        cout<< it <<" ";
    
    }
    return 0;
}