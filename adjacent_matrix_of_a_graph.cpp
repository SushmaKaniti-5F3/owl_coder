//Creating an adjacent matrix for a graph
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,e;
	cin>>n>>e;
	int a[n+1][n+1]={0};
	for(int i=0;i<e;i++)		//adjacency matrix
	{
			int u,v;
			cin>>u>>v;
			a[u][v]=1;
			a[v][u]=1;
	}
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<n+1;j++)
		cout<<a[i][j] <<" ";
		cout<<endl;
	}

	return 0;
}

Input:
---------
5 6
1 2
2 3
3 4
4 5
5 1
2 4

Output:
-------
0 1 0 0 1 
1 0 1 1 0 
0 1 0 1 0 
0 1 1 0 1 
1 0 0 1 0 