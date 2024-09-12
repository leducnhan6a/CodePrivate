#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin >> t; 
    while (t!=0)
    {
        int n; cin >> n;
        int a[n];        
        long long res = 1;  
        for (int i = 0; i < n; i++).
        {
            cin >>a[i];res*=a[i];
        }
        cout << (res+n-1)*2022<<endl;
        --t;
    }
    
    
    return 0;
}
