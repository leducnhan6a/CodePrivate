#include  <bits/stdc++.h>
using namespace std;

int num(int a, int b, int c, int d) {
    return a * 1000 + b * 100 + c * 10 + d;
}

int main()
{
    int n; cin >> n;
    int temp = 0;
    int firstDigit = n / 1000; 
    for (int d1 = firstDigit; d1 <= 9; firstDigit++)
        for (int d2 = 0; d2 <= 9; d2++)     
            for (int d3 = 0; d3 <= 9; d3++)
                for (int d4 = 0; d4 <= 9; d4++) {
                    temp = num(d1, d2, d3, d4);
                    if (
                        (d1 != d2)
                        && (d1 != d3)
                        && (d1 != d4)
                        && (d2 != d3)
                        && (d2 != d4)
                        && (d3 != d4)
                        && (temp > n)
                    ) 
                {
                    break;
                    cout << temp  << endl;}
                } 
    return 0;
}
