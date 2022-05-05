//Creating an adjacent list for a matrix
#include<bits/stdc++.h>
using namespace std;
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
sucessfully executed

Explanation:
-------------
n=5 ,e=6

adjacent list:

1 | 2 5			//adjacent nodes of 1 are 2,5 are stored in adjacent list
2 | 1 3 4
3 | 2 4
4 | 3 2 5
5 | 4 1