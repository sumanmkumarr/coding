#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// space complexity  O(1)    and time complexity  O(n)
int main()
{
    int first=0;
    int second =1;
    int result=0;
    int n;
    cin>>n;

    if(n==1 || n==0)
    {
       cout<<n;
    }
    else{
        for(int i=2;i<=n;i++)
        {
            result=first+second;
            first=second;
            second=result;
        }
        cout<<result;
    }
   
}