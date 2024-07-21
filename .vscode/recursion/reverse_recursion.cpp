#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void rev(int i,string &str,int n)
{
   if(i>=n/2)
   {
    return;
   }
   swap(str[i],str[n-i-1]);
   rev(i+1,str,n);
}

int main()
{
    string str;
    cin>>str;
    int n=str.size();
    rev(0,str,n);
    cout<<str;

}