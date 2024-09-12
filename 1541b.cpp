#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin >>t;
	for (int k = 0; k < t; ++k)
	{
		long long n;cin >>n;
		long long a[n];
		int count(0);
		for (int i = 1; i <= n; ++i) cin >>a[i];
		for (int i = 1; i <= n-1; ++i)
			for (int j = i+1; j <= n; ++j) if (a[i]*a[j]==i+j) ++count;
				cout<<count<<endl;
	}
	return 0;
}