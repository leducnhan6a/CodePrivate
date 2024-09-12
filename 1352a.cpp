#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >>t;
    while (t!=0)
    {
        string st; cin >> st;
        int count(0);
        for (int i = 0; i < st.size(); i++) 
        if (static_cast<int>(st[i])-48 !=0) ++count;
        cout << count<<endl;     
        for (int i = 0; i < st.size(); i++) 
        if (static_cast<int>(st[i])-48 !=0)       
        cout << (static_cast<int>(st[i]) -48)* pow(10,st.size()-1-i)<<' ';
        cout << endl;
        --t;
        
    }
    return 0;
}
