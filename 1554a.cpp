#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ;cin >>t ;
    while ( t!=0)
    {
        int n; cin >>n;
        int nhan[n];
        for (int i = 0; i < n; i++) cin >> nhan[i];
        if (n==2) cout << static_cast<long long>(nhan[0]) * static_cast<long long>(nhan[1])<<endl;
        else
        {
        nhan[0]=0;  
        sort(nhan,nhan+n,greater<int>());
        int i(1);
        while (nhan[0]==nhan[i]) 
        {
            ++i;
        }
        //cout << i<<endl;
        if (i==n-1) cout <<pow(static_cast<long long>(nhan[0]),2)<<endl;
        cout <<static_cast<long long>(nhan[i])*static_cast<long long>(nhan[0])<<endl;
        }               
        --t;
        
    }
    return 0;
}
