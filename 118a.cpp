#include <bits/stdc++.h>
using namespace std;

bool kt(string a)
{
	bool res=true;
	for (int i = 0; i < a.size(); ++i) 
		if (a[i]=='a'||a[i]=='o'||a[i]=='y'||a[i]=='e'||a[i]=='u'||a[i]=='i') res=false;
	return res;
}

int main()
{
	string st;cin >>st;
	for (int i = 0; i < st.size(); ++i) if (st[i]<=90) st[i]+=32;
		for (int i = 0; i < st.size; ++i) if (kt(st[i])==false) st[i]='0';
	for (int i = 0; i < st.size(); ++i) if (st[i]!='0') cout  <<'.'<<st[i];

	return 0;
}