// print all subsequence with sum equal to k,condition is we can pick any element any number of times


#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void sequence_sum(int ind,vector<int> &brr,int arr[],int k,int n)
{
    if(ind==n)
    {
        if(k==0)
        {
            for(auto it:brr)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }

        return;
    }
    


    // this is pick condition
    if(arr[ind]<=k)
    {
         brr.push_back(arr[ind]);
         sequence_sum(ind+1,brr,arr,k-arr[ind],n);
         brr.pop_back();
    }

    // this is not pick condition
    sequence_sum(ind+1,brr,arr,k,n);


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

    sequence_sum(0,brr,arr,k,n);

}


