#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> adj = {{},{},{3},{1},{0,1},{0,2}};
    int n = adj.size();


    // indegree
    vector<int> indegree(n,0);

    for(int i =0;i<n;i++)
    {
        for(auto j:adj[i])
        {
            indegree[j]++;
        }
    }
    for(int i = 0;i<n;i++)
    {
        cout<<"indegree of "<<i<<"is "<<indegree[i]<<endl;;
    }



    // outdegree
    for(int i = 0;i<n;i++)
    {
        cout<<"outdegree of "<<i<<"is "<<adj[i].size()<<endl;
    }
}