#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin >>t;
    while (t!=0){
        long long a,b,c,x,y; cin >> a>>b>>c>>x>>y;
        if (a<x) c-=x-a;
        if (b<y) c-=y-b;
        //cout << c<<endl;
        if (c<0) cout <<"NO"<<endl;else cout << "YES"<<endl;
        --t;
    }
    return 0;
}
