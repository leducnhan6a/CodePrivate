#include <bits/stdc++.h>
using namespace std;





int main()
{
	string st;cin>>st;
	int a1=0;int a2=0;
	if (st.size()==1) cout <<st<<endl;
	else
	{
	for (int i = 0; i < st.size(); ++i)
	if ((static_cast<int>(st[i]))<=90) a1+=1;else a2+=1;
	if (a1<a2) 		for (int i = 0; i < st.size(); ++i)			if (st[i]<=90) st[i]=static_cast<char>(st[i]+32);
		if (a1>a2)			for (int i = 0; i < st.size(); ++i)	if (st[i]>=97) st[i]=static_cast<char>(st[i]-32);
		if (a1==a2) 
			for (int i = 0; i < st.size(); ++i) if (st[i]<=90) st[i]=static_cast<char>(st[i]+32);
			cout <<a1<<' '<<a2<<endl;
				cout <<st<<endl;
	}
			
	
			
		
}
