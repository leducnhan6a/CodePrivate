#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    int n ; cin >>n;
    int nhan[n-1];
    for (int i = 0; i < n-1; i++) cin >>nhan[i];
    sort(nhan,nhan+n-1);
    int a,b; cin >> a>>b;
    int count = b-a;
    int res(0);
    for (int  i = 0; i < count; i++) res+=nhan[i];
    cout << res << endl;
    
    
    
    return 0;
}
