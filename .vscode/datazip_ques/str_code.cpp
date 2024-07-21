//  take string and code(array int) from user that should be atleast 2 length,assign a to 1,b to 2,c to 3,....z to 26,   now add 1st character of code with 1st character of string,and add 2nd also,...,and print that formed string and their value 


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    vector<int>code={2,5,4,6,6,8};
    int n=str.length();
    int arr[n];
    if(str.length()>=2)
    {
        for(int i=0;i<n;i++)
        {
            int s=str[i];
            int d=s-64;
            arr[i]=code[i]+d;
            if(arr[i]>26)
            {
                arr[i]=arr[i]-26;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
        int y=arr[i]+64;
        char q=y;
        cout<<q<<" ";
    }
}
