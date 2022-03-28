#include<bits/stdc++.h>
using namespace std;
int N=1000001;
vector<bool>seive(N,true);
void gen_seive()
{
	for(int i=2;i*i<N;i++)
	{
		if(seive[i]==1)
		{
			for(int j=i*i;j<N;j+=i)
				seive[j]=0;	
		}
	}
}
void get_primes(int num,vector<int>&ds)
{
	for(int i=2;i<=num;i++)
	{
		if(seive[i]==1)
		ds.push_back(i);
	}
}
int main() {
	int n;//1<=n<=10^9
	cin>>n;
	int L,R;
	cin>>L>>R;	//R-L<=10^6

	//step 1 have a simple seive 10^6
	gen_seive();
	
	//step 2 store all primes uptill its sqrt
	vector<int>ds;
	get_primes(sqrt(R)+1,ds);

	//step 3 have a dummy vector of length R-L+1
	vector<int>dummy(R-L+1,1);

	//step 4 get the multiples of primes u 
	//have in ds and mark them as 0's
	for(auto it:ds)
	{
		int firstmul=(L/it)*it;
		if(firstmul<L)firstmul+=it;
		for(int j= max(firstmul,it*it) ;j<=R ; j+=it)
		{
			dummy[j-L]=0;
		}

	}
	for(int i=0;i<R-L+1;i++)
	{
		if(dummy[i]==1)cout<<L+i<<" ";
	}


	return 0;
}
