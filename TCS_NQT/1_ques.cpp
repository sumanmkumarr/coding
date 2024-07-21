// find max element of every three length subarry of given array

#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sec[n-3];
    int t=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n-3;i++)
    {
        int m=arr[i];
        for(int j=i;j<i+3;j++)
        {
            if(m<arr[j])
            {
                m=arr[j];
            }
        }
        sec[t]=m;
        t++;
    }

    for(int i=0;i<n-3;i++)
    {
        cout<<sec[i];
    }

}