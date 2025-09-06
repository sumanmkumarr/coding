#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(40);
    q.push(50);

    q.pop();
    cout<<"front element of queue is "<<q.front()<<endl;
    cout<<"back element of queue is "<<q.back()<<endl;

    if(q.empty())
    {
        cout<<"queue is empty";
    }
    else
    {
        cout<<"queue has some element";
    }
}