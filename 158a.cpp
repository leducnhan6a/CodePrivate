#include <bits/stdc++.h>
using namespace std;



int main()
{
	string str1, str2 = "";
	cin >> str1 >> str2;
	long long count1 = 0; long long count2 = 0;
	for (int i = 0; i < str1.length(); i++) {
		str1[i] = tolower(str1[i]);
		str2[i] = tolower(str2[i]);
		count1 += (str1[i]);
		count2 += (str2[i]);
	}
	cout << str1 << " " << str2 << endl;
	cout << count1 << " " << count2 << endl;
	if (count1 < count2) cout << -1 << endl; else
	{
		if (count1 > count2) cout << 1 << endl; 
		else cout << 0;
	} 
	return 0;
}