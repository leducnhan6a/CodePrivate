#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t!=0) {
        long long n; cin >> n;
        long long ff[n],dmg[n];
        long long sum = dmg[0];
        for (long long i = 0; i < n; i++)
        {
            cin >> ff[i];
        }
        for (long long i = 0; i < n; i++)
        {
            cin >> dmg[i];
        }
        cout << sum << endl;
        for (long long i = 0; i < n-1; i++)
        {
            if (ff[i]==ff[i+1]) {
                sum += dmg[i+1];
            }
            else sum += 2*dmg[i+1];
        }

        // cout << sum << endl;
        // cout << dmg[0]<< endl;

        

        --t;
    }


    return 0;
}