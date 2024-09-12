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
    int n,p; cin >> n>>p;
    int count(0);
    for (int i = 1; i <= n; i++)
    if (gcd(i,n)==p) ++count;
    cout << count<<endl;
    return 0;
}
