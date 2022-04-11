#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void PrintSequence(int ind,int n,vector<int>&ds, int arr[])
{
	if(ind==n)
	{
		for(auto it:ds)
		{
			cout<<it<<" ";
		}
		cout<<"\n";
		return;
	}
	//logic to make a pick
	ds.push_back(arr[ind]);
	PrintSequence(ind+1,n,ds,arr);
	ds.pop_back();

	//logic to not make a pick
	PrintSequence(ind+1,n,ds,arr);
}

int main() {
	// Your code goes here;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	vector<int>ds;
	PrintSequence(0,n,ds,arr);

	return 0;
}