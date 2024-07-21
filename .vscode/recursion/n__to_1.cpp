#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void func(int i,int n)
{
    if(n<i)
    {
        return;
    }
    cout<<n;
    func(i,n-1);
}

int main()
{
int n;
cin>>n;
func(1,n);
}