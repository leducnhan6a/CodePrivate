#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t; cin >> t;
    while (t!=0)
    {
        int n; cin >> n;
        int a[n];
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i % 2 != 0) sum -= a[i]; else sum += a[i];
        }
        
        
    cout << sum << endl;

        --t;
    }
    
    return 0;
}
