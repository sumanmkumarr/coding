// print all possible substring
// substring - it is continuous part of string in order
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
          string s="";
          for(int j=i;j<str.size();j++)
          {
             s=s+str[j];
             cout<<s<<" ";
          }
          cout<<endl;
    }
}
