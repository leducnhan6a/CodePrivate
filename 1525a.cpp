#include <iostream>
using namespace std;

int gcd(int a,int b)
{
	int sodu;
	while (b!=0)
	{
		sodu=a%b;
		a=b;
		b=sodu;
	}
	return a;
}



int main()
{
	int t;cin>>t;
	int a[100];
	int ruou(0),nuoc(0);
	for (int i = 0; i < t; ++i)
	{
		int k;cin>>k;
		if (k==100) cout <<'1'<<endl;
		else 
		{
		for (int j = 0; j <=100;++j)
			if (j==k) 
			{
				ruou=j;
				nuoc=100-ruou;
				break;
			} 
			int res =gcd(ruou,nuoc);
			cout <<res<<endl;
			ruou/=res;
			nuoc/=res;
			cout <<ruou<<' '<<nuoc<<endl;
			a[i]= ruou+nuoc;
		}
	}
	for (int i = 0; i < t; ++i) cout << a[i];
	return 0;
}