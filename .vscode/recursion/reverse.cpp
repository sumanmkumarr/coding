#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverses(int i,int arr[],int n)
{
    if(i>=n/2)
    {
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reverses(i+1,arr,n);
}
int main()
{
int n;
cin>>n;
int array[n];
for(int i=0;i<n;i++)
{
    cin>>array[i];
}
reverses(0,array,n);
for(int i=0;i<n;i++)
{
    cout<<array[i]<<" ";
}
}
