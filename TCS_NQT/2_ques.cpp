// at prime index pow(2,i)  , at perfect square index pow(3,j)  , at other index sum of previous term should be

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<math.h>


bool is_prime(int n)
{
    // here for finding time complexity of prime is O(n)
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0 || n==1)
        {
            return false;
        }
    }
    if(n>1)
    {
        return true;
    }
    
}

bool is_perfect_square(int n)
{

    // for finding square root of any number ,it take O(log(n)) time, that's why overall also it time complexity is O(log(n))  only
    int s=sqrt(n);
    if(s*s==n)
    {
        return true;
    }
    return false;

}

int main()
{
    int n;
    cin>>n;
    cout<<is_prime(n);
    cout<<is_perfect_square(n);
    int arr[n];
    int m=0;
    int b=0;

    for(int i=1;i<=n;i++)
    {
        int z=is_prime(i);
        int x=is_perfect_square(i);
        if(z==1)
        {
            arr[i]=(pow(2,m));
            m=m+1;
        }
        else if(x==1)
        {
            arr[i]=(pow(3,b));
            b=b+1;
        }
        else
        {
            arr[i]=arr[i-1]+arr[i-2];
        }

    }

    for(int i=1;i<=n;i++)
    {
        cout<<" ";
        cout<<arr[i];
    }

}