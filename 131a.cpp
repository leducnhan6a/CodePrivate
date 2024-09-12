#include <bits/stdc++.h>
using namespace std;
 
int hoa()
{
 
}
 
int main()
{
	string st;cin>>st;
	int count;
	for (int i = 0; i < st.size(); ++i)
		 
			if (st[i]<=90) ++count;
		if (count == st.size()) cout <<st<<endl;
	
		else
	{	
	if (st[0]>=97) st[0]-=32;
	for (int i = 1; i < st.size(); ++i) if (st[i]<=90) st[i]+=32;
		cout <<st<<endl;
	}
	return 0;
}