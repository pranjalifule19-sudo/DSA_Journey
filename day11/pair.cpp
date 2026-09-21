#include <iostream>
using namespace std;

int main()
{
        pair<int,pair<int,pair<int,int>>>p={10,{20,{30,40}}};
       
        cout<< p.first<<endl;
        cout<< p. second.first<<endl;
        cout<< p. second.second.first<<endl;
        cout<< p. second.second.second<<endl;
    return 0;
}