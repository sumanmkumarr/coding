// X = A * N + Z , X AND A IS GIVEN,FIND THE VALUE OF N ,SO IT WILL SATISFY THE EQUATION X=A*N+Z
// initially assume z=0,then we will get the maximum value of n
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,a;
    cin>>x>>a;
    int flag=0;
    int n=(x/a)+1; // maximum value of n

    for(int i=1;i<=n;i++)
    {
        for(int z=1;z<=i;z++)
        {
            if(n%z==0 && x==a*n+z)
            {
                cout<<n<<endl;
                flag=1;
            }
        }
    }
    if(flag == 0)
    {
        cout<<"none";
    }


}