#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    int n;
    cin>>n;
    int len=log2(n)+1;
    int temp=n;
    int arr[len];
    for(int i=0;i<len;i++)
    {
        arr[len-i-1]=temp%2;
        temp=temp/2;
    }
    for(int i=0;i<len;i++)
    {
        cout<<arr[i];
    }
}