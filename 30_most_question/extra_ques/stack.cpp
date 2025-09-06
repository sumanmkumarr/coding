#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);

    s.pop();
    int t = s.top();
    cout<<"top element is "<<t<<endl;
    if(s.empty())
    {
        cout<<"stack is empty";
    }
    else
    {
        cout<<"stack has some element";
    }
}