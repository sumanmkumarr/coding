#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool palin(int i,string &str,int n)
{
    if(i>=n/2)
    {
        return true;
    }
    if(str[i]!=str[n-1-i])
    {
        return false;
    }
    palin(i+1,str,n);
}

int main()
{
    string str;
    cin>>str;
    int n=str.size();
    cout<<palin(0,str,n);

}