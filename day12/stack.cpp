#include<bits/stdc++.h>
using namespace std;

int main() 
{
    stack<int>st1,st2,st3;
    st1.push(10);
    st2.push(20);
    st1.push(60);
    st2.push(900);
    st3.push(200);
    st3.emplace(80);


    cout<< "stack value before swap:"<<st1.top()<<" " <<st2.top()<<endl;

    st1.swap(st2);
    
    cout<< "stack value After swap:"<<st1.top() <<" "<<st2.top();

    //cout<< st.top();
    
    //cout<< st.empty();

    // stack<int>temp = st;
    // while(!temp.empty()){
    //     cout<< temp. top()<< " ";
    //     temp.pop();

    // }
    // cout<<endl;
    // cout<< "original stack:"<< st.size();
    return 0;
}