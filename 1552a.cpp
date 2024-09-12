#include <bits/stdc++.h>
using namespace std;

void swap(char &a,char &b)
{
    char tmp;
    tmp=a;a=b;b=tmp;

}

int main()
{
    int t ; cin >>t;
    while ( t!=0)
    {
        int n; cin >> n;
        string st; cin >> st;
        string res=st;
        int count(0);
        for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
        if (static_cast<int>(st[i]) > static_cast<int>(st[j])) swap(st[i],st[j]);
        for (int i = 0; i < n; i++) if (res[i]!=st[i]) ++count;
        cout << count<<endl;
        --t;
    }
    return 0;
}
