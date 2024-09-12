#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while ( t!=0)
    {
        string st; cin >> st;
        int n=st.size();
        for (int i = 1; i <=st.size(); i++) if ((static_cast<int>(st[1])==i+96))st=st-st[1];
        else if (static_cast<int>(st[st.size()]== i+96)) st-=st[st.size()]
        
        
       
        
        
        
        --t;
    }
    return 0;
}
