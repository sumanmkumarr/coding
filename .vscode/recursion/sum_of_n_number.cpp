#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int func(int i,int n,int a)
{
   if(i>n)
   {
    return a;
   }
   a=a+n;
   func(i,n-1,a);

    
}
int main()
{
    int n;
    cin>>n;
    cout<<func(1,n,0);
}