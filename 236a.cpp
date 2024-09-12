#include <bits/stdc++.h>
using namespace std;

int main()
{
	string st;cin>>st;
	for (int i = 0; i < st.size()-1; ++i) 
		for (int j = i+1; j <st.size(); ++j)
	if (static_cast<int>(st[i])>static_cast<int>(st[j]))
	{
		char tmp;
		tmp=st[i];
		st[i]=st[j];
		st[j]=tmp;
	}
	int count(0);
	for (int i = 0; i < st.size()-1; ++i)if (st[i]!=st[i+1]) ++count;
	++count;
		if (count %2!=0) cout <<"IGNORE HIM!"<<endl; else cout <<"CHAT WITH HER!"<<endl;	
	return 0;
}