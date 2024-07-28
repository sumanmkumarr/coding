#include<iostream>
using namespace std;
#include<bits/stdc++.h>


// when size of array is known then we use cin to take input from user in vector 
// when size of array is not known then we use push_back to take input from user
void merge_arr(vector<int>&arr,int low,int mid,int high);

void mergesort(vector<int>&arr,int low,int high)
{
   
    if(low==high)
    {
        return;
    }

    int mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge_arr(arr,low,mid,high);

}

void merge_arr(vector<int>&arr,int low,int mid,int high)
{
    vector<int>temp;

    int left=low;
    int right=mid+1;

    while(left<=mid && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }


    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    mergesort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }


}