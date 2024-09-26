#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5]; 
    a[0] = 1; a[1] = 5; a[2] = 10; a[3] = 20; a[4] = 100;
    
    long long n; cin >> n;
    int i = 4;
    int count = 0;
    while (n % a[i] >= 0)
    {
        count += n / a[i];
        n = n % a[i];        
        --i;
    }
    cout << count << endl;   
    return 0;
}
