#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t!=0)
    {   
        int n,x; cin >>n>>x;
        int nhan[n];
        int chan(0);int le(0);
        int max(0);
        for (int i = 0; i < n; i++) 
        {
            cin >> nhan[i];
            if (nhan[i]%2==0) ++chan; else ++le;
        }
        //if (chan<le) max = le ; else max= chan;
        if (le>=x) cout <<"Yes"<<endl;
        else
        {
            
        }

        
        --t;
    }
    return 0;
}
