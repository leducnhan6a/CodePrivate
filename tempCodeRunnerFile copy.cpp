#icnlude <bits/stdc++.h>
using namespace std;


int main()
{
	long long n; cin >> n;
	if (n<=0 || n>100000) cout <<"INVALID"<<endl;
	else{
	bool ans = false;
	if (n%100==0){
	if (n%400==0) ans = true;
	};
	else if (n%4==0) ans = true;
	if (bool = true ) cout <<"YES"<<endl; else cout << "NO"<<endl;
	}

	return 0;
}
