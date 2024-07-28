#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void mergesort(int arr[],int low,int high)
{
    int mid=(low+high)/2;
    if(low==high)
    {
        return;
    }
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);

}

void merge(int arr[],int low,int mid,int high)
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

    for(int i=low;i<high;i++)
    {
        arr[i]=temp[low];
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    mergesort(arr,0,n-1);


}