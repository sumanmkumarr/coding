// print all sequence with sum is equal to k and condition is any sequence only one time any index is used  i.e print subsequence with sum is equal to k

// for sorting the vector we can use this prebuilt function also
// sort(array_name.begin(),array_name.end())


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sum_sequence(int ind,vector<int> &brr,int arr[],int k,int n)
{
    if(ind==n)
    {
        if(k==0)
        {
            sort(brr.begin(),brr.end());
            for(auto it:brr)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }

    if(arr[ind]<=k)
    {
        brr.push_back(arr[ind]);
        sum_sequence(ind+1,brr,arr,k-arr[ind],n);
        brr.pop_back();
    }
    sum_sequence(ind+1,brr,arr,k,n);
}

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;

    vector<int>brr;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sum_sequence(0,brr,arr,k,n);

}