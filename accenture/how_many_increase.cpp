// how many number are there which is greater than its all previous value
 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxv=0;
    int t=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxv)
        {
            maxv=arr[i];
            t=t+1;
        }
        else{
            continue;
        }
    }
    cout<<t;
}