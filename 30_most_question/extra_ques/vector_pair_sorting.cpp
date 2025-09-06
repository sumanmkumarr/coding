#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,int>>vp = {{3,70},{1,56},{9,45}};

    // sort by first element
    sort(vp.begin(),vp.end());

    for(auto it:vp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    // sort by second element
    cout<<" sort by second element"<<endl;
    sort(vp.begin(),vp.end(),[](auto &a,auto &b)
    {
        return a.second < b.second;
    });

    for(auto it:vp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}