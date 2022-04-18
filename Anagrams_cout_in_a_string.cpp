#include <bits/stdc++.h>

using namespace std;

int main() {
	string s,su;
	cin>>s>>su;
	int l1=s.size(),l2=su.size();
	vector<int>f2(26,0);
	for(int i=0;i<l2;i++)
	f2[su[i]-'a']++;
	int h=0,j=l2,ans=0,c;
	while(j<=l1)
	{
		vector<int>f1(26,0);
		c=0;
		for(int i=h;i<j;i++)
		{
			f1[s[i]-'a']++;
		}
		for(int i=0;i<26;i++)
		{
			if(f1[i]==0) continue;
			if(f1[i]==f2[i])
			c++;
		}
		if(c==l2)
		ans++;
		j++;
		h++;
		//f1(26,0);
	}
	cout<<ans;
}