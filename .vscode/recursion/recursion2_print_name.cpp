#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void func(int i,int n)
{
    if(i>n)
    {
        return;
    }
    cout<<"suman\n";
    i++;
    func(i,n);
}

int main()
{
   int n;
   cin>>n;
   func(1,n);

}