#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;cin>>t;
    while (t!=0)
    {
        int n; cin >> n; int nhan[n]; int count(0);
        int chan(0);int le(0);
        for (int i = 0; i < n; i++)
        {
            cin>>nhan[i];
            if (nhan[i]%2==0) ++chan;else ++le;
        }
       
        if (abs(chan-le)=1) 
        {
            if (n==1) 
            {
                if (nhan[0]%2==0) cout <<0<<endl; else cout <<-1<<endl;
            }
            else
            {
           
            for (int i = 0; i < n; i++) if ((nhan[i]%2!= i%2)) ++count ;
            cout << count/2 << endl;
            }
          
        }
        else cout <<-1<<endl;
        --t;
    }
    
    return 0;
}
