#include <bits/stdc++.h>
using namespace std;

bool is4or7 (int n) {
    bool res = true;
    if ((n == 4) || (n == 7)) res = true; else res = false;
    return res;
}

int main()
{
    int count = 0;
    unsigned long long n; cin >> n;
    while (n !=0 )
    {
        if (is4or7(n % 10)) ++count;
        n /= 10;
    }
    int count47 = 0;
    int countDigit = 0;

    if (count >=4){
        while (count != 0 )
    {
        ++countDigit;
        if (is4or7(count % 10)) ++count47;    
        count /= 10;
    }
    if (count47 == countDigit) cout << "YES" << endl; else cout << "NO" << endl;
    }
    else cout << "NO" << endl;
    return 0;
}
