#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int max1(0);int max2(0);
    int p; cin >> p;
    while (p!=0)
    {
        int a; cin >> a;
        if (a>max1) max1=a;
        --p;
    }
    int q; cin >> q;
    while (q!=0)
    {
        int b; cin >> b;
        if (b>max2) max2=b;
        --q;
    }
    
    if ((max1==n) || (max2==n)) cout <<"I become the guy."; else cout <<"Oh, my keyboard!";    
    return 0;
}
