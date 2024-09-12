#include <bits/stdc++.h>
using namespace std;

int gcd (int a,int b)
{
	int sodu;
	while (b!=0)
	{
		sodu=a%b;
		a=b;
		b=sodu;
	}
	return a;
}


int main()
{
	int t ; cin >>t;
	while (t!=0)
	{
		int n; cin >>n;	int nhan[n];
		for (int i = 0; i < n; ++i) cin >>nhan[i];
			for (int i = 0; i < n-1; ++i)
				for (int j = i+1; j < n; ++j) if (nhan[i]<nhan[j])
				{
					int tmp;
					tmp=nhan[i];
					nhan[i]=nhan[j];
					nhan[j]=tmp;
				}
				int count(0);
	  	for (int i = 0; i < n-1; ++i)
				for (int j = i+1; j < n; ++j)   cout<<gcd(nhan[i],nhan[j])<<' ';
				cout<<count << endl;
		--t;
	}	
	return 0;
}