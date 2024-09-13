#include <bits/stdc++.h>
using namespace std;

bool bend (int n, int h) {
    bool res = false;
    if (n > h) res = true;
    return res;
}

int main()
{
    int n, h; cin >> n >> h;
    int a[n];
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(bend(a[i], h)) res += 2; else ++res;
    }
    cout << res << endl;
    
    // >h bend;
    // <h laf noptice by guard
    



    return 0;
}
