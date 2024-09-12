#include <bits/stdc++.h>
using namespace std;

int gcd (int a,int b)
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
	int a,b;
	cin>>a>> b;
	cout << gcd(a,b)<<endl;

    return 0;
}