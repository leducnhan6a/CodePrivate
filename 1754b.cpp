#include<bits/stdc++.h>
using namespace std;
 

int main()
{
    int t; cin >> t;
    while (t!=0)
    {
        int n; cin >> n;
        string str; cin >> str;
        int count =0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i]=='Q')
            {
                count++;
            }            
        }
        if (2*count <= n) cout << "Yes"<<endl; else cout << "No"<<endl;
        --t;
    }
    
    return 0;
}
