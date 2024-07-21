#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s;
    cin>>s;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==s)
        {
            cout<<mid;
            break;
        }
        else if(arr[mid]>s)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }

}