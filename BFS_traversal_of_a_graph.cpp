//Traversal of a graph using BFS
#include <bits/stdc++.h>
using namespace std;
void BFS(int node,vector<int>&vis,vector<int>adj[])
{
	queue<int>q;
	q.push(node);
	vis[node]=1;
	while(!q.empty())
	{
		int node=q.front();
		q.pop();
		cout<<node<<" ";
		for(auto i:adj[node])
		{
			if(!vis[i])
			q.push(i);
			vis[i]=1;
		}
	}
}
int main() {
	int n,e;
	cin>>n>>e;
	vector<int>adj[n+1];
	vector<int>vis(n+1,0);
	for(int i=1;i<=e;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		BFS(i,vis,adj);
	}
	return 0;
}

Input:
------
8 8
1 2
2 3
3 4
4 5
5 1
2 4
6 7
7 8

Output:
------
1 2 5 3 4 6 7 8 
