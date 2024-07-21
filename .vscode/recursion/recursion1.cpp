// function which call itself is recursion 
// condition where recursion get terminated is base case


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int s=0;
void suman()
{
    cout<<s;
    if(s==4)
    {
        return;
    }
    s++;
    suman();
}

int main()
{
    suman();
}