#include<bits/stdc++.h>
using namespace std;



// container

//pair
void explain_pair()
{
    pair<int,int>p={3,5};

    cout<<p.first<<" "<<p.second<<endl;

    // nested pair
    pair<int,pair<int,int>>pq={2,{6,8}};

    cout<<pq.first<<" "<<pq.second.first<<" "<<pq.second.second<<endl;
}



int main()
{
    explain_pair();
}