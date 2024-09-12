#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin >> t;
	int res(0);
	while (t!=0)
	{	
		int a;
		int count(0);
		for (int i = 0; i < 3; ++i) 
		{
			cin >>a;if (a==1) ++count;
		}
		if (count >=2) ++res;
		--t;
	}
	cout << res <<endl;
	return 0;
}