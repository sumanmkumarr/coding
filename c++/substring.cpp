// print all possible substring
// substring - it is continuous part of string in order(in sequencially only we can pick the element)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1;
    cin>>str1;
    for(int i=0;i<str1.size();i++)
    {
          string s="";
          for(int j=i;j<str1.size();j++)
          {
             s=s+str1[j];
             cout<<s<<" ";
          }
          cout<<"\n";
    }
}
