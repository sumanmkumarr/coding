#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void subsequence_sum(int sum,int i,vector<int> &brr,int arr[],int n,int k)
{
    if(i==n)
    {
        for(auto it:brr)
        {
            sum=sum+it;
        }
        if(sum==k)
        {
            for(auto it:brr)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    brr.push_back(arr[i]);
    

    subsequence_sum(sum,i+1,brr,arr,n,k);

    
    brr.pop_back();
    subsequence_sum(sum,i+1,brr,arr,n,k);



}

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<int>brr;

    subsequence_sum(0,0,brr,arr,n,k);


}