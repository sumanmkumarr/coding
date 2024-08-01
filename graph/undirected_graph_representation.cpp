// represent undirected graph by using adjacency matrix

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;//no of vertex
    int m;//no of edge
    cin>>n>>m;

    int adj[n+1][m+1]={0};

    for(int i=0;i<m;i++)
    {
        int u;
        int v;
        // u and v shows that their is a connection between u and v
        cin>>u>>v;

        adj[u][v]=1;
        adj[v][u]=1;
    }

    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}