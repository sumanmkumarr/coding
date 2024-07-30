// set is used for storing the unique data 
// print subsequence in sorted order with sum k and condition is subsequence should be unique
#include<bits/stdc++.h>
using namespace std;


void unique_sequence(int ind,vector<int>&brr,int arr[],int k,int n,set<vector<int>>&unique_sub)
{
    if(ind==n)
    {
        if(k==0)
        {
            vector<int>b=brr;
            sort(b.begin(),b.end());
            unique_sub.insert(b);
        }
        return;
    }

    if(arr[ind]<=k)
    {
        brr.push_back(arr[ind]);
        unique_sequence(ind+1,brr,arr,k-arr[ind],n,unique_sub);
        brr.pop_back();
    }
    unique_sequence(ind+1,brr,arr,k,n,unique_sub);



}
int main()
{
    int n;
    int k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>brr;
    set<vector<int>>unique_sub;

    unique_sequence(0,brr,arr,k,n,unique_sub);

    for(auto it:unique_sub)
    {
        for(auto i:it)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

}