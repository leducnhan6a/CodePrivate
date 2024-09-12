#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t ; cin >> t ;
    while (t!=0)
    {
        int l,r ; cin >> l >>r;
        if (abs(l-r)<l) cout <<r%l << endl;
        else 
        {
            int x = r/2;
            if (r % 2 == 0)  cout <<x-1<<endl; else cout <<x<<endl;

        }


        --t;
    }
    return 0;
}
