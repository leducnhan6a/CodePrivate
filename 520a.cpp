#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    string st; cin >>st;
    set <char> a;
    for (int i = 0; i < n; i++) 
    {
    if (st[i]<=90) st[i]+=32;    
    a.insert(st[i]);
    }    
    int count(0);
    for (auto i:a) ++count ;
    if (count ==26) cout << "YES"<<endl; else cout << "NO"<<endl;
    return 0;
}
