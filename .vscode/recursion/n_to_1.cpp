// do not - operator

#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void func(int i,int n)
{
    if(i>n)
    {
        return;
    }
    func(i+1,n);
    cout<<i;
}
int main()
{
int n;
cin>>n;
func(1,n);
}