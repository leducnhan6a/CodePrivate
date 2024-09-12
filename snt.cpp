#include <bits/stdc++.h>
using namespace std;

long long gt(long long n)
{
    long long res(1);
    for (long long i = 1; i <= n; i++) res*=i;
    return res;
}


int main()
{   
    int n; cin >> n;
    //cout << gt(n)<<endl;
    if ((gt(n-1)+1) %n==0) cout <<"Yes"; else cout << "No";
    return 0;
}
