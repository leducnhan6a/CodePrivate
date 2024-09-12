#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;int a,b;
	for (int i = 1; i <=5; ++i)
		for (int j = 1; j<=5; ++j) 
		{
			cin>>n;
			if (n==1) 
			{
				a=abs(3-i);
				b=abs(3-j);
		}
		cout <<a+b<<endl;
	return 0;
}