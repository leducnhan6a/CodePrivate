	#include <iostream>
	#include <math.h>
	using namespace std;



bool snt(int a)
{
	if ((a==1)||(a==2)) return false; else

	
	for (int i = 3; i <= a; i+=2;)
	if (a%i!=0) return true ; 
	return false;

		
}



int main()
	{
		int n;
		cin >>n;
		long long nhan[n];
		for (int i = 0; i < n; ++i) cin >> nhan [i];
		for (int i = 0; i < n; ++i) 
		{
			int a=sqrt(nhan[i]);
			if ((snt(a)==true)&& (a*a==nhan[i])) cout <<"YES";else cout << "NO";
			
		}			
			return 0;
	}