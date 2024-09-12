#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
	int tmp;
	tmp =a;
	a=b;
	b=tmp;
}

int main()
{
	int a[4];
	for (int i = 0; i < 4; ++i) cin >>a[i];	
	int count(0);
	for (int i = 0; i <=2; ++i)
	for (int j =i+1; j <=3; ++j) if (a[i]<a[j]) swap(a[i],a[j]);
	for (int i = 0; i < 3; i++)
	{
		if (a[i]==a[i+1])
		{
			++count;
		}
		
	}
	cout << count<<endl;
	


	return 0;
}