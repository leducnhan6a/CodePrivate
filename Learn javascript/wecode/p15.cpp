#include <bits/stdc++.h>
using namespace std;

bool is1orM(int param, int m) { 
    bool res = false;
    if ((param == 1) || (param == m)) res = true;
    return res; 
}

int main()
{
    int m, n; cin >> m >> n;
    for (int i = 1; i <= m; i++) 
        if (is1orM(i, m)) { 
            for (int j = 1; j <= n; j++) cout << '*';
            cout << endl;
        }
        else { 
            cout << '*';
            for (int j = 2; j <= n-1; j++) cout << ' ';
            cout << '*' << endl;
        }
                
    
    return 0;
}
