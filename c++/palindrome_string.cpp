#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int t=str.length();
    int x=0;
    for(int i=0;i<t/2;i++)
    {
        if(str[i]!=str[t-i-1])
        {
            x=1;
            break;
        }
    }
    if(x==0)
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"not palindrome";
    }

}