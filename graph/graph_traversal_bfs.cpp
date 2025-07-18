#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;


vector<int> bfs_graph_traversal(vector<vector<int>>& adj, int n)
{
    int vis[n] = {0};
    vis[0] = 1;
    queue<int> q;
    q.push(0);
    vector<int> bfs;

    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for(auto it : adj[node])
        {
            if(vis[it] == 0)
            {
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;

}

int main()
{
    vector<vector<int>> adj = {{1, 2}, {0}, {0, 1}};
    int n = 3;
    vector<int> result = bfs_graph_traversal(adj,n);
    for(auto it: result)
    {
        cout<<it<<" ";
    }

    

    
  

}