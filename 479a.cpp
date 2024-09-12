#include <bits/stdc++.h>
using namespace std; 
int main()
{
	int a,b,c; cin>>a>>b>>c;int nhan[6];int max=nhan[0];
	nhan[0]=a+b*c;nhan[1]=(a+b)*c;nhan[2]=a*b+c;nhan[3]=a*(b+c);nhan[4]=a+b+c;nhan[5]=a*b*c;
	for (int i = 0; i < 5; ++i) if (max<nhan [i]) max = nhan[i]; cout <<max;
	return 0;
}