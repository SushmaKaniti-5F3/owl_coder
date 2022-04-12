#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void Sequence(int ind,int n, int arr[],int sum,int t,int &count)
{
	if(ind==n)
	{
		if(sum==t)
		count+=1;
		return;
	}
	//logic to make a pick
	sum+=arr[ind];
	Sequence(ind+1,n,arr,sum,t,count);
	sum-=arr[ind];
	//logic to not make a pick
	Sequence(ind+1,n,arr,sum,t,count);
}

int main() {
	// Your code goes here;
	int n,t,sum=0;
	cin>>n>>t;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int count=0;
	Sequence(0,n,arr,sum,t,count);
	cout<<count;
	return 0;
}