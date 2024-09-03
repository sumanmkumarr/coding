#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int recursion_num(int n)
{
    if(n<=1)
    {
        return n;
    }
    else{
        return recursion_num(n-1)+recursion_num(n-2);
    }
}

int main()
{
    int x=recursion_num(6);
    cout<<x;

}