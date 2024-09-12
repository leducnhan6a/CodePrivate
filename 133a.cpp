#include <bits/stdc++.h>
using namespace std;



int main()
{
	string st;cin>>st;
	int count (0);
	for (int i = 0; i < st.size(); ++i) if ((st[i]=='H')|| (st[i]=='Q')||(st[i]=='9')||(st[i]=='+'))
{
	break; cout<<"YES"; ++count;
}
if (count ==0) cout << "NO"<<endl; 	return 0;
}