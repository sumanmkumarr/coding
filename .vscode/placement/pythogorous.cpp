#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<cmath>
int main()
{
   int a,b,c;
   cin>>a>>b>>c;
   if(a>b && a>c)
   {
      if(a*a == b*b + c*c)
      {
         cout<<"yes";
      }
      else{
        cout<<"no";
      }
   }
   else if(b>a && b>c)
   {
    if(b*b == a*a + c*c)
    {
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
   }
   else{
    if(c*c == a*a + b*b)
    {
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

   }

}