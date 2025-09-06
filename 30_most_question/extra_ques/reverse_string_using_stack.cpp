#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "hello_suman";
    stack<char>s;
    for(auto c:str)
    {
        s.push(c);
    }

    string r = "";
    while(!s.empty())
    {
        r = r + s.top();
        s.pop();
    }
    cout<<r;
    
}