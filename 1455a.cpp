#include <bits/stdc++.h>
using namespace std;

int ham(int x)
{
	string st = static_cast<string>(x);
	string res;
	int nhan;
	for (int i = 0; i < st.size(); ++i)
		if (st[i]=='0') res+=st[i];
	nhan=static_cast<int>(res)
	return nhan;
}


int main()
{
	int t; cin >> t;
	while (t!=0)
	{
	float a[];
		int n; cin >>n
		int count(0);
		for (int i = 1; i <=n ; ++i) a[i]=static_cast<float>(i)/static_cast<float>(ham(i));
			for (int i = 1; i <n; ++i)
			for (int j =i+1; j <=n; ++i)
			if (a[i]!=a[j] ) ++count ;
		cout << count << endl;
			
		--t;
	}
	return 0;
}