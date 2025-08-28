// Topological order (or topological sorting) is a way of arranging the vertices (nodes) of a Directed Acyclic Graph (DAG) such that for every directed edge 
// u→v, vertex 
// u comes before vertex 
// v in the ordering.

// Example

// Suppose you have tasks with dependencies:

// Task A must be done before Task B.

// Task A must be done before Task C.

// Task B must be done before Task D.

// Task C must be done before Task D.

// This forms a DAG. One possible topological order is:

// A → B → C → D

// (or A → C → B → D — multiple orders may exist, as long as dependencies are respected).



// topological sorting using kahn's algorithm(using bfs)
#include<bits/stdc++.h>
using namespace std;

vector<int> topological_sort(vector<vector<int>> &adj)
{
    // calculate indegree of each node
    int n = adj.size();
    vector<int> indegree(n,0);

    for(int i = 0;i<n;i++)
    {
        for(auto itr:adj[i])
        {
            indegree[itr]++;
        }
    }



    queue<int>q;

    for(int i = 0;i<n;i++)
    {
        if(indegree[i] == 0)
        {
            q.push(i);

        }
    }

    vector<int>topo;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        topo.push_back(node);

        for(auto itr:adj[node])
        {
            indegree[itr]--;
            if(indegree[itr] == 0)
            {
                q.push(itr);
            }
        }
    }

    if(topo.size() != n)
    {
        cout<<"topological sort is not possible";
        return {};
    }
    else
    {
        return topo;
    }



}
int main()
{
     vector<vector<int>> adj = {{},{},{3},{1},{0,1},{0,2}};
     vector<int> topo = topological_sort(adj);
     for(auto itr:topo)
     {
        cout<<itr<<" ";
     }

}