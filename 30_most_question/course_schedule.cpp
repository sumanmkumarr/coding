#include<bits/stdc++.h>
using namespace std;


bool course_schedule(int n,vector<vector<int>> &prerequisites)
{
    // create adjacency list
    vector<vector<int>> adj(n);
    for(auto itr:prerequisites)
    {
        adj[itr[1]].push_back(itr[0]);
    }
    // calculate indegree of all the node
    vector<int>indegree(n,0);
    for(int i=0;i<n;i++)
    {
        for(auto itr:adj[i])
        {
            indegree[itr]++;
        }
    }

    queue<int>q;
    for(int i=0;i<n;i++)
    {
        if(indegree[i] == 0)
        {
            q.push(i);
        }
    }

    vector<int>topological;

    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        topological.push_back(node);

        for(auto itr:adj[node])
        {
            indegree[itr]--;
            if(indegree[itr] == 0)
            {
                q.push(itr);
            }
        }
    }
    if(topological.size() != n)
    {
        cout<<"cycle is there";
        return false;
    }
    return true;
}

int main()
{
    int n = 2;
    vector<vector<int>> pre = {{1,0},{0,1}};
    bool r = course_schedule(n,pre);
    cout<<r;

}