#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int t=(n/2)+1;
    int x=1;
    for(int i=0;i<t;i++)
    {
        for(int pt=0;pt<i;i++)
        {
            cout<<" ";
        }
        if(n==x)
        {
            cout<<n;
        }
        else
        {
          cout<<n;
          for(int j=0;j<n-x-1;j++)
          {
            cout<<" ";
          }
          cout<<x<<"\n";
          n=n-1;
          x=x+1;
        }
        cout<<"\n";
        
    }
}