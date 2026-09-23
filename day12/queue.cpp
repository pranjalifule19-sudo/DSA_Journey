#include<bits/stdc++.h>
using namespace std;

int main() 
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(80);
    // cout<<q.front()<<endl;
    // q.pop();
    // cout<<q.front()<<endl;
while(!q.empty())
    {

        cout<< q.front() << " ";
        q.pop();
    }
    // queue<int> temp = q;
    // while(!temp.empty())
    // {

    //     cout<< temp.front() << " ";
    //     temp.pop();
    // }
    
    

    return 0;
}