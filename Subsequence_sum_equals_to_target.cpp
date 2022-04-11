#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void PrintSequence(int ind,int n,vector<int>&ds, int arr[],int sum,int t)
{
	if(ind==n)
	{
		if(sum==t)
		for(auto it:ds)
		{
			cout<<it<<" ";
		}
		return;
	}
	//logic to make a pick
	ds.push_back(arr[ind]);
	sum+=arr[ind];
	PrintSequence(ind+1,n,ds,arr,sum,t);
	ds.pop_back();
	sum-=arr[ind];
	//logic to not make a pick
	PrintSequence(ind+1,n,ds,arr,sum,t);
}

int main() {
	// Your code goes here;
	int n,t,sum=0;
	cin>>n>>t;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	vector<int>ds;
	PrintSequence(0,n,ds,arr,sum,t);

	return 0;
}