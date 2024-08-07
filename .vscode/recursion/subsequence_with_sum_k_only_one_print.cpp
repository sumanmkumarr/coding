#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void only_once_print(int i,vector<int>arr,int brr[],int n,int k)
{
    int sum=0;
    if(i==n)
    {
        for(auto it:arr)
        {
            // cout<<it<<" ";
            sum=sum+it;
        }
        //cout<<endl;
        if(sum==k)
        {
            //no=no+1;
            for(auto w:arr)
            {
                cout<<w<<" ";
            }
            cout<<endl;
        }

        return;
    }
    arr.push_back(brr[i]);
    only_once_print(i+1,arr,brr,n,k);

    arr.pop_back();
    only_once_print(i+1,arr,brr,n,k);
    
}

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;

    vector<int>arr;

    int brr[n];
    for(int i=0;i<n;i++)
    {
        cin>>brr[i];
    }
    
    only_once_print(0,arr,brr,n,k);
    
}