#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,r;
    cin>>n>>m>>r;
    int arr[n-1];
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        sum=sum+arr[i];
    }
    int x;
    x=(r*n)-sum;
    if(x<=m)
    {
        cout<<x;
    }
    else{
        cout<<"-1";
    }

    
}