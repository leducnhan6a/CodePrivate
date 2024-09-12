#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t!=0)
    {
        int n; cin >> n;
        int nhan[n];
        set <int> a;
        for (int i = 0; i < n; i++)
        {
            cin>> nhan[i];
            a.insert(nhan[i]);
        }
        sort(nhan,nhan+n);
        int res(-1);
        int tmp=nhan[0];
        int i(0);
        while (i<n)
        {
        for (auto j:a)  if (j==nhan[i]) ++i;
        }
        if (i==0) cout <<'-1'<<endl;
        else cout <<nhan[i]<<endl;  
        --t;  
    }
    
    return 0;
}
