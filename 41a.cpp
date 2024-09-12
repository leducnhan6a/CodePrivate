#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;string res;
    for (int  i = t.size()-1; i >=0; --i) res+=t[i];
    if (res==s) cout <<"YES"; else cout <<"NO";
    return 0;
}
