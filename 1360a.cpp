#include <bits/stdc++.h>
using namespace std;

void swap(int &a,int &b)
{
    int tmp; tmp=a;a=b;b=tmp;
}

bool sqr(int a)
{
    int x= sqrt(a);
    if (pow(x,2)==a) return 1;
    else return 0;
}

int main()
{
    int t; cin >> t;
    while ( t!=0)
    {
    int a,b ; cin >> a>>b;
    long long res= static_cast<long long>(2)*static_cast<long long>(a)*static_cast<long long>(b);
    if (a==b) cout <<pow(a+b,2)<<endl;
    else
    {
    long long i=sqrt(res);
    if (pow(i,2)==res ) cout << res<<endl;
    else cout <<pow(i+1,2)<<endl;
    }
    --t;
    }
    



    return 0;
}
