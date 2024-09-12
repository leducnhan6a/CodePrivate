#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t!=0)
    {
        int n; cin >> n;
        if (n<=8) cout << 0<<endl; else{
            
        //cout << (n-1)/9 +1;
        cout <<(n-9)/10 +1<<endl;
        

        }
        
        --t;
    }
    
    return 0;
}
