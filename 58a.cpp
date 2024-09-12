#include <bits/stdc++.h>
using namespace std;


int main()
{
    string st;cin >> st;
    string s ="hello";
    int j(0);
    for (int i = 0; i < st.size(); i++) 
    if (s[j]==st[i]) ++j;
    //cout << j;
    if (j==5) cout << "YES"<<endl; else cout << "NO" <<endl;
    
    
    
    
    
    
    
    
   
    

    return 0;
}
