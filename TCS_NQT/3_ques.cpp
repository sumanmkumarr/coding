// shift the character of a given string by key length
// here string is combination of alphabet and integer

// ascii value
// 0   -- 48,  1   --49, ......,  9 --57
// A  --65, B  --66,.............,Z  -- 90
// a  --97, b  --98,......, z  -- 122 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    int key;
    cin>>key;

    for(int i=0;i<str.length();i++)
    {
        int s=str[i];
        if(s>=48  && s<=57)
        {
            s=s+key;
            if(s>57)
            {
                s=s-10;
            }
        }
        else if(s>=65 && s<=90)
        {
            s=s+key;
            if(s>90)
            {
                s=s-26;
            }
        }
        else if(s>=97 && s<=122)
        {
            s=s+key;
            if(s>122)
            {
                s=s-26;
            }
        }
        char c=s;
        str[i]=c;
    }

    cout<<str;


}