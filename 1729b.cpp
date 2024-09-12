#include <bits/stdc++.h>
using namespace std;

int ascii(char c) {
    return static_cast<int>(c)-96;
}

int main() {
    int t; cin >> t; 
    while (t!=0) {
        int n; cin >> n;
        string res ="";
        string st; cin >> st;
    for (int i=0; i<st.length(); i++) 
    {
        if (ascii(st[i]) < 10) {
            res+= to_string(st[i]);
        }
        else res+= to_string(st[i]) + "0";
    }
    cout << res << endl;
        --t;
    }
    return 0;
}