#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    while (b!=0)
    {
        int r;
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main()
{
    int t; cin >> t;
    while (t!=0)
    {
        int n; cin >> n;int max(1);
        for (int i = 1  ; i < n; i++) for (int j = i+1; j <= n; j++)
        if (gcd(i,j)>max) max=gcd(i,j);
        cout <<max << endl;
        --t;
    }
    
    return 0;
}
