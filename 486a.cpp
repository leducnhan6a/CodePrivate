#include <bits/stdc++.h>
using namespace std;

long long fn(long long  n)
{
    if (n%2==0) return n/2;    else return (-(n+1)/2);
}
int main()
{
    long long a; cin >> a;
   
    cout << fn(a);
    return 0;
}
