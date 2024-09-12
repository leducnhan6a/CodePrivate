#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int q; cin >>q;
    while (q!=0)
    {
        string s,t;cin >>s>> t;
        bool res(1);
        if (s.size()<t.size())
        {
            string tmp;
            tmp=s;s=t;t=tmp;
        }
        for (int i = 0; i < t.size(); i++)
        if (s[i]!=t[i]) res =0;
        if ( res==0) cout <<'-1'<<endl;
        else 
        
        --q;
    }
    return 0;
}
