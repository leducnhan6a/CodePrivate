#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >>t;
    while (t!=0)
    {
        int r,b,d; cin >>r>> b>>d;
        if (abs(r-b)<=d) cout << "YES"<<endl;else cout << "NO" <<endl;
        --t;
    }
    return 0;
}
