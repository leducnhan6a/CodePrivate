#include <iostream>
using namespace std;

int main()
{
	int t; cin>>t;
	while (t!=0)
	{
		int s[4]; for (int i = 0; i < 4; ++i) cin >> s[i];
		int a=s[0];int b=s[2];
		if (s[0]<s[1]) a=s[1];
		if (s[2]<s[3]) b=s[3]; 
	
		for (int i = 0; i < 3; ++i)
			for (int j = i+1; j <4; ++j)
			if (s[i]>s[j]) {
				int tmp;
				tmp=s[i];
				s[i]=s[j];
				s[j]=tmp;
			} 
			if ((a==s[2]) && (b==s[3]) &&(a<b)) cout <<"YES"<<endl;
	else
		if ((b==s[2]) && (a==s[3]) &&(a>b)) cout << "YES"<<endl;
		else 		cout <<"NO"<<endl;		
		--t;
	}
	return 0;
}