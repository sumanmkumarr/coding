#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void dfs_calc(int node,vector<vector<int>> adj, int vis[],vector<int> &dfs)
{
    vis[node] = 1;
    dfs.push_back(node);
    for(auto it : adj[node])
    {
        if(vis[it] != 1)
        {
            dfs_calc(it,adj,vis,dfs);
        }
    }
    
}

vector<int> dfs_result(vector<vector<int>> adj,int n)
{
    int start = 0;
    int vis[n] = {0};
    vector<int> dfs;
    dfs_calc(start,adj,vis,dfs);
    return dfs;

}

int main()
{
    vector<vector<int>> adj = {{1,2},{0},{0,1}};
    int n = 3;
    vector<int> dfs = dfs_result(adj,n);
    for(auto it: dfs)
    {
        cout<<it<<" ";
    }
    

}