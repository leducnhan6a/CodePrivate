#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st; cin >>st;
    char nhan[30];
    for (int i = 1; i < st.size()-2; i+=2)
    if  (st[i]>st[i+2] )
    {
        char tmp;
        tmp = st[i];
        st[i]=st[i+2];
        st[i+2]=tmp;
    }
    int count(0);
    for (int i = 1; i <= st.size(); i+=2)
    if (st[i]!=st[i+2]) cout<<i<<' ';
    cout << count <<endl;
    return 0;
}
