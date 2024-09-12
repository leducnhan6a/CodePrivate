#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while ( t!=0)
    {
    string st; cin >>st;
    cout <<st.size()<<endl;
    for (int i = 0; i < st.size(); i++) 
    {
        int a =(static_cast<int>(st[i])-48 )* pow(10,st.size()-i-1);
    if (a!=0) cout <<a<<' ';
    }
    cout <<endl;
    --t;
    }

    return 0;
}

