// sort the string array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string>v;
    v.push_back("qwe");
    v.push_back("vbg");
    v.push_back("asde");
    v.push_back("abcrd");
    v.push_back("AB");
    sort(v.begin(),v.end());
    int t=v.size();
    for(int i=0;i<t;i++)
    {
        cout<<v[i]<<" ";
    }
}