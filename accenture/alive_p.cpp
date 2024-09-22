#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;// per box
    cin>>n;
    int e;// required per day
    cin>>e;
    int d;//day spend
    cin>>d;
     
    int s=d/7;
    // print minimum number of box or -1
    if((d-s)*n > e*d)
    {
        cout<<"-1";
    }
    else{

    }
}