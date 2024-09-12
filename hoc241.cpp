#include <bits/stdc++.h>
using namespace std;

long long gcd( long long a, long long b)
{
    int r;
    while (b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main()
{
    long long n,m; cin >> n>>m;
    cout << gcd(n,m) << ' '<< (n*m)/gcd(n,m)<<endl;
    return 0;
}
