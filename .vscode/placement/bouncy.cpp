#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int len=str.length();
    int arr[len-1];
    int inc=0;
    int dec=0;
    for(int i=0;i<len-1;i++)
    {
        arr[i]=str[i]-str[i+1];
        if(arr[i]<0)
        {
            inc=inc+1;
        }
        else if(arr[i]>0)
        {
           dec=dec+1;
        }
    }
    if(inc>0 && dec>0)
    {
        cout<<"bouncy number";
    }
    else{
        cout<<"not bouncy number";
    }

}