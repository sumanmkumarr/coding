#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    int n;
    cin>>n;
    int temp=n;
    int t=0,i=0;
    while(temp>0)
    {
        int rem;
        rem=temp%10;
        t=t+rem*pow(8,i);
        temp=temp/10;
        i++;

    }
    cout<<t;
}