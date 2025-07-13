// count even consequative character

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cin>>s1;
    int n=s1.size();
    char x=s1[0];
    int y=1;
    int u=0;
    for(int i=1;i<n;i++)
    {
        if(s1[i]==x)
        {
            y=y+1;
        }
        else{
            x=s1[i];
            if(y%2==0)
            {
                u=u+y;
                y=1;
            }
            else{
                y=1;
            }
        }
    }
    if(y%2==0)
    {
        u=u+y;
    }
    cout<<u;
}