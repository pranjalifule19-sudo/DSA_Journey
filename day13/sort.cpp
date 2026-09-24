#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v = {100,90,70,60,40,70,10,30};
    sort(v.begin()+3 ,v.end() +5,greater<int>());
    for(auto it : v){
        cout<< it << " ";

    }
    // int arr[8] = {100,90,70,60,40,70,10,30};
    // sort(arr+2 , arr+4,greater<int>());
    // for(int i = 0; i< 5 ; i++){
    //     cout<< arr[i]<<" ";
    
    return 0;
}