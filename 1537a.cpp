#include <iostream>
using namespace std;
 
int main()
{
    int b[1000];
    int t;cin>> t;
    for (int i(0);i<t;++i)
    {
    	int n;cin >>n;
    	int a[50];
    	for (int j(0);j<n;++j) cin >> a[j];
    	int tong(0);
    	for (int j(0);j<n;++j) tong+= a[j];
    	if (tong <n) b[i]=1;
        else  b[i]=tong -n;
    }
 	for (int i (0); i < t; ++i)
 	cout << b[i]<<endl;
    return 0;
}