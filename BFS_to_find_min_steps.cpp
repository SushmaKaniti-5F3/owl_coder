//How many steps are required to reach from given start point to end point in a given array
#include <bits/stdc++.h>
using namespace std;
int BFS(int start,int end,int n,int arr[])
{
	//step1 1 hqve a queqe
	if(start==end)return 0;
	queue<pair<int,int>>Q;			//creating a queqe to store the start and steps count
	Q.push({start,0});				//pushing start and step count=0 
	while(!Q.empty())
	{
		auto it=Q.front();			//it=start,step count
		int newstart=it.first;		//newstart=start
		int steps=it.second;		//steps=step count
		Q.pop();					//removing front of queue
		for(int i=0;i<n;i++)
		{
			if(newstart*arr[i]%100000==end)			
			{
				return steps+1;
			}
			else{
				if(newstart*arr[i]%100000<end)
				{
					Q.push({newstart*arr[i]%100000,steps+1});
				}
			}
		}
	}
	return -1;
}
int main() {
	int start,end;
	cin>>start>>end;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	cout<<BFS(start,end,n,arr);
	return 0;
}


Input:
-------
7 66175
3
3 4 65

Output:
-------
4