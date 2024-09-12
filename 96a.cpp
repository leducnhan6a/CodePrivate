#include <bits/stdc++.h>
using namespace std;


int main()
{
    freopen("DEBUG.inp","r",stdin);
    freopen("DEBUG.out","w",stdout);
    string st; cin >>st;
    char res = st[0];
    int count(0);
    for (int i = 1; i < st.size(); i++)
    {
        
    if (st[i]!=res) res = st[i]; else ++count;
    if (count==7) 
    {
        break;
        cout << "YES"<<endl;
    }
    }

    
      
      


    return 0;
}
