#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    int t ; cin >> t;
    while (t!=0)
    {
        int n; cin >> n;
        int nhan[n];
        int res(0);
        int count1(0);int count2(0);
        for (int i = 0; i < n; i++)
        {
            cin >>nhan[i];
            res+=nhan[i];
            if (nhan[i]%2==0) ++count1;
            else ++count2;
        }
        if ((res%2==0) && (count1==n-count2))
        cout <<"YES"<<endl; else cout <<"NO"<<endl; 
        
        --t;
    }
    return 0;
}
