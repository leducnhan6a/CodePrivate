#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >>t;
    while ( t!=0)
    {
        int h,m; cin >>h>>m;
        int x=23-h;
        if ( (m>=0) && (m<60)) 
        {

            
            cout << x*60+60-m<<endl;
        }
        else cout << (x+1)*60+60-m<<endl;

        --t;    
    }
    return 0;
}
