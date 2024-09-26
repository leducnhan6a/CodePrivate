#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int p; cin >> p;
    int a[p]; int b[p];
    int maxa = 0;
    int maxb = 0;
    for (int i = 0; i < p; i++)
    {
        cin >> a[i];
        if (a[i] >= maxa) maxa = a[i];
    }
    for (int i = 0; i < p; i++)
    {
        cin >> b[i];
        if (b[i] >= maxb) maxb = b[i];
    }
    // cout << maxa << " " << maxb << endl;
    if (maxa == maxb) { 
        if (maxa <= n) cout << "Oh, my keyboard!"<<endl; else cout << "I become the guy." <<endl;
    } else
    {
        if ((maxa >= n) || (maxb >= n)) cout << "I become the guy." <<endl; else cout << "Oh, my keyboard!"<<endl;
    }   
    return 0;
}
