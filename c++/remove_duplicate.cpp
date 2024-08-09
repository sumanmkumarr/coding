// if array is sorted then remove duplicate element

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={3,3,3,4,5,7,8,8,9,9};
    int t=arr[0];
    int a=1;
    for(auto i:arr)
    {
        if(t!=i)
        {
            arr[a]=i;
            t=i;
            a++;
        }
    }
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
}