#include<iostream>
using namespace std;
#include<math.h>

int main()
{
    int deci;
    cin>>deci;
    int len=(log(deci)/log(8))+1;
    int arr[len];
    for(int i=0;i<len;i++)
    {
        arr[len-i-1]=deci%8;
        deci=deci/8;
    }
    for(int i=0;i<len;i++)
    {
        cout<<arr[i];
    }
    
}