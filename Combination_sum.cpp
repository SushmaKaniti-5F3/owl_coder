#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
void Perm(int n,int arr[],vector<int>&ds,int vis[])
{
	if(n==ds.size())
	{
		for(auto it:ds)
		{
			cout<<it<<" ";
		}
		cout<<"\n";
		return;
	}
	for(int i=0;i<n;i++)
	{
		//cout<<i<<" ";
		if(vis[i]==0)
		{
			vis[i]=1;
			ds.push_back(arr[i]);
			Perm(n,arr,ds,vis);
			vis[i]=0;
			ds.pop_back();
		}
	}
}
int main() {
	
	int n;
	cin>>n;
	int arr[n];
	int vis[n]={0};
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	vector<int>ds;
	Perm(n,arr,ds,vis);

	return 0;
}

/*
Input:
------
3
1 2 3

Output:
-------
1 2 3 
1 3 2 
2 1 3 
2 3 1 
3 1 2 
3 2 1
 
*/