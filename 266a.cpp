#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n ; cin>>n;
	string a; cin>>a;
	int count(0);	
	for (int i = 0; i < a.size()-1; ++i)
	if (a[i]==a[i+1]) ++count;
 	cout<<count<<endl;
	return 0;
}