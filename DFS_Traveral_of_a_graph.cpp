//Visiting all nodes in a graph using DFS
#include<bits/stdc++.h>
using namespace std;
void DFS(int node,vector<int>&vis,vector<int>adj[])
{
    cout<<node<<" ";
    vis[node]=1;
    for(auto it:adj[node])
    {
        if(!vis[it])
        {
            DFS(it,vis,adj);
        }
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    int u,v;
    vector<int>vis(n,0);
    vector<int>adj[n+1];
    n=1;
    for(int i=0;i<e;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(v);
    }
    DFS(1,vis,adj);
}

Input:
------
5 6
1 2
2 3
3 4
4 5
5 1
2 4

Output:
-------
1 2 3 4 5 