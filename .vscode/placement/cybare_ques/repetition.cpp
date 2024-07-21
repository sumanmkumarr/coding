// find repeated character and absolute difference between even no of character and odd no of character

#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    string str;
    cin>>str;

    int arr[128]={0};
    int t=str.length();

    for(int i=0;i<t;i++)
    {
        int a=str[i];
        arr[a]++;
    }
    int even=0;
    int odd=0;
    for(int i=0;i<127;i++)
    {
        if(arr[i]>0)
        {
            char t=i;
            cout<<t<<arr[i]<<" ";
            if(arr[i]%2==0)
            {
                even=even+arr[i];
            }
            else{
                odd=odd+arr[i];
            }
        }
    }
    int result=abs(even-odd);
    cout<<"\n"<<result;
}