#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count(0);
    int n;cin >>n;
    string st; cin >>st;
    for (int  i = 0; i < n; i++)
    if (st[i]=='A') ++count;
    if (2*count >n) cout <<"Anton";
    else if (2*count <n) cout <<"Danik";
    else cout<<"Friendship";
    return 0;
}
