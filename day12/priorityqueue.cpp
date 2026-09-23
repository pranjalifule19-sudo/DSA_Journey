#include<bits/stdc++.h>
using namespace std;

int main() 
{
    priority_queue<int>pq;
    pq.push(10);
    pq.push(30);
    pq.push(50);
    pq.push(70);
    pq.push(90);
   
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
while(!pq.empty())
    {

        cout<< pq.top() << " ";
        pq.pop();
    }
     cout<< "original size:"<<pq.size();
    // priority_queue<int> temp = pq;
    // while(!temp.empty())
    // {

    //     cout<< temp.top() << " ";
    //     temp.pop();
    // }
    //  cout<< "original size:"<<pq.size();
    

    return 0;
}