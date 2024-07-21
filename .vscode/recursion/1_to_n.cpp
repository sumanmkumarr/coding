// do not use + operator

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void func(int i,int n)
{
    if(i>n)
    {
        return;
    }
    func(i,n-1);
    cout<<n;
}
int main()
{
int n;
cin>>n;
func(1,n);
}