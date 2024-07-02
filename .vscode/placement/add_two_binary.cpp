#include<iostream>
using namespace std;
#include<cmath>
#include<string>

int main()
{
    string str1;
    string str2;
    cin>>str1;
    cin>>str2;
    
    int n=str1.length();
    int arr[n+1];
    if(str1.length()==str2.length())
    {
        int carry=0;
        int sum=0;
        for(int i=0;i<=str1.length();i++)
        {
            sum=carry+(str1[n-i-1])+(str2[n-i-1]);
            if(sum>1)
            {
                carry=1;
            }
            else{
                carry=0;
            }
            if(sum % 2 ==0)
            {
                arr[n-i]=0;
            }
            else{
                arr[n-i]=1;
            }
        }
        
    }
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i];
    }

   // cout<<str1[-1];
}