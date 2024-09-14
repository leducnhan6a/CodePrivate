#include <bits/stdc++.h>
using namespace std;

bool isGCDSum(int a, int b, int i) {
    if ((a % i == 0 ) && (b % i == 0)) return true; else return false;
}

void 

int main()
{
    int t; cin >> t;
    while (t!=0)
    {
        long long n; cin >> n;
        int sumDigit = 0;
        long long temp = n;
        
        while (temp != 0)
        {
            sumDigit += temp % 10;
            temp /= 10;
        }
        cout << n << " " << sumDigit << endl;
        for (int i = 2; i <= sumDigit; i++)
            if (isGCDSum(n, sumDigit, i)) {
                cout << n << endl;
                break;
            }
            else ++n;
        cout << n << endl;
        --t;
    }
    
    
    return 0;
}
