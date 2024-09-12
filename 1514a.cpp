#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ; cin >> t;
    while (t!=0);
    {
        int n; cin >>n;
        int nhan[n];
        long long res(1);
        for (int i = 0; i < n; i++)
        {
            cin >>nhan[i];
            res*=nhan[i];
        }
        int x= sqrt(res);
        if (pow(x,2) == res ) cout <<"NO" << endl; else cout << "YES"<<endl;
        
        
        --t;
    }
    return 0;
}
