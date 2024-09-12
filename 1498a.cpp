#include <bits/stdc++.h>
using namespace std;



int main()
{
	int t; cin>> t;
	while ( t!=0)
	{
		long long n; cin>> n;
		cout <<n +3 -(n%3)<<endl;
		--t;
	}
	
	return 0;
}
