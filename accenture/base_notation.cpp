#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num;
    cin>>num;
    int t=num;
    string s="";
    while(t>0)
    {
        int rem=t%n;
        if(rem>9)
        {
            s=s+(char)(rem+55);
        }
        else{
            s= s + (char)(rem+48);
        }
        t=t/n;

    }
    // cout<<s;
    int a=s.size();
    for(int i=0;i<a/2;i++)
    {
        char y=s[i];
        s[i]=s[a-i-1];
        s[a-i-1]=y;
    }
    cout<<s;
}