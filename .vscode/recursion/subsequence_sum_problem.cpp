// print that subsequence which sum is equal to k

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void subsequence_sum(int i,vector<int> &arr,int brr[],int n,int k)
{
    int sum=0;
    if(i==n)
    {
        for(auto it: arr)
        {
            // cout<<it;
            sum=sum+it;

        }
        // cout<<"\n";
        
        if(sum==k && t==0)
        {
            cout<<"that subsequence is present and subsequence is ";
            for(auto it:arr)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        
        
        return;
    }
    arr.push_back(brr[i]);
    subsequence_sum(i+1,arr,brr,n,k);

    arr.pop_back();
    subsequence_sum(i+1,arr,brr,n,k);



}
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int brr[n];
    for(int i=0;i<n;i++)
    {
        cin>>brr[i];
    }
    vector<int>arr;

    subsequence_sum(0,arr,brr,n,k);


}