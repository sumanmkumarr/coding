#include<bits/stdc++.h>
using namespace std;
#include<iostream>
int main()
{
    int n;
    cin>>n;
    int r;
    int m=0;
    while(n>0)
    {
       r=n%10;
       if(r==0)
       {
         r=5;
         m=m*10+r;
       }
       else{
         m=m*10+r;
       }
       n=n/10;
    }
    int b=0;
    while(m>0)
    {
       b=b*10+(m%10);
       m=m/10;
    }
    cout<<b;

}