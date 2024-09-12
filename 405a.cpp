#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >>n;
	int nhan[n];
	for (int i = 0; i < n; ++i) cin>>nhan[i];
	for (int i = 0; i < n-1; ++i)
		for (int j = i+1; j <n ; ++j)
			if (nhan[i]<nhan[j])
			{
				int tmp;
				tmp =nhan[i];
				nhan[i]=nhan[j];
				nhan[j]=tmp;
			}
	for (int i = 0; i < n; ++i) cout<<nhan[i]<<' '<<endl;	return 0;
}