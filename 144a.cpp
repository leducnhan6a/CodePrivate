#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    int indexMax = 0; int max = 0;
    int indexMin = 0; int min = 100;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= min) {
            min = a[i];
            indexMin = i;
        }
    }

    for (int i = n-1; i >= 0; i--)
    {
        if (a[i] >= max) {
            max = a[i];
            indexMax = i;
        }
    }
    

    int count = 0;
    if (indexMax < indexMin) count = indexMax + n - indexMin - 1; else count = indexMax + n - (indexMin + 2);
    cout << count << endl;
    // cout << indexMax << " " << indexMin << endl;
    return 0;
}
