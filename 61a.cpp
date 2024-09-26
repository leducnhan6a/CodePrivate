#include <bits/stdc++.h>
using namespace std;

bool is1or0 (char a, char b){ 
    if (a == b) return false; else return true;
}

int main()
{
    string str1, str2; cin >> str1 >> str2;
    string res = {};
    for (int i = 0; i < str1.length(); i++)
        if (is1or0(str1[i], str2[i])) res += '1'; else res += '0';
    cout << res << endl;
    return 0;
}
